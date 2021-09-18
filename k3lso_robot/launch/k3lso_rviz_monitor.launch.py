import os

from ament_index_python.packages import get_package_share_directory, get_resource
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    # Arguments
    use_gui = LaunchConfiguration('use_gui', default='True')

    # File Paths
    rviz_file = os.path.join(get_package_share_directory('k3lso_description'), 'rviz', 'k3lso.rviz')
    urdf_path = os.path.join(get_package_share_directory('k3lso_description'), 'urdf', 'k3lso_v1.urdf')

    with open(urdf_path, 'r') as infp:
        robot_desc = infp.read()

    return LaunchDescription([
        # Node(
        #     package='joint_state_publisher_gui',
        #     executable='joint_state_publisher_gui',
        #     name='joint_state_publisher_gui',
        #     arguments=[urdf_path],
        #     parameters=[{'use_gui': use_gui}],
        #     output='screen'),

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            # parameters=[{'robot_description': robot_desc}],
            arguments=[urdf_path],
            output='screen'),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_file],
            output='screen')
    ])