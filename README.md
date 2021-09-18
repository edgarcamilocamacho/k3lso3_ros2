# ROS2 Packages for K3lso v2 Quadruped Robot

Tested with:

* Ubuntu 20.04 (Linux Mint 20.1) & ROS2 Foxy Fitzroy

## Packages documentation

* [k3lso_msgs](https://github.com/edgarcamilocamacho/k3lso3_ros2/tree/master/k3lso_msgs)
* [k3lso_description](https://github.com/edgarcamilocamacho/k3lso3_ros2/tree/master/k3lso_description)
* [k3lso_vectornav](https://github.com/edgarcamilocamacho/k3lso3_ros2/tree/master/k3lso_vectornav)
* [k3lso_moteus](https://github.com/edgarcamilocamacho/k3lso3_ros2/tree/master/k3lso_moteus)

## K3lso Robot

High level launch files are in the `k3lso_robot` package.

### Launch the fake joints and Rviz

``` bash
ros2 launch k3lso_robot k3lso_rviz_fake.launch.py
```

### Monitor joints in rviz

``` bash
ros2 launch k3lso_robot k3lso_rviz_monitor.launch.py
```
