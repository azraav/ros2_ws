// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace m2s2_custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RawIrData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) m2s2_custom_interfaces::msg::RawIrData(_init);
}

void RawIrData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<m2s2_custom_interfaces::msg::RawIrData *>(message_memory);
  typed_message->~RawIrData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RawIrData_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces::msg::RawIrData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "raw_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<example_interfaces::msg::Int16MultiArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces::msg::RawIrData, raw_values),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RawIrData_message_members = {
  "m2s2_custom_interfaces::msg",  // message namespace
  "RawIrData",  // message name
  2,  // number of fields
  sizeof(m2s2_custom_interfaces::msg::RawIrData),
  RawIrData_message_member_array,  // message members
  RawIrData_init_function,  // function to initialize message memory (memory has to be allocated)
  RawIrData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RawIrData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RawIrData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace m2s2_custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<m2s2_custom_interfaces::msg::RawIrData>()
{
  return &::m2s2_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::RawIrData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, m2s2_custom_interfaces, msg, RawIrData)() {
  return &::m2s2_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::RawIrData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
