// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__BUILDER_HPP_
#define K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__BUILDER_HPP_

#include "k3lso_msgs/msg/detail/motors_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace k3lso_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorsCommand_effort
{
public:
  explicit Init_MotorsCommand_effort(::k3lso_msgs::msg::MotorsCommand & msg)
  : msg_(msg)
  {}
  ::k3lso_msgs::msg::MotorsCommand effort(::k3lso_msgs::msg::MotorsCommand::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k3lso_msgs::msg::MotorsCommand msg_;
};

class Init_MotorsCommand_velocity
{
public:
  explicit Init_MotorsCommand_velocity(::k3lso_msgs::msg::MotorsCommand & msg)
  : msg_(msg)
  {}
  Init_MotorsCommand_effort velocity(::k3lso_msgs::msg::MotorsCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MotorsCommand_effort(msg_);
  }

private:
  ::k3lso_msgs::msg::MotorsCommand msg_;
};

class Init_MotorsCommand_position
{
public:
  explicit Init_MotorsCommand_position(::k3lso_msgs::msg::MotorsCommand & msg)
  : msg_(msg)
  {}
  Init_MotorsCommand_velocity position(::k3lso_msgs::msg::MotorsCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorsCommand_velocity(msg_);
  }

private:
  ::k3lso_msgs::msg::MotorsCommand msg_;
};

class Init_MotorsCommand_name
{
public:
  explicit Init_MotorsCommand_name(::k3lso_msgs::msg::MotorsCommand & msg)
  : msg_(msg)
  {}
  Init_MotorsCommand_position name(::k3lso_msgs::msg::MotorsCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MotorsCommand_position(msg_);
  }

private:
  ::k3lso_msgs::msg::MotorsCommand msg_;
};

class Init_MotorsCommand_header
{
public:
  Init_MotorsCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorsCommand_name header(::k3lso_msgs::msg::MotorsCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorsCommand_name(msg_);
  }

private:
  ::k3lso_msgs::msg::MotorsCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::k3lso_msgs::msg::MotorsCommand>()
{
  return k3lso_msgs::msg::builder::Init_MotorsCommand_header();
}

}  // namespace k3lso_msgs

#endif  // K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__BUILDER_HPP_
