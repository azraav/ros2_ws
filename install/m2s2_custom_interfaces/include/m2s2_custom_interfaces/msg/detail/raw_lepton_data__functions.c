// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from m2s2_custom_interfaces:msg/RawLeptonData.idl
// generated code does not contain a copyright notice
#include "m2s2_custom_interfaces/msg/detail/raw_lepton_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `encoding`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
m2s2_custom_interfaces__msg__RawLeptonData__init(m2s2_custom_interfaces__msg__RawLeptonData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    m2s2_custom_interfaces__msg__RawLeptonData__fini(msg);
    return false;
  }
  // height
  // width
  // encoding
  if (!rosidl_runtime_c__String__init(&msg->encoding)) {
    m2s2_custom_interfaces__msg__RawLeptonData__fini(msg);
    return false;
  }
  // is_bigendian
  // step
  // data
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->data, 0)) {
    m2s2_custom_interfaces__msg__RawLeptonData__fini(msg);
    return false;
  }
  return true;
}

void
m2s2_custom_interfaces__msg__RawLeptonData__fini(m2s2_custom_interfaces__msg__RawLeptonData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // encoding
  rosidl_runtime_c__String__fini(&msg->encoding);
  // is_bigendian
  // step
  // data
  rosidl_runtime_c__uint16__Sequence__fini(&msg->data);
}

m2s2_custom_interfaces__msg__RawLeptonData *
m2s2_custom_interfaces__msg__RawLeptonData__create()
{
  m2s2_custom_interfaces__msg__RawLeptonData * msg = (m2s2_custom_interfaces__msg__RawLeptonData *)malloc(sizeof(m2s2_custom_interfaces__msg__RawLeptonData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(m2s2_custom_interfaces__msg__RawLeptonData));
  bool success = m2s2_custom_interfaces__msg__RawLeptonData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
m2s2_custom_interfaces__msg__RawLeptonData__destroy(m2s2_custom_interfaces__msg__RawLeptonData * msg)
{
  if (msg) {
    m2s2_custom_interfaces__msg__RawLeptonData__fini(msg);
  }
  free(msg);
}


bool
m2s2_custom_interfaces__msg__RawLeptonData__Sequence__init(m2s2_custom_interfaces__msg__RawLeptonData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  m2s2_custom_interfaces__msg__RawLeptonData * data = NULL;
  if (size) {
    data = (m2s2_custom_interfaces__msg__RawLeptonData *)calloc(size, sizeof(m2s2_custom_interfaces__msg__RawLeptonData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = m2s2_custom_interfaces__msg__RawLeptonData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        m2s2_custom_interfaces__msg__RawLeptonData__fini(&data[i - 1]);
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
m2s2_custom_interfaces__msg__RawLeptonData__Sequence__fini(m2s2_custom_interfaces__msg__RawLeptonData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      m2s2_custom_interfaces__msg__RawLeptonData__fini(&array->data[i]);
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

m2s2_custom_interfaces__msg__RawLeptonData__Sequence *
m2s2_custom_interfaces__msg__RawLeptonData__Sequence__create(size_t size)
{
  m2s2_custom_interfaces__msg__RawLeptonData__Sequence * array = (m2s2_custom_interfaces__msg__RawLeptonData__Sequence *)malloc(sizeof(m2s2_custom_interfaces__msg__RawLeptonData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = m2s2_custom_interfaces__msg__RawLeptonData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
m2s2_custom_interfaces__msg__RawLeptonData__Sequence__destroy(m2s2_custom_interfaces__msg__RawLeptonData__Sequence * array)
{
  if (array) {
    m2s2_custom_interfaces__msg__RawLeptonData__Sequence__fini(array);
  }
  free(array);
}
