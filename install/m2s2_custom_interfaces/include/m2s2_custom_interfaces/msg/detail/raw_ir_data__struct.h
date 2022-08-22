// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__STRUCT_H_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__STRUCT_H_

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

// Struct defined in msg/RawIrData in the package m2s2_custom_interfaces.
typedef struct m2s2_custom_interfaces__msg__RawIrData
{
  std_msgs__msg__Header header;
  example_interfaces__msg__Int16MultiArray raw_values;
} m2s2_custom_interfaces__msg__RawIrData;

// Struct for a sequence of m2s2_custom_interfaces__msg__RawIrData.
typedef struct m2s2_custom_interfaces__msg__RawIrData__Sequence
{
  m2s2_custom_interfaces__msg__RawIrData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} m2s2_custom_interfaces__msg__RawIrData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__STRUCT_H_
