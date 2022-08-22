// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from m2s2_custom_interfaces:msg/EnviroData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__STRUCT_H_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/EnviroData in the package m2s2_custom_interfaces.
typedef struct m2s2_custom_interfaces__msg__EnviroData
{
  std_msgs__msg__Header header;
  double temperature;
  double pressure;
  double humidity;
} m2s2_custom_interfaces__msg__EnviroData;

// Struct for a sequence of m2s2_custom_interfaces__msg__EnviroData.
typedef struct m2s2_custom_interfaces__msg__EnviroData__Sequence
{
  m2s2_custom_interfaces__msg__EnviroData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} m2s2_custom_interfaces__msg__EnviroData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__STRUCT_H_
