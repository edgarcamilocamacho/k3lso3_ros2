// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__STRUCT_H_
#define K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motors_command'
#include "k3lso_msgs/msg/detail/motors_command__struct.h"

// Struct defined in srv/MotorsStep in the package k3lso_msgs.
typedef struct k3lso_msgs__srv__MotorsStep_Request
{
  k3lso_msgs__msg__MotorsCommand motors_command;
} k3lso_msgs__srv__MotorsStep_Request;

// Struct for a sequence of k3lso_msgs__srv__MotorsStep_Request.
typedef struct k3lso_msgs__srv__MotorsStep_Request__Sequence
{
  k3lso_msgs__srv__MotorsStep_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k3lso_msgs__srv__MotorsStep_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"

// Struct defined in srv/MotorsStep in the package k3lso_msgs.
typedef struct k3lso_msgs__srv__MotorsStep_Response
{
  sensor_msgs__msg__JointState joint_state;
  sensor_msgs__msg__Imu imu;
} k3lso_msgs__srv__MotorsStep_Response;

// Struct for a sequence of k3lso_msgs__srv__MotorsStep_Response.
typedef struct k3lso_msgs__srv__MotorsStep_Response__Sequence
{
  k3lso_msgs__srv__MotorsStep_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k3lso_msgs__srv__MotorsStep_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__STRUCT_H_
