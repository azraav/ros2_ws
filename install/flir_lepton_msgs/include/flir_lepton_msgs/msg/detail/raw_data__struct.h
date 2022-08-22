// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flir_lepton_msgs:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__STRUCT_H_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__STRUCT_H_

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
// Member 'raw_values'
#include "example_interfaces/msg/detail/int16_multi_array__struct.h"

// Struct defined in msg/RawData in the package flir_lepton_msgs.
typedef struct flir_lepton_msgs__msg__RawData
{
  std_msgs__msg__Header header;
  example_interfaces__msg__Int16MultiArray raw_values;
} flir_lepton_msgs__msg__RawData;

// Struct for a sequence of flir_lepton_msgs__msg__RawData.
typedef struct flir_lepton_msgs__msg__RawData__Sequence
{
  flir_lepton_msgs__msg__RawData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flir_lepton_msgs__msg__RawData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__STRUCT_H_
