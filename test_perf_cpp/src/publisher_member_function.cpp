#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/imu.hpp"

using namespace std::chrono_literals;

class ImuPublisher : public rclcpp::Node
{
  public:
    ImuPublisher()
    : Node("minimal_publisher")
    {
      publisher_ = this->create_publisher<sensor_msgs::msg::Imu>("imu", 10);
      timer_ = this->create_wall_timer(100us, std::bind(&ImuPublisher::timer_callback, this));
    }

  private:
    void timer_callback()
    {
      auto message = sensor_msgs::msg::Imu();
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ImuPublisher>());
  rclcpp::shutdown();
  return 0;
}