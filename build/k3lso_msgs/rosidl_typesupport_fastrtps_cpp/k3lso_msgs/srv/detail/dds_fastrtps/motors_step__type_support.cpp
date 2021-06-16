// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice
#include "k3lso_msgs/srv/detail/motors_step__rosidl_typesupport_fastrtps_cpp.hpp"
#include "k3lso_msgs/srv/detail/motors_step__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace k3lso_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const k3lso_msgs::msg::MotorsCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  k3lso_msgs::msg::MotorsCommand &);
size_t get_serialized_size(
  const k3lso_msgs::msg::MotorsCommand &,
  size_t current_alignment);
size_t
max_serialized_size_MotorsCommand(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace k3lso_msgs


namespace k3lso_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
cdr_serialize(
  const k3lso_msgs::srv::MotorsStep_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motors_command
  k3lso_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.motors_command,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  k3lso_msgs::srv::MotorsStep_Request & ros_message)
{
  // Member: motors_command
  k3lso_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.motors_command);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
get_serialized_size(
  const k3lso_msgs::srv::MotorsStep_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motors_command

  current_alignment +=
    k3lso_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.motors_command, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
max_serialized_size_MotorsStep_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motors_command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        k3lso_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorsCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MotorsStep_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const k3lso_msgs::srv::MotorsStep_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorsStep_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<k3lso_msgs::srv::MotorsStep_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorsStep_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const k3lso_msgs::srv::MotorsStep_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorsStep_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorsStep_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorsStep_Request__callbacks = {
  "k3lso_msgs::srv",
  "MotorsStep_Request",
  _MotorsStep_Request__cdr_serialize,
  _MotorsStep_Request__cdr_deserialize,
  _MotorsStep_Request__get_serialized_size,
  _MotorsStep_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotorsStep_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorsStep_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace k3lso_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_k3lso_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<k3lso_msgs::srv::MotorsStep_Request>()
{
  return &k3lso_msgs::srv::typesupport_fastrtps_cpp::_MotorsStep_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, k3lso_msgs, srv, MotorsStep_Request)() {
  return &k3lso_msgs::srv::typesupport_fastrtps_cpp::_MotorsStep_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::JointState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::JointState &);
size_t get_serialized_size(
  const sensor_msgs::msg::JointState &,
  size_t current_alignment);
size_t
max_serialized_size_JointState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Imu &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Imu &);
size_t get_serialized_size(
  const sensor_msgs::msg::Imu &,
  size_t current_alignment);
size_t
max_serialized_size_Imu(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace k3lso_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
cdr_serialize(
  const k3lso_msgs::srv::MotorsStep_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint_state,
    cdr);
  // Member: imu
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  k3lso_msgs::srv::MotorsStep_Response & ros_message)
{
  // Member: joint_state
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint_state);

  // Member: imu
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
get_serialized_size(
  const k3lso_msgs::srv::MotorsStep_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_state

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint_state, current_alignment);
  // Member: imu

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_k3lso_msgs
max_serialized_size_MotorsStep_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: joint_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointState(
        full_bounded, current_alignment);
    }
  }

  // Member: imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Imu(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MotorsStep_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const k3lso_msgs::srv::MotorsStep_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorsStep_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<k3lso_msgs::srv::MotorsStep_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorsStep_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const k3lso_msgs::srv::MotorsStep_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorsStep_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorsStep_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorsStep_Response__callbacks = {
  "k3lso_msgs::srv",
  "MotorsStep_Response",
  _MotorsStep_Response__cdr_serialize,
  _MotorsStep_Response__cdr_deserialize,
  _MotorsStep_Response__get_serialized_size,
  _MotorsStep_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotorsStep_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorsStep_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace k3lso_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_k3lso_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<k3lso_msgs::srv::MotorsStep_Response>()
{
  return &k3lso_msgs::srv::typesupport_fastrtps_cpp::_MotorsStep_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, k3lso_msgs, srv, MotorsStep_Response)() {
  return &k3lso_msgs::srv::typesupport_fastrtps_cpp::_MotorsStep_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace k3lso_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _MotorsStep__callbacks = {
  "k3lso_msgs::srv",
  "MotorsStep",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, k3lso_msgs, srv, MotorsStep_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, k3lso_msgs, srv, MotorsStep_Response)(),
};

static rosidl_service_type_support_t _MotorsStep__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorsStep__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace k3lso_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_k3lso_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<k3lso_msgs::srv::MotorsStep>()
{
  return &k3lso_msgs::srv::typesupport_fastrtps_cpp::_MotorsStep__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, k3lso_msgs, srv, MotorsStep)() {
  return &k3lso_msgs::srv::typesupport_fastrtps_cpp::_MotorsStep__handle;
}

#ifdef __cplusplus
}
#endif
