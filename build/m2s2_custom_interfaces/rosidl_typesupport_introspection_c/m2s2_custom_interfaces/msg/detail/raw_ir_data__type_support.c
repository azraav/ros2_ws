// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__rosidl_typesupport_introspection_c.h"
#include "m2s2_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__functions.h"
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `raw_values`
#include "example_interfaces/msg/int16_multi_array.h"
// Member `raw_values`
#include "example_interfaces/msg/detail/int16_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RawIrData__rosidl_typesupport_introspection_c__RawIrData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  m2s2_custom_interfaces__msg__RawIrData__init(message_memory);
}

void RawIrData__rosidl_typesupport_introspection_c__RawIrData_fini_function(void * message_memory)
{
  m2s2_custom_interfaces__msg__RawIrData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawIrData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__RawIrData, raw_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_members = {
  "m2s2_custom_interfaces__msg",  // message namespace
  "RawIrData",  // message name
  2,  // number of fields
  sizeof(m2s2_custom_interfaces__msg__RawIrData),
  RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_member_array,  // message members
  RawIrData__rosidl_typesupport_introspection_c__RawIrData_init_function,  // function to initialize message memory (memory has to be allocated)
  RawIrData__rosidl_typesupport_introspection_c__RawIrData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_type_support_handle = {
  0,
  &RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_m2s2_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, m2s2_custom_interfaces, msg, RawIrData)() {
  RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, msg, Int16MultiArray)();
  if (!RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_type_support_handle.typesupport_identifier) {
    RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RawIrData__rosidl_typesupport_introspection_c__RawIrData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
