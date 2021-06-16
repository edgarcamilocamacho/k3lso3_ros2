// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__BUILDER_HPP_
#define K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__BUILDER_HPP_

#include "k3lso_msgs/srv/detail/motors_step__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace k3lso_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorsStep_Request_motors_command
{
public:
  Init_MotorsStep_Request_motors_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::k3lso_msgs::srv::MotorsStep_Request motors_command(::k3lso_msgs::srv::MotorsStep_Request::_motors_command_type arg)
  {
    msg_.motors_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k3lso_msgs::srv::MotorsStep_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k3lso_msgs::srv::MotorsStep_Request>()
{
  return k3lso_msgs::srv::builder::Init_MotorsStep_Request_motors_command();
}

}  // namespace k3lso_msgs


namespace k3lso_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorsStep_Response_imu
{
public:
  explicit Init_MotorsStep_Response_imu(::k3lso_msgs::srv::MotorsStep_Response & msg)
  : msg_(msg)
  {}
  ::k3lso_msgs::srv::MotorsStep_Response imu(::k3lso_msgs::srv::MotorsStep_Response::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k3lso_msgs::srv::MotorsStep_Response msg_;
};

class Init_MotorsStep_Response_joint_state
{
public:
  Init_MotorsStep_Response_joint_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorsStep_Response_imu joint_state(::k3lso_msgs::srv::MotorsStep_Response::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return Init_MotorsStep_Response_imu(msg_);
  }

private:
  ::k3lso_msgs::srv::MotorsStep_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k3lso_msgs::srv::MotorsStep_Response>()
{
  return k3lso_msgs::srv::builder::Init_MotorsStep_Response_joint_state();
}

}  // namespace k3lso_msgs

#endif  // K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__BUILDER_HPP_
