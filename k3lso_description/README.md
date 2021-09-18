# ROS2 Packages for K3lso v2 Quadruped Robot

**K3lso Robot description package**

## Models

* *k3lso_v1*: k3lso with regular joints orientation.
*  *k3lso_v2*: k3lso with strange joints orientation (used on the robot-gym repo).
* *ghost*: test quadruped of the robot-gym repo.

## Dependencies

``` bash
sudo apt-get install ros-foxy-joint-state-publisher-gui
```

## Executions

* **Fake joints and rviz visualization**:

``` bash
ros2 launch k3lso_description k3lso_rviz.launch.py
```



