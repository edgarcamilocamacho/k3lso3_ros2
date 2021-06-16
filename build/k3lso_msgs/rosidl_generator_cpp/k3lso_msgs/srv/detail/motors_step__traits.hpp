// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__TRAITS_HPP_
#define K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__TRAITS_HPP_

#include "k3lso_msgs/srv/detail/motors_step__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'motors_command'
#include "k3lso_msgs/msg/detail/motors_command__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<k3lso_msgs::srv::MotorsStep_Request>()
{
  return "k3lso_msgs::srv::MotorsStep_Request";
}

template<>
inline const char * name<k3lso_msgs::srv::MotorsStep_Request>()
{
  return "k3lso_msgs/srv/MotorsStep_Request";
}

template<>
struct has_fixed_size<k3lso_msgs::srv::MotorsStep_Request>
  : std::integral_constant<bool, has_fixed_size<k3lso_msgs::msg::MotorsCommand>::value> {};

template<>
struct has_bounded_size<k3lso_msgs::srv::MotorsStep_Request>
  : std::integral_constant<bool, has_bounded_size<k3lso_msgs::msg::MotorsCommand>::value> {};

template<>
struct is_message<k3lso_msgs::srv::MotorsStep_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<k3lso_msgs::srv::MotorsStep_Response>()
{
  return "k3lso_msgs::srv::MotorsStep_Response";
}

template<>
inline const char * name<k3lso_msgs::srv::MotorsStep_Response>()
{
  return "k3lso_msgs/srv/MotorsStep_Response";
}

template<>
struct has_fixed_size<k3lso_msgs::srv::MotorsStep_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Imu>::value && has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<k3lso_msgs::srv::MotorsStep_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Imu>::value && has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<k3lso_msgs::srv::MotorsStep_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<k3lso_msgs::srv::MotorsStep>()
{
  return "k3lso_msgs::srv::MotorsStep";
}

template<>
inline const char * name<k3lso_msgs::srv::MotorsStep>()
{
  return "k3lso_msgs/srv/MotorsStep";
}

template<>
struct has_fixed_size<k3lso_msgs::srv::MotorsStep>
  : std::integral_constant<
    bool,
    has_fixed_size<k3lso_msgs::srv::MotorsStep_Request>::value &&
    has_fixed_size<k3lso_msgs::srv::MotorsStep_Response>::value
  >
{
};

template<>
struct has_bounded_size<k3lso_msgs::srv::MotorsStep>
  : std::integral_constant<
    bool,
    has_bounded_size<k3lso_msgs::srv::MotorsStep_Request>::value &&
    has_bounded_size<k3lso_msgs::srv::MotorsStep_Response>::value
  >
{
};

template<>
struct is_service<k3lso_msgs::srv::MotorsStep>
  : std::true_type
{
};

template<>
struct is_service_request<k3lso_msgs::srv::MotorsStep_Request>
  : std::true_type
{
};

template<>
struct is_service_response<k3lso_msgs::srv::MotorsStep_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__TRAITS_HPP_
