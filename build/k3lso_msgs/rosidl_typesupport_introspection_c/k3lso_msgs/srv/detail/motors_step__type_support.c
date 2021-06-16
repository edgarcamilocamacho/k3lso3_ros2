// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from k3lso_msgs:srv/MotorsStep.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "k3lso_msgs/srv/detail/motors_step__rosidl_typesupport_introspection_c.h"
#include "k3lso_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "k3lso_msgs/srv/detail/motors_step__functions.h"
#include "k3lso_msgs/srv/detail/motors_step__struct.h"


// Include directives for member types
// Member `motors_command`
#include "k3lso_msgs/msg/motors_command.h"
// Member `motors_command`
#include "k3lso_msgs/msg/detail/motors_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  k3lso_msgs__srv__MotorsStep_Request__init(message_memory);
}

void MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_fini_function(void * message_memory)
{
  k3lso_msgs__srv__MotorsStep_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_member_array[1] = {
  {
    "motors_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__srv__MotorsStep_Request, motors_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_members = {
  "k3lso_msgs__srv",  // message namespace
  "MotorsStep_Request",  // message name
  1,  // number of fields
  sizeof(k3lso_msgs__srv__MotorsStep_Request),
  MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_member_array,  // message members
  MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_type_support_handle = {
  0,
  &MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k3lso_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep_Request)() {
  MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, msg, MotorsCommand)();
  if (!MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_type_support_handle.typesupport_identifier) {
    MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorsStep_Request__rosidl_typesupport_introspection_c__MotorsStep_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__rosidl_typesupport_introspection_c.h"
// already included above
// #include "k3lso_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__functions.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__struct.h"


// Include directives for member types
// Member `joint_state`
#include "sensor_msgs/msg/joint_state.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
// Member `imu`
#include "sensor_msgs/msg/imu.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  k3lso_msgs__srv__MotorsStep_Response__init(message_memory);
}

void MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_fini_function(void * message_memory)
{
  k3lso_msgs__srv__MotorsStep_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_member_array[2] = {
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__srv__MotorsStep_Response, joint_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs__srv__MotorsStep_Response, imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_members = {
  "k3lso_msgs__srv",  // message namespace
  "MotorsStep_Response",  // message name
  2,  // number of fields
  sizeof(k3lso_msgs__srv__MotorsStep_Response),
  MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_member_array,  // message members
  MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_type_support_handle = {
  0,
  &MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k3lso_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep_Response)() {
  MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Imu)();
  if (!MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_type_support_handle.typesupport_identifier) {
    MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorsStep_Response__rosidl_typesupport_introspection_c__MotorsStep_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "k3lso_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "k3lso_msgs/srv/detail/motors_step__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_members = {
  "k3lso_msgs__srv",  // service namespace
  "MotorsStep",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_Request_message_type_support_handle,
  NULL  // response message
  // k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_Response_message_type_support_handle
};

static rosidl_service_type_support_t k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_type_support_handle = {
  0,
  &k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k3lso_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep)() {
  if (!k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_type_support_handle.typesupport_identifier) {
    k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k3lso_msgs, srv, MotorsStep_Response)()->data;
  }

  return &k3lso_msgs__srv__detail__motors_step__rosidl_typesupport_introspection_c__MotorsStep_service_type_support_handle;
}
