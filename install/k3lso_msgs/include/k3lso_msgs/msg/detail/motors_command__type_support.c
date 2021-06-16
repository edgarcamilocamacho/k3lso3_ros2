// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "k3lso_msgs/msg/detail/motors_command__rosidl_typesupport_introspection_c.h"
#include "k3lso_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "k3lso_msgs/msg/detail/motors_command__functions.h"
#include "k3lso_msgs/msg/detail/motors_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  k3lso_msgs__msg__MotorsCommand__init(message_memory);
}

void MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_fini_function(void * message_memory)
{
  k3lso_msgs__msg__MotorsCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__msg__MotorsCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__msg__MotorsCommand, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__msg__MotorsCommand, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__msg__MotorsCommand, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__msg__MotorsCommand, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_members = {
  "k3lso_msgs__msg",  // message namespace
  "MotorsCommand",  // message name
  5,  // number of fields
  sizeof(k3lso_msgs__msg__MotorsCommand),
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_member_array,  // message members
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle = {
  0,
  &MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k3lso_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, msg, MotorsCommand)() {
  MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle.typesupport_identifier) {
    MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorsCommand__rosidl_typesupport_introspection_c__MotorsCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
