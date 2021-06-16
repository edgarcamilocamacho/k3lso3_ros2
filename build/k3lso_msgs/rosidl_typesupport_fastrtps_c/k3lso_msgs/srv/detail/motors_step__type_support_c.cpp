// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice
#include "k3lso_msgs/srv/detail/motors_step__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "k3lso_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "k3lso_msgs/srv/detail/motors_step__struct.h"
#include "k3lso_msgs/srv/detail/motors_step__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "k3lso_msgs/msg/detail/motors_command__functions.h"  // motors_command

// forward declare type support functions
size_t get_serialized_size_k3lso_msgs__msg__MotorsCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_k3lso_msgs__msg__MotorsCommand(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, k3lso_msgs, msg, MotorsCommand)();


using _MotorsStep_Request__ros_msg_type = k3lso_msgs__srv__MotorsStep_Request;

static bool _MotorsStep_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorsStep_Request__ros_msg_type * ros_message = static_cast<const _MotorsStep_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motors_command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, k3lso_msgs, msg, MotorsCommand
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->motors_command, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MotorsStep_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorsStep_Request__ros_msg_type * ros_message = static_cast<_MotorsStep_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motors_command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, k3lso_msgs, msg, MotorsCommand
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->motors_command))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_k3lso_msgs
size_t get_serialized_size_k3lso_msgs__srv__MotorsStep_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorsStep_Request__ros_msg_type * ros_message = static_cast<const _MotorsStep_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motors_command

  current_alignment += get_serialized_size_k3lso_msgs__msg__MotorsCommand(
    &(ros_message->motors_command), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MotorsStep_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_k3lso_msgs__srv__MotorsStep_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_k3lso_msgs
size_t max_serialized_size_k3lso_msgs__srv__MotorsStep_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motors_command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_k3lso_msgs__msg__MotorsCommand(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorsStep_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_k3lso_msgs__srv__MotorsStep_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorsStep_Request = {
  "k3lso_msgs::srv",
  "MotorsStep_Request",
  _MotorsStep_Request__cdr_serialize,
  _MotorsStep_Request__cdr_deserialize,
  _MotorsStep_Request__get_serialized_size,
  _MotorsStep_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotorsStep_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorsStep_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, k3lso_msgs, srv, MotorsStep_Request)() {
  return &_MotorsStep_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "k3lso_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__struct.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/imu__functions.h"  // imu
#include "sensor_msgs/msg/detail/joint_state__functions.h"  // joint_state

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_k3lso_msgs
size_t get_serialized_size_sensor_msgs__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_k3lso_msgs
size_t max_serialized_size_sensor_msgs__msg__Imu(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_k3lso_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Imu)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_k3lso_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_k3lso_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_k3lso_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();


using _MotorsStep_Response__ros_msg_type = k3lso_msgs__srv__MotorsStep_Response;

static bool _MotorsStep_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorsStep_Response__ros_msg_type * ros_message = static_cast<const _MotorsStep_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint_state, cdr))
    {
      return false;
    }
  }

  // Field name: imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Imu
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->imu, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MotorsStep_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorsStep_Response__ros_msg_type * ros_message = static_cast<_MotorsStep_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint_state))
    {
      return false;
    }
  }

  // Field name: imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Imu
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->imu))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_k3lso_msgs
size_t get_serialized_size_k3lso_msgs__srv__MotorsStep_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorsStep_Response__ros_msg_type * ros_message = static_cast<const _MotorsStep_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_state

  current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
    &(ros_message->joint_state), current_alignment);
  // field.name imu

  current_alignment += get_serialized_size_sensor_msgs__msg__Imu(
    &(ros_message->imu), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MotorsStep_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_k3lso_msgs__srv__MotorsStep_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_k3lso_msgs
size_t max_serialized_size_k3lso_msgs__srv__MotorsStep_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joint_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        full_bounded, current_alignment);
    }
  }
  // member: imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Imu(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorsStep_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_k3lso_msgs__srv__MotorsStep_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorsStep_Response = {
  "k3lso_msgs::srv",
  "MotorsStep_Response",
  _MotorsStep_Response__cdr_serialize,
  _MotorsStep_Response__cdr_deserialize,
  _MotorsStep_Response__get_serialized_size,
  _MotorsStep_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotorsStep_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorsStep_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, k3lso_msgs, srv, MotorsStep_Response)() {
  return &_MotorsStep_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "k3lso_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "k3lso_msgs/srv/motors_step.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MotorsStep__callbacks = {
  "k3lso_msgs::srv",
  "MotorsStep",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, k3lso_msgs, srv, MotorsStep_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, k3lso_msgs, srv, MotorsStep_Response)(),
};

static rosidl_service_type_support_t MotorsStep__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MotorsStep__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, k3lso_msgs, srv, MotorsStep)() {
  return &MotorsStep__handle;
}

#if defined(__cplusplus)
}
#endif
