// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_H_
#define K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MotorsCommand in the package k3lso_msgs.
typedef struct k3lso_msgs__msg__MotorsCommand
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence effort;
} k3lso_msgs__msg__MotorsCommand;

// Struct for a sequence of k3lso_msgs__msg__MotorsCommand.
typedef struct k3lso_msgs__msg__MotorsCommand__Sequence
{
  k3lso_msgs__msg__MotorsCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k3lso_msgs__msg__MotorsCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__STRUCT_H_
