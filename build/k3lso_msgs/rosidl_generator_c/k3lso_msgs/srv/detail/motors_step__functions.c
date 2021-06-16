// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice
#include "k3lso_msgs/srv/detail/motors_step__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `motors_command`
#include "k3lso_msgs/msg/detail/motors_command__functions.h"

bool
k3lso_msgs__srv__MotorsStep_Request__init(k3lso_msgs__srv__MotorsStep_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motors_command
  if (!k3lso_msgs__msg__MotorsCommand__init(&msg->motors_command)) {
    k3lso_msgs__srv__MotorsStep_Request__fini(msg);
    return false;
  }
  return true;
}

void
k3lso_msgs__srv__MotorsStep_Request__fini(k3lso_msgs__srv__MotorsStep_Request * msg)
{
  if (!msg) {
    return;
  }
  // motors_command
  k3lso_msgs__msg__MotorsCommand__fini(&msg->motors_command);
}

k3lso_msgs__srv__MotorsStep_Request *
k3lso_msgs__srv__MotorsStep_Request__create()
{
  k3lso_msgs__srv__MotorsStep_Request * msg = (k3lso_msgs__srv__MotorsStep_Request *)malloc(sizeof(k3lso_msgs__srv__MotorsStep_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(k3lso_msgs__srv__MotorsStep_Request));
  bool success = k3lso_msgs__srv__MotorsStep_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
k3lso_msgs__srv__MotorsStep_Request__destroy(k3lso_msgs__srv__MotorsStep_Request * msg)
{
  if (msg) {
    k3lso_msgs__srv__MotorsStep_Request__fini(msg);
  }
  free(msg);
}


bool
k3lso_msgs__srv__MotorsStep_Request__Sequence__init(k3lso_msgs__srv__MotorsStep_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  k3lso_msgs__srv__MotorsStep_Request * data = NULL;
  if (size) {
    data = (k3lso_msgs__srv__MotorsStep_Request *)calloc(size, sizeof(k3lso_msgs__srv__MotorsStep_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = k3lso_msgs__srv__MotorsStep_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        k3lso_msgs__srv__MotorsStep_Request__fini(&data[i - 1]);
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
k3lso_msgs__srv__MotorsStep_Request__Sequence__fini(k3lso_msgs__srv__MotorsStep_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      k3lso_msgs__srv__MotorsStep_Request__fini(&array->data[i]);
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

k3lso_msgs__srv__MotorsStep_Request__Sequence *
k3lso_msgs__srv__MotorsStep_Request__Sequence__create(size_t size)
{
  k3lso_msgs__srv__MotorsStep_Request__Sequence * array = (k3lso_msgs__srv__MotorsStep_Request__Sequence *)malloc(sizeof(k3lso_msgs__srv__MotorsStep_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = k3lso_msgs__srv__MotorsStep_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
k3lso_msgs__srv__MotorsStep_Request__Sequence__destroy(k3lso_msgs__srv__MotorsStep_Request__Sequence * array)
{
  if (array) {
    k3lso_msgs__srv__MotorsStep_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"

bool
k3lso_msgs__srv__MotorsStep_Response__init(k3lso_msgs__srv__MotorsStep_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    k3lso_msgs__srv__MotorsStep_Response__fini(msg);
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    k3lso_msgs__srv__MotorsStep_Response__fini(msg);
    return false;
  }
  return true;
}

void
k3lso_msgs__srv__MotorsStep_Response__fini(k3lso_msgs__srv__MotorsStep_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
}

k3lso_msgs__srv__MotorsStep_Response *
k3lso_msgs__srv__MotorsStep_Response__create()
{
  k3lso_msgs__srv__MotorsStep_Response * msg = (k3lso_msgs__srv__MotorsStep_Response *)malloc(sizeof(k3lso_msgs__srv__MotorsStep_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(k3lso_msgs__srv__MotorsStep_Response));
  bool success = k3lso_msgs__srv__MotorsStep_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
k3lso_msgs__srv__MotorsStep_Response__destroy(k3lso_msgs__srv__MotorsStep_Response * msg)
{
  if (msg) {
    k3lso_msgs__srv__MotorsStep_Response__fini(msg);
  }
  free(msg);
}


bool
k3lso_msgs__srv__MotorsStep_Response__Sequence__init(k3lso_msgs__srv__MotorsStep_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  k3lso_msgs__srv__MotorsStep_Response * data = NULL;
  if (size) {
    data = (k3lso_msgs__srv__MotorsStep_Response *)calloc(size, sizeof(k3lso_msgs__srv__MotorsStep_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = k3lso_msgs__srv__MotorsStep_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        k3lso_msgs__srv__MotorsStep_Response__fini(&data[i - 1]);
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
k3lso_msgs__srv__MotorsStep_Response__Sequence__fini(k3lso_msgs__srv__MotorsStep_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      k3lso_msgs__srv__MotorsStep_Response__fini(&array->data[i]);
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

k3lso_msgs__srv__MotorsStep_Response__Sequence *
k3lso_msgs__srv__MotorsStep_Response__Sequence__create(size_t size)
{
  k3lso_msgs__srv__MotorsStep_Response__Sequence * array = (k3lso_msgs__srv__MotorsStep_Response__Sequence *)malloc(sizeof(k3lso_msgs__srv__MotorsStep_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = k3lso_msgs__srv__MotorsStep_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
k3lso_msgs__srv__MotorsStep_Response__Sequence__destroy(k3lso_msgs__srv__MotorsStep_Response__Sequence * array)
{
  if (array) {
    k3lso_msgs__srv__MotorsStep_Response__Sequence__fini(array);
  }
  free(array);
}
