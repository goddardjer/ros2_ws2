import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Pose, Point, Quaternion
from rob599_msgs2.srv import MemorizePosition, ClearPositions, Save, Load
from tf2_geometry_msgs import PoseStamped
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from rclpy.duration import Duration
from geometry_msgs.msg import PoseStamped
from rob599_msgs2.action import GoTo
from rob599_msgs2.action import Patrol
from rclpy.action import ActionServer

import json
import os

class PlacesNode(Node):
    def __init__(self):
        super().__init__('places')
        self.positions = {}
        self.marker_id = 0 
        self.navigator = BasicNavigator()

        # Service definitions
        self.memorize_position_service = self.create_service(
            MemorizePosition, 'memorize_position', self.memorize_position_callback)
        self.clear_positions_service = self.create_service(
            ClearPositions, 'clear_positions', self.clear_positions_callback)
        self.save_positions_service = self.create_service(
            Save, 'save', self.save_positions_callback)
        self.load_positions_service = self.create_service(
            Load, 'load', self.load_positions_callback)
        self.action_server = ActionServer(
            self,
            GoTo,
            'go_to',
            self.execute_callback)
        self.patrol_action_server = ActionServer(
            self,
            Patrol,
            'patrol',
            self.execute_patrol_callback)

        # Marker publisher
        self.marker_publisher = self.create_publisher(Marker, 'positions_marker', 10)

        # TF buffer and listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)



    async def execute_patrol_callback(self, goal_handle):
        feedback_msg = Patrol.Feedback()
        result = Patrol.Result()
        for place in self.positions:
            x = self.positions[place].position.x
            y = self.positions[place].position.y
            self.go_to(x, y)
            while not self.navigator.isTaskComplete():
                feedback = self.navigator.getFeedback()
                self.get_logger().info(f'Estimated time of arrival: {Duration.from_msg(feedback.estimated_time_remaining).nanoseconds / 1e9:.2f} seconds')
            if not goal_handle.is_active:
                result.success = False
                result.message = "Patrol was cancelled"
                return result
        result.success = True
        result.message = "Patrol complete"
        return result

    async def execute_callback(self, goal_handle):
        goal = goal_handle.request
        feedback_msg = GoTo.Feedback()
        if goal.place in self.positions:
            # Send the robot to the place
            x = self.positions[goal.place].position.x
            y = self.positions[goal.place].position.y
            self.go_to(x, y)
            feedback_msg.status = f"Going to {goal.place}"
            if goal_handle.is_active:
                await goal_handle.publish_feedback(feedback_msg)
            # Wait for the robot to reach the place
            while not self.navigator.isTaskComplete():
                feedback = self.navigator.getFeedback()
                self.get_logger().info(f'Estimated time of arrival: {Duration.from_msg(feedback.estimated_time_remaining).nanoseconds / 1e9:.2f} seconds')
            result = GoTo.Result()
            result.success = True
            result.message = f"Reached {goal.place}"
            return result
        else:
            feedback_msg.status = f"{goal.place} does not exist"
            if goal_handle.is_active:
                await goal_handle.publish_feedback(feedback_msg)
            result = GoTo.Result()
            result.success = False
            result.message = f"{goal.place} does not exist"
            return result

    def go_to(self, x, y):
        goal_pose = PoseStamped()
        goal_pose.header.frame_id = 'map'
        goal_pose.header.stamp = self.navigator.get_clock().now().to_msg()
        goal_pose.pose.position.x = x
        goal_pose.pose.position.y = y
        goal_pose.pose.orientation.w = 1.0
        self.navigator.goToPose(goal_pose)

    def memorize_position_callback(self, request, response):
        # Store the position
        current_position = self.get_current_position()  # Implement this function
        self.positions[request.name] = current_position
        self.publish_markers()
        response.success = True
        self.get_logger().info(f"Position memorized with name: {request.name}")
        return response

    def clear_positions_callback(self, request, response):
        # Clear stored positions
        self.positions.clear()

        # Create a marker for deletion
        marker = Marker()
        marker.action = Marker.DELETEALL

        # Publish the delete marker
        self.marker_publisher.publish(marker)

        response.success = True
        self.get_logger().info("Positions cleared")
        return response

    def save_positions_callback(self, request, response):
    # Save positions to a file
        try:
            os.makedirs('resources', exist_ok=True)  # Create the directory if it does not exist

            # Convert Pose objects to dictionaries
            positions_dict = {name: {'position': {'x': pose.position.x, 'y': pose.position.y, 'z': pose.position.z},
                                    'orientation': {'x': pose.orientation.x, 'y': pose.orientation.y,
                                                    'z': pose.orientation.z, 'w': pose.orientation.w}}
                            for name, pose in self.positions.items()}

            with open(os.path.join('resources', request.filename), 'w') as f:
                json.dump(positions_dict, f)

            response.success = True
            self.get_logger().info("Positions saved")
        except Exception as e:
            response.success = False
            self.get_logger().error(f"Failed to save positions: {e}")
        return response

    def load_positions_callback(self, request, response):
    # Load positions from a file
        try:
            with open(os.path.join('resources', request.filename), 'r') as f:
                positions_dict = json.load(f)

            # Convert dictionaries back to Pose objects
            self.positions = {name: Pose(position=Point(**pose_dict['position']),
                                        orientation=Quaternion(**pose_dict['orientation']))
                            for name, pose_dict in positions_dict.items()}

            response.success = True
            self.get_logger().info("Positions loaded")
        except Exception as e:
            response.success = False
            self.get_logger().error(f"Failed to load positions: {e}")
        return response

    def publish_markers(self):
        for name, position in self.positions.items():
            marker = Marker()
            marker.header.frame_id = 'map'
            marker.type = Marker.SPHERE
            marker.action = Marker.ADD
            marker.scale.x = 0.5
            marker.scale.y = 0.1
            marker.scale.z = 0.1
            marker.color.a = 1.0
            marker.color.r = 0.0
            marker.color.g = 1.0
            marker.color.b = 0.0
            marker.pose = position
            marker.id = self.marker_id  # Use the counter as the marker ID
            self.marker_id += 1  # Increment the counter
            marker.text = name
            self.marker_publisher.publish(marker)

    def get_current_position(self, frame_id='map'):
        # Build a stamped pose for the base link origin
        origin = PoseStamped()
        origin.header.frame_id = 'base_link'

        # Set the position
        origin.pose.position.x = 0.0
        origin.pose.position.y = 0.0
        origin.pose.position.z = 0.0

        # Set an arbitrary orientation
        origin.pose.orientation.x = 0.0
        origin.pose.orientation.y = 0.0
        origin.pose.orientation.z = 0.0
        origin.pose.orientation.w = 1.0

        # Get the transform to the map frame
        try:
            new_pose = self.tf_buffer.transform(origin, frame_id, rclpy.duration.Duration(seconds=1))
            return new_pose.pose
        except TransformException as e:
            self.get_logger().error(f"Failed to get current position: {e}")
            return None

def main(args=None):
    rclpy.init(args=args)
    places_node = PlacesNode()
    rclpy.spin(places_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()