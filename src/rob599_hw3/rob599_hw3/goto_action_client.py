import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from rob599_msgs2.action import GoTo

class GoToClientNode(Node):
    def __init__(self):
        super().__init__('go_to_client')
        self.client = ActionClient(self, GoTo, 'go_to')

    def send_goal(self, place):
        goal_msg = GoTo.Goal()
        goal_msg.place = place

        self.client.wait_for_server()

        self.goal_handle = self.client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self.goal_handle.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.feedback.status))

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.goal_result_callback)

    def goal_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.message))

def main(args=None):
    rclpy.init(args=args)

    go_to_client = GoToClientNode()

    while rclpy.ok():
        place = input("Enter a place to go to: ")
        go_to_client.send_goal(place)
        rclpy.spin_once(go_to_client)

    rclpy.shutdown()

if __name__ == '__main__':
    main()