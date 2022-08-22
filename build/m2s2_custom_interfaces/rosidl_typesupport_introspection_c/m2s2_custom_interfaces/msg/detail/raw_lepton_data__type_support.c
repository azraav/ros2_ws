// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from m2s2_custom_interfaces:msg/RawLeptonData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "m2s2_custom_interfaces/msg/detail/raw_lepton_data__rosidl_typesupport_introspection_c.h"
#include "m2s2_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "m2s2_custom_interfaces/msg/detail/raw_lepton_data__functions.h"
#include "m2s2_custom_interfaces/msg/detail/raw_lepton_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  m2s2_custom_interfaces__msg__RawLeptonData__init(message_memory);
}

void RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_fini_function(void * message_memory)
{
  m2s2_custom_interfaces__msg__RawLeptonData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, encoding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawLeptonData, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_members = {
  "m2s2_custom_interfaces__msg",  // message namespace
  "RawLeptonData",  // message name
  7,  // number of fields
  sizeof(m2s2_custom_interfaces__msg__RawLeptonData),
  RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_member_array,  // message members
  RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_init_function,  // function to initialize message memory (memory has to be allocated)
  RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_type_support_handle = {
  0,
  &RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_m2s2_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, m2s2_custom_interfaces, msg, RawLeptonData)() {
  RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_type_support_handle.typesupport_identifier) {
    RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RawLeptonData__rosidl_typesupport_introspection_c__RawLeptonData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
