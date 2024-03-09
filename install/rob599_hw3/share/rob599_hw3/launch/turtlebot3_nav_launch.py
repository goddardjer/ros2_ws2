from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

import os

def generate_launch_description():
    return LaunchDescription([

        # Start the Turtlebot 3 simulation in Gazebo.
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(
                    get_package_share_directory('turtlebot3_gazebo'),
                    'launch/turtlebot3_house.launch.py'
                )
            ]),
            launch_arguments={
                'x_pose': '-1.5',
                'y_pose': '1.5'
            }.items()
        ),


        # Start up the Navigation Stack
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                os.path.join(
                    get_package_share_directory('turtlebot3_navigation2'),
                    'launch/navigation2.launch.py'
                )
            ]),
            launch_arguments={
                'use_sim_time': 'True',
                'params_file': os.path.join(
                    get_package_share_directory('turtlebot3_navigation2'),
                    '/opt/ros/humble/share/nav2_bringup/params/nav2_params.yaml'
                ),
                'map' : "/home/ubuntu/ros2_ws2/src/rob599_hw3/resource/map.yaml"
            }.items()
        ),


        Node(
            #origin: [-6.29, -6.8, 0]
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_map_odom',
            output='screen',
            arguments=['1.5', '-1.5', '0', '0', '0', '0', 'map', 'odom']
        ),

        # Node(
        #     package='rob599_hw3',
        #     executable='places',
        #     name='places_node',
        #     output='screen',
        # ),
    ])