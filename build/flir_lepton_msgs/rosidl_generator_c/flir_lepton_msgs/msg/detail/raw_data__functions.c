// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flir_lepton_msgs:msg/RawData.idl
// generated code does not contain a copyright notice
#include "flir_lepton_msgs/msg/detail/raw_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `raw_values`
#include "example_interfaces/msg/detail/int16_multi_array__functions.h"

bool
flir_lepton_msgs__msg__RawData__init(flir_lepton_msgs__msg__RawData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    flir_lepton_msgs__msg__RawData__fini(msg);
    return false;
  }
  // raw_values
  if (!example_interfaces__msg__Int16MultiArray__init(&msg->raw_values)) {
    flir_lepton_msgs__msg__RawData__fini(msg);
    return false;
  }
  return true;
}

void
flir_lepton_msgs__msg__RawData__fini(flir_lepton_msgs__msg__RawData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // raw_values
  example_interfaces__msg__Int16MultiArray__fini(&msg->raw_values);
}

flir_lepton_msgs__msg__RawData *
flir_lepton_msgs__msg__RawData__create()
{
  flir_lepton_msgs__msg__RawData * msg = (flir_lepton_msgs__msg__RawData *)malloc(sizeof(flir_lepton_msgs__msg__RawData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flir_lepton_msgs__msg__RawData));
  bool success = flir_lepton_msgs__msg__RawData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
flir_lepton_msgs__msg__RawData__destroy(flir_lepton_msgs__msg__RawData * msg)
{
  if (msg) {
    flir_lepton_msgs__msg__RawData__fini(msg);
  }
  free(msg);
}


bool
flir_lepton_msgs__msg__RawData__Sequence__init(flir_lepton_msgs__msg__RawData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  flir_lepton_msgs__msg__RawData * data = NULL;
  if (size) {
    data = (flir_lepton_msgs__msg__RawData *)calloc(size, sizeof(flir_lepton_msgs__msg__RawData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flir_lepton_msgs__msg__RawData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flir_lepton_msgs__msg__RawData__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
flir_lepton_msgs__msg__RawData__Sequence__fini(flir_lepton_msgs__msg__RawData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      flir_lepton_msgs__msg__RawData__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

flir_lepton_msgs__msg__RawData__Sequence *
flir_lepton_msgs__msg__RawData__Sequence__create(size_t size)
{
  flir_lepton_msgs__msg__RawData__Sequence * array = (flir_lepton_msgs__msg__RawData__Sequence *)malloc(sizeof(flir_lepton_msgs__msg__RawData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = flir_lepton_msgs__msg__RawData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
flir_lepton_msgs__msg__RawData__Sequence__destroy(flir_lepton_msgs__msg__RawData__Sequence * array)
{
  if (array) {
    flir_lepton_msgs__msg__RawData__Sequence__fini(array);
  }
  free(array);
}
