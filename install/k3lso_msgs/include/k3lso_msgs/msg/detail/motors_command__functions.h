// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__FUNCTIONS_H_
#define K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "k3lso_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "k3lso_msgs/msg/detail/motors_command__struct.h"

/// Initialize msg/MotorsCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * k3lso_msgs__msg__MotorsCommand
 * )) before or use
 * k3lso_msgs__msg__MotorsCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
bool
k3lso_msgs__msg__MotorsCommand__init(k3lso_msgs__msg__MotorsCommand * msg);

/// Finalize msg/MotorsCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__msg__MotorsCommand__fini(k3lso_msgs__msg__MotorsCommand * msg);

/// Create msg/MotorsCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * k3lso_msgs__msg__MotorsCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
k3lso_msgs__msg__MotorsCommand *
k3lso_msgs__msg__MotorsCommand__create();

/// Destroy msg/MotorsCommand message.
/**
 * It calls
 * k3lso_msgs__msg__MotorsCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__msg__MotorsCommand__destroy(k3lso_msgs__msg__MotorsCommand * msg);


/// Initialize array of msg/MotorsCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * k3lso_msgs__msg__MotorsCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
bool
k3lso_msgs__msg__MotorsCommand__Sequence__init(k3lso_msgs__msg__MotorsCommand__Sequence * array, size_t size);

/// Finalize array of msg/MotorsCommand messages.
/**
 * It calls
 * k3lso_msgs__msg__MotorsCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__msg__MotorsCommand__Sequence__fini(k3lso_msgs__msg__MotorsCommand__Sequence * array);

/// Create array of msg/MotorsCommand messages.
/**
 * It allocates the memory for the array and calls
 * k3lso_msgs__msg__MotorsCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
k3lso_msgs__msg__MotorsCommand__Sequence *
k3lso_msgs__msg__MotorsCommand__Sequence__create(size_t size);

/// Destroy array of msg/MotorsCommand messages.
/**
 * It calls
 * k3lso_msgs__msg__MotorsCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__msg__MotorsCommand__Sequence__destroy(k3lso_msgs__msg__MotorsCommand__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // K3LSO_MSGS__MSG__DETAIL__MOTORS_COMMAND__FUNCTIONS_H_
