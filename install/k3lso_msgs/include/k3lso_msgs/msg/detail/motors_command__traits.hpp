// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__TRAITS_HPP_
#define K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__TRAITS_HPP_

#include "k3lso_msgs/msg/detail/motors_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<k3lso_msgs::msg::MotorsCommand>()
{
  return "k3lso_msgs::msg::MotorsCommand";
}

template<>
inline const char * name<k3lso_msgs::msg::MotorsCommand>()
{
  return "k3lso_msgs/msg/MotorsCommand";
}

template<>
struct has_fixed_size<k3lso_msgs::msg::MotorsCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<k3lso_msgs::msg::MotorsCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<k3lso_msgs::msg::MotorsCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__TRAITS_HPP_
