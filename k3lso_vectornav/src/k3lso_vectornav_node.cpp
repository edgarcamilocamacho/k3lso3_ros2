#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "tf2_ros/transform_broadcaster.h"

#include "rt/rt_vectornav.h"

VectorNavData _vectorNavData;
rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_publisher;
std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster;

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("k3lso_vectornav");
    imu_publisher = node->create_publisher<sensor_msgs::msg::Imu>("imu", 10);
    tf_broadcaster = std::make_shared<tf2_ros::TransformBroadcaster>(node);
    if(!init_vectornav()){
        return 1;
    }
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}