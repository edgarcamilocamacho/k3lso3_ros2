// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "k3lso_msgs/srv/detail/motors_step__struct.h"
#include "k3lso_msgs/srv/detail/motors_step__functions.h"

bool k3lso_msgs__msg__motors_command__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * k3lso_msgs__msg__motors_command__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool k3lso_msgs__srv__motors_step__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("k3lso_msgs.srv._motors_step.MotorsStep_Request", full_classname_dest, 46) == 0);
  }
  k3lso_msgs__srv__MotorsStep_Request * ros_message = _ros_message;
  {  // motors_command
    PyObject * field = PyObject_GetAttrString(_pymsg, "motors_command");
    if (!field) {
      return false;
    }
    if (!k3lso_msgs__msg__motors_command__convert_from_py(field, &ros_message->motors_command)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * k3lso_msgs__srv__motors_step__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorsStep_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("k3lso_msgs.srv._motors_step");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorsStep_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  k3lso_msgs__srv__MotorsStep_Request * ros_message = (k3lso_msgs__srv__MotorsStep_Request *)raw_ros_message;
  {  // motors_command
    PyObject * field = NULL;
    field = k3lso_msgs__msg__motors_command__convert_to_py(&ros_message->motors_command);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motors_command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__struct.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__joint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__joint_state__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__imu__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool k3lso_msgs__srv__motors_step__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("k3lso_msgs.srv._motors_step.MotorsStep_Response", full_classname_dest, 47) == 0);
  }
  k3lso_msgs__srv__MotorsStep_Response * ros_message = _ros_message;
  {  // joint_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_state");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__joint_state__convert_from_py(field, &ros_message->joint_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__imu__convert_from_py(field, &ros_message->imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * k3lso_msgs__srv__motors_step__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorsStep_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("k3lso_msgs.srv._motors_step");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorsStep_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  k3lso_msgs__srv__MotorsStep_Response * ros_message = (k3lso_msgs__srv__MotorsStep_Response *)raw_ros_message;
  {  // joint_state
    PyObject * field = NULL;
    field = sensor_msgs__msg__joint_state__convert_to_py(&ros_message->joint_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = sensor_msgs__msg__imu__convert_to_py(&ros_message->imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
