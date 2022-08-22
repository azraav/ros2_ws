// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "m2s2_custom_interfaces/msg/detail/raw_ir_data__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace m2s2_custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _RawIrData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RawIrData_type_support_ids_t;

static const _RawIrData_type_support_ids_t _RawIrData_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RawIrData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RawIrData_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RawIrData_type_support_symbol_names_t _RawIrData_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, m2s2_custom_interfaces, msg, RawIrData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, m2s2_custom_interfaces, msg, RawIrData)),
  }
};

typedef struct _RawIrData_type_support_data_t
{
  void * data[2];
} _RawIrData_type_support_data_t;

static _RawIrData_type_support_data_t _RawIrData_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RawIrData_message_typesupport_map = {
  2,
  "m2s2_custom_interfaces",
  &_RawIrData_message_typesupport_ids.typesupport_identifier[0],
  &_RawIrData_message_typesupport_symbol_names.symbol_name[0],
  &_RawIrData_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RawIrData_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RawIrData_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace m2s2_custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<m2s2_custom_interfaces::msg::RawIrData>()
{
  return &::m2s2_custom_interfaces::msg::rosidl_typesupport_cpp::RawIrData_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, m2s2_custom_interfaces, msg, RawIrData)() {
  return get_message_type_support_handle<m2s2_custom_interfaces::msg::RawIrData>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
