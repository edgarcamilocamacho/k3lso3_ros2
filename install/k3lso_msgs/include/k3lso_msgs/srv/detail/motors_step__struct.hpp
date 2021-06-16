// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__STRUCT_HPP_
#define K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motors_command'
#include "k3lso_msgs/msg/detail/motors_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__k3lso_msgs__srv__MotorsStep_Request __attribute__((deprecated))
#else
# define DEPRECATED__k3lso_msgs__srv__MotorsStep_Request __declspec(deprecated)
#endif

namespace k3lso_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorsStep_Request_
{
  using Type = MotorsStep_Request_<ContainerAllocator>;

  explicit MotorsStep_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motors_command(_init)
  {
    (void)_init;
  }

  explicit MotorsStep_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motors_command(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _motors_command_type =
    k3lso_msgs::msg::MotorsCommand_<ContainerAllocator>;
  _motors_command_type motors_command;

  // setters for named parameter idiom
  Type & set__motors_command(
    const k3lso_msgs::msg::MotorsCommand_<ContainerAllocator> & _arg)
  {
    this->motors_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__k3lso_msgs__srv__MotorsStep_Request
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__k3lso_msgs__srv__MotorsStep_Request
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsStep_Request_ & other) const
  {
    if (this->motors_command != other.motors_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsStep_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsStep_Request_

// alias to use template instance with default allocator
using MotorsStep_Request =
  k3lso_msgs::srv::MotorsStep_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace k3lso_msgs


// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__k3lso_msgs__srv__MotorsStep_Response __attribute__((deprecated))
#else
# define DEPRECATED__k3lso_msgs__srv__MotorsStep_Response __declspec(deprecated)
#endif

namespace k3lso_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorsStep_Response_
{
  using Type = MotorsStep_Response_<ContainerAllocator>;

  explicit MotorsStep_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_state(_init),
    imu(_init)
  {
    (void)_init;
  }

  explicit MotorsStep_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_state(_alloc, _init),
    imu(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;

  // setters for named parameter idiom
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__k3lso_msgs__srv__MotorsStep_Response
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__k3lso_msgs__srv__MotorsStep_Response
    std::shared_ptr<k3lso_msgs::srv::MotorsStep_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsStep_Response_ & other) const
  {
    if (this->joint_state != other.joint_state) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsStep_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsStep_Response_

// alias to use template instance with default allocator
using MotorsStep_Response =
  k3lso_msgs::srv::MotorsStep_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace k3lso_msgs

namespace k3lso_msgs
{

namespace srv
{

struct MotorsStep
{
  using Request = k3lso_msgs::srv::MotorsStep_Request;
  using Response = k3lso_msgs::srv::MotorsStep_Response;
};

}  // namespace srv

}  // namespace k3lso_msgs

#endif  // K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__STRUCT_HPP_
