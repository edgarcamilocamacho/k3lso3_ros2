// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_HPP_
#define K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__k3lso_msgs__msg__MotorsCommand __attribute__((deprecated))
#else
# define DEPRECATED__k3lso_msgs__msg__MotorsCommand __declspec(deprecated)
#endif

namespace k3lso_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorsCommand_
{
  using Type = MotorsCommand_<ContainerAllocator>;

  explicit MotorsCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MotorsCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _position_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _position_type position;
  using _velocity_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _velocity_type velocity;
  using _effort_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _effort_type effort;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__effort(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->effort = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__k3lso_msgs__msg__MotorsCommand
    std::shared_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__k3lso_msgs__msg__MotorsCommand
    std::shared_ptr<k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->effort != other.effort) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsCommand_

// alias to use template instance with default allocator
using MotorsCommand =
  k3lso_msgs::msg::MotorsCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace k3lso_msgs

#endif  // K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_HPP_
