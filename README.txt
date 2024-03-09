ReadME

1. Open 5 terminals and source with “source  ~/.baschrc” and “source install/setup.bash”

2.  In the first terminal run “ros2 launch rob599_hw3 turtlebot3_nav_launch.py” to launch gazebo and rviz with the map of the house.

3.  Use “rqt” in another terminal to to bring up an interface to run the service calls

4.  the service calls are as follows. “memorize_position” keeps a point and orientation on the map and places a marker. “clear_position” clears all of the positions. “save” saves the positions to a file and “load loads the positions from a file.

5. Once you have run the launch file use “ros2 run rob599_hw3 places” to launch the file that will mark and save the map. Use “rqt” and find the memorize_position service to save a position on the map. Make sure to load the position markers into rviz to see them.

NOTE : Rvis has a quirk where you have to move and place a second marker after enabling the markers to see the new markers. A similar bug can be encountered with the clear_positions but toggeling marker visability fixes this.

6. Us the load service to load a pre-set list of markers and have the file name be “HW3.txt” which is located in the resource folder with the map.yaml.

7.  Once you have loaded the “HW3.txt” use another sourced terminal and run “ros2 action send_goal /patrol rob599_msgs2/action/Patrol {}” to start a patrol.

8. To run the service for knockknock find the knockknock service in in the rqt interface.

9. In the last terminal the go_to action can be run using “ros2 run rob599_hw3 go_to_client” the list  found in “HW3.txt” contains all of the names that go_to will accept.
