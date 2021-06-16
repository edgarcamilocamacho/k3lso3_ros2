// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from k3lso_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "k3lso_msgs/msg/detail/motors_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace k3lso_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorsCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) k3lso_msgs::msg::MotorsCommand(_init);
}

void MotorsCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<k3lso_msgs::msg::MotorsCommand *>(message_memory);
  typed_message->~MotorsCommand();
}

size_t size_function__MotorsCommand__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorsCommand__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCommand__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorsCommand__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorsCommand__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorsCommand__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCommand__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorsCommand__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorsCommand__velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorsCommand__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCommand__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorsCommand__velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotorsCommand__effort(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorsCommand__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCommand__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorsCommand__effort(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorsCommand_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs::msg::MotorsCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs::msg::MotorsCommand, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCommand__name,  // size() function pointer
    get_const_function__MotorsCommand__name,  // get_const(index) function pointer
    get_function__MotorsCommand__name,  // get(index) function pointer
    resize_function__MotorsCommand__name  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs::msg::MotorsCommand, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCommand__position,  // size() function pointer
    get_const_function__MotorsCommand__position,  // get_const(index) function pointer
    get_function__MotorsCommand__position,  // get(index) function pointer
    resize_function__MotorsCommand__position  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs::msg::MotorsCommand, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCommand__velocity,  // size() function pointer
    get_const_function__MotorsCommand__velocity,  // get_const(index) function pointer
    get_function__MotorsCommand__velocity,  // get(index) function pointer
    resize_function__MotorsCommand__velocity  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k3lso_msgs::msg::MotorsCommand, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCommand__effort,  // size() function pointer
    get_const_function__MotorsCommand__effort,  // get_const(index) function pointer
    get_function__MotorsCommand__effort,  // get(index) function pointer
    resize_function__MotorsCommand__effort  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorsCommand_message_members = {
  "k3lso_msgs::msg",  // message namespace
  "MotorsCommand",  // message name
  5,  // number of fields
  sizeof(k3lso_msgs::msg::MotorsCommand),
  MotorsCommand_message_member_array,  // message members
  MotorsCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorsCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorsCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace k3lso_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<k3lso_msgs::msg::MotorsCommand>()
{
  return &::k3lso_msgs::msg::rosidl_typesupport_introspection_cpp::MotorsCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, k3lso_msgs, msg, MotorsCommand)() {
  return &::k3lso_msgs::msg::rosidl_typesupport_introspection_cpp::MotorsCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
