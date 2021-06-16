// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice

#ifndef K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__FUNCTIONS_H_
#define K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "k3lso_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "k3lso_msgs/srv/detail/motors_step__struct.h"

/// Initialize srv/MotorsStep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * k3lso_msgs__srv__MotorsStep_Request
 * )) before or use
 * k3lso_msgs__srv__MotorsStep_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
bool
k3lso_msgs__srv__MotorsStep_Request__init(k3lso_msgs__srv__MotorsStep_Request * msg);

/// Finalize srv/MotorsStep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Request__fini(k3lso_msgs__srv__MotorsStep_Request * msg);

/// Create srv/MotorsStep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * k3lso_msgs__srv__MotorsStep_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
k3lso_msgs__srv__MotorsStep_Request *
k3lso_msgs__srv__MotorsStep_Request__create();

/// Destroy srv/MotorsStep message.
/**
 * It calls
 * k3lso_msgs__srv__MotorsStep_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Request__destroy(k3lso_msgs__srv__MotorsStep_Request * msg);


/// Initialize array of srv/MotorsStep messages.
/**
 * It allocates the memory for the number of elements and calls
 * k3lso_msgs__srv__MotorsStep_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
bool
k3lso_msgs__srv__MotorsStep_Request__Sequence__init(k3lso_msgs__srv__MotorsStep_Request__Sequence * array, size_t size);

/// Finalize array of srv/MotorsStep messages.
/**
 * It calls
 * k3lso_msgs__srv__MotorsStep_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Request__Sequence__fini(k3lso_msgs__srv__MotorsStep_Request__Sequence * array);

/// Create array of srv/MotorsStep messages.
/**
 * It allocates the memory for the array and calls
 * k3lso_msgs__srv__MotorsStep_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
k3lso_msgs__srv__MotorsStep_Request__Sequence *
k3lso_msgs__srv__MotorsStep_Request__Sequence__create(size_t size);

/// Destroy array of srv/MotorsStep messages.
/**
 * It calls
 * k3lso_msgs__srv__MotorsStep_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Request__Sequence__destroy(k3lso_msgs__srv__MotorsStep_Request__Sequence * array);

/// Initialize srv/MotorsStep message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * k3lso_msgs__srv__MotorsStep_Response
 * )) before or use
 * k3lso_msgs__srv__MotorsStep_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
bool
k3lso_msgs__srv__MotorsStep_Response__init(k3lso_msgs__srv__MotorsStep_Response * msg);

/// Finalize srv/MotorsStep message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Response__fini(k3lso_msgs__srv__MotorsStep_Response * msg);

/// Create srv/MotorsStep message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * k3lso_msgs__srv__MotorsStep_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
k3lso_msgs__srv__MotorsStep_Response *
k3lso_msgs__srv__MotorsStep_Response__create();

/// Destroy srv/MotorsStep message.
/**
 * It calls
 * k3lso_msgs__srv__MotorsStep_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Response__destroy(k3lso_msgs__srv__MotorsStep_Response * msg);


/// Initialize array of srv/MotorsStep messages.
/**
 * It allocates the memory for the number of elements and calls
 * k3lso_msgs__srv__MotorsStep_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
bool
k3lso_msgs__srv__MotorsStep_Response__Sequence__init(k3lso_msgs__srv__MotorsStep_Response__Sequence * array, size_t size);

/// Finalize array of srv/MotorsStep messages.
/**
 * It calls
 * k3lso_msgs__srv__MotorsStep_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Response__Sequence__fini(k3lso_msgs__srv__MotorsStep_Response__Sequence * array);

/// Create array of srv/MotorsStep messages.
/**
 * It allocates the memory for the array and calls
 * k3lso_msgs__srv__MotorsStep_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
k3lso_msgs__srv__MotorsStep_Response__Sequence *
k3lso_msgs__srv__MotorsStep_Response__Sequence__create(size_t size);

/// Destroy array of srv/MotorsStep messages.
/**
 * It calls
 * k3lso_msgs__srv__MotorsStep_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_k3lso_msgs
void
k3lso_msgs__srv__MotorsStep_Response__Sequence__destroy(k3lso_msgs__srv__MotorsStep_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // K3LSO_MSGS__SRV__DETAIL__MOTORS_STEP__FUNCTIONS_H_
