// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from m2s2_custom_interfaces:msg/EnviroData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "m2s2_custom_interfaces/msg/detail/enviro_data__rosidl_typesupport_introspection_c.h"
#include "m2s2_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "m2s2_custom_interfaces/msg/detail/enviro_data__functions.h"
#include "m2s2_custom_interfaces/msg/detail/enviro_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EnviroData__rosidl_typesupport_introspection_c__EnviroData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  m2s2_custom_interfaces__msg__EnviroData__init(message_memory);
}

void EnviroData__rosidl_typesupport_introspection_c__EnviroData_fini_function(void * message_memory)
{
  m2s2_custom_interfaces__msg__EnviroData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__EnviroData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__EnviroData, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__EnviroData, pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "humidity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(m2s2_custom_interfaces__msg__EnviroData, humidity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_members = {
  "m2s2_custom_interfaces__msg",  // message namespace
  "EnviroData",  // message name
  4,  // number of fields
  sizeof(m2s2_custom_interfaces__msg__EnviroData),
  EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_member_array,  // message members
  EnviroData__rosidl_typesupport_introspection_c__EnviroData_init_function,  // function to initialize message memory (memory has to be allocated)
  EnviroData__rosidl_typesupport_introspection_c__EnviroData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_type_support_handle = {
  0,
  &EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_m2s2_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, m2s2_custom_interfaces, msg, EnviroData)() {
  EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_type_support_handle.typesupport_identifier) {
    EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EnviroData__rosidl_typesupport_introspection_c__EnviroData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
