// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice
#include "k3lso_msgs/msg/detail/motors_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `effort`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
k3lso_msgs__msg__MotorsCommand__init(k3lso_msgs__msg__MotorsCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    k3lso_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    k3lso_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    k3lso_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    k3lso_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  // effort
  if (!rosidl_runtime_c__double__Sequence__init(&msg->effort, 0)) {
    k3lso_msgs__msg__MotorsCommand__fini(msg);
    return false;
  }
  return true;
}

void
k3lso_msgs__msg__MotorsCommand__fini(k3lso_msgs__msg__MotorsCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // effort
  rosidl_runtime_c__double__Sequence__fini(&msg->effort);
}

k3lso_msgs__msg__MotorsCommand *
k3lso_msgs__msg__MotorsCommand__create()
{
  k3lso_msgs__msg__MotorsCommand * msg = (k3lso_msgs__msg__MotorsCommand *)malloc(sizeof(k3lso_msgs__msg__MotorsCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(k3lso_msgs__msg__MotorsCommand));
  bool success = k3lso_msgs__msg__MotorsCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
k3lso_msgs__msg__MotorsCommand__destroy(k3lso_msgs__msg__MotorsCommand * msg)
{
  if (msg) {
    k3lso_msgs__msg__MotorsCommand__fini(msg);
  }
  free(msg);
}


bool
k3lso_msgs__msg__MotorsCommand__Sequence__init(k3lso_msgs__msg__MotorsCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  k3lso_msgs__msg__MotorsCommand * data = NULL;
  if (size) {
    data = (k3lso_msgs__msg__MotorsCommand *)calloc(size, sizeof(k3lso_msgs__msg__MotorsCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = k3lso_msgs__msg__MotorsCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        k3lso_msgs__msg__MotorsCommand__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
k3lso_msgs__msg__MotorsCommand__Sequence__fini(k3lso_msgs__msg__MotorsCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      k3lso_msgs__msg__MotorsCommand__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

k3lso_msgs__msg__MotorsCommand__Sequence *
k3lso_msgs__msg__MotorsCommand__Sequence__create(size_t size)
{
  k3lso_msgs__msg__MotorsCommand__Sequence * array = (k3lso_msgs__msg__MotorsCommand__Sequence *)malloc(sizeof(k3lso_msgs__msg__MotorsCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = k3lso_msgs__msg__MotorsCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
k3lso_msgs__msg__MotorsCommand__Sequence__destroy(k3lso_msgs__msg__MotorsCommand__Sequence * array)
{
  if (array) {
    k3lso_msgs__msg__MotorsCommand__Sequence__fini(array);
  }
  free(array);
}
