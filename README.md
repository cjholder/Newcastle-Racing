
cd ~/ros2_foxy_workspace // Change to your ROS2 Foxy workspace directory in your home folder
colcon build // Build all packages in the ROS2 workspace
source /opt/ros/foxy/setup.bash // Source the setup file for ROS2 Foxy to configure the environment
source install/local_setup.bash // Source the local setup file to configure the environment for built packages
ros2 launch eufs_launcher eufs_launcher.launch.py // Launch the simulation with the EUFS launcher
./install/ft-fsd-path-planning/bin/path_planning_node // Execute the path planning node
ros2 run mpcc_control mpcc_control_node // Execute the MPCC control node

colcon build --packages-select ft-fsd-path-planning --symlink-install // Build only the path planning package with symlink installation
colcon build --packages-select mpcc_control // Build only the MPCC control package

ros2 topic list // List all ROS2 topics
ros2 topic info /camera_1/cones // Get information about the /camera_1/cones topic
ros2 topic echo /camera_1/cones // Display messages from the /camera_1/cones topic
ros2 topic echo /path // Display messages from the /path topic
ros2 topic info /camera/imu/data // Get information about the /camera/imu/data topic
ros2 topic echo /camera/imu/data // Display messages from the /camera/imu/data topic
ros2 topic echo /camera/imu/data // Repeat displaying messages from the /camera/imu/data topic
ros2 topic echo /odometry_integration/car_state // Display messages from the /odometry_integration/car_state topic
colcon build --packages-select mpcc_control // Rebuild the MPCC control package
ros2 topic echo /imu/data // Display messages from the /imu/data topic
