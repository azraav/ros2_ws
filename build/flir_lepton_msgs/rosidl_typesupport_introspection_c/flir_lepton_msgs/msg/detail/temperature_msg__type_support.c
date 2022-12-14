// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flir_lepton_msgs:msg/TemperatureMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flir_lepton_msgs/msg/detail/temperature_msg__rosidl_typesupport_introspection_c.h"
#include "flir_lepton_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flir_lepton_msgs/msg/detail/temperature_msg__functions.h"
#include "flir_lepton_msgs/msg/detail/temperature_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flir_lepton_msgs__msg__TemperatureMsg__init(message_memory);
}

void TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_fini_function(void * message_memory)
{
  flir_lepton_msgs__msg__TemperatureMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flir_lepton_msgs__msg__TemperatureMsg, header),  // bytes offset in struct
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
    offsetof(flir_lepton_msgs__msg__TemperatureMsg, height),  // bytes offset in struct
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
    offsetof(flir_lepton_msgs__msg__TemperatureMsg, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flir_lepton_msgs__msg__TemperatureMsg, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flir_lepton_msgs__msg__TemperatureMsg, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_members = {
  "flir_lepton_msgs__msg",  // message namespace
  "TemperatureMsg",  // message name
  5,  // number of fields
  sizeof(flir_lepton_msgs__msg__TemperatureMsg),
  TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_member_array,  // message members
  TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_type_support_handle = {
  0,
  &TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flir_lepton_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flir_lepton_msgs, msg, TemperatureMsg)() {
  TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_type_support_handle.typesupport_identifier) {
    TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TemperatureMsg__rosidl_typesupport_introspection_c__TemperatureMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
