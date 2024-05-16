
### Initial Setup and Environment Configuration

1. **Navigate to Workspace:**
   Start by changing to your ROS2 Foxy workspace directory located in your home folder. This is where all your development and builds will take place.
   ```bash
   cd ~/ros2_foxy_workspace
   ```

2. **Build Packages:**
   Compile all the available packages in your workspace. This ensures that any changes or updates to the packages are built.
   ```bash
   colcon build
   ```

3. **Environment Setup:**
   Load the ROS2 Foxy setup configurations to set up the necessary environment for ROS2 operations.
   ```bash
   source /opt/ros/foxy/setup.bash
   ```
   If you are in a ROS2 Galactic environment, you may need to change the file setup.py, CMakeList, package.xml in MPCC AND ft-fsd-path-planning.Not tested
    ```bash
    source /opt/ros/galactic/setup.bash
    ```
4. **Local Environment Configuration:**
   After building the packages, source the local setup script to update your shell with the environment settings of the newly built packages. 
   ```bash
   source install/local_setup.bash
   ```

### Launching and Running Nodes

5. **Launch Simulation:**
   Execute the EUFS launcher to start the simulation environment, which is crucial for testing in a controlled virtual setting.
   ```bash
   ros2 launch eufs_launcher eufs_launcher.launch.py
   ```

6. **Execute Path Planning Node:**
   Run the path planning node which is part of the ft-fsd-path-planning package. This node is responsible for calculating and managing the driving path.
   ```bash
   ./install/ft-fsd-path-planning/bin/path_planning_node
   ```

7. **Execute MPCC Control Node:**
   Start the MPCC (Model Predictive Control and Contours) control node to manage vehicle dynamics and controls within the simulation.
   ```bash
   ros2 run mpcc_control mpcc_control_node
   ```

### Code Modifications and Re-deployment

8. **Selective Package Rebuilding:**
   If there are modifications in the path planning code, rebuild just the ft-fsd-path-planning package using symlink installation to quickly apply changes without affecting other packages.
   ```bash
   colcon build --packages-select ft-fsd-path-planning --symlink-install
   ```

9. **Rebuild Control Package:**
   Similarly, if changes are made to the MPCC control package, selectively rebuild it to ensure that all updates are compiled and ready for deployment.
   ```bash
   colcon build --packages-select mpcc_control
   ```

------------------------------------------------------------

colcon build // Build all packages in the ROS2 workspace

source /opt/ros/foxy/setup.bash // Source the setup file for ROS2 Foxy to configure the environment

source install/local_setup.bash // Source the local setup file to configure the environment for built packages

ros2 launch eufs_launcher eufs_launcher.launch.py // Launch the simulation with the EUFS launcher

./install/ft-fsd-path-planning/bin/path_planning_node // Execute the path planning node

ros2 run mpcc_control mpcc_control_node // Execute the MPCC control node


colcon build --packages-select ft-fsd-path-planning --symlink-install // Build only the path planning package with symlink installation

colcon build --packages-select mpcc_control // Build only the MPCC control package

--------------------------------------------------------------------------------------------------

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
