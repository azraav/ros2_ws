// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sound_play:msg/SoundRequest.idl
// generated code does not contain a copyright notice
#include "sound_play/msg/detail/sound_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `arg`
// Member `arg2`
#include "rosidl_runtime_c/string_functions.h"

bool
sound_play__msg__SoundRequest__init(sound_play__msg__SoundRequest * msg)
{
  if (!msg) {
    return false;
  }
  // sound
  // command
  // volume
  // arg
  if (!rosidl_runtime_c__String__init(&msg->arg)) {
    sound_play__msg__SoundRequest__fini(msg);
    return false;
  }
  // arg2
  if (!rosidl_runtime_c__String__init(&msg->arg2)) {
    sound_play__msg__SoundRequest__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__msg__SoundRequest__fini(sound_play__msg__SoundRequest * msg)
{
  if (!msg) {
    return;
  }
  // sound
  // command
  // volume
  // arg
  rosidl_runtime_c__String__fini(&msg->arg);
  // arg2
  rosidl_runtime_c__String__fini(&msg->arg2);
}

sound_play__msg__SoundRequest *
sound_play__msg__SoundRequest__create()
{
  sound_play__msg__SoundRequest * msg = (sound_play__msg__SoundRequest *)malloc(sizeof(sound_play__msg__SoundRequest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__msg__SoundRequest));
  bool success = sound_play__msg__SoundRequest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__msg__SoundRequest__destroy(sound_play__msg__SoundRequest * msg)
{
  if (msg) {
    sound_play__msg__SoundRequest__fini(msg);
  }
  free(msg);
}


bool
sound_play__msg__SoundRequest__Sequence__init(sound_play__msg__SoundRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__msg__SoundRequest * data = NULL;
  if (size) {
    data = (sound_play__msg__SoundRequest *)calloc(size, sizeof(sound_play__msg__SoundRequest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__msg__SoundRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__msg__SoundRequest__fini(&data[i - 1]);
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
sound_play__msg__SoundRequest__Sequence__fini(sound_play__msg__SoundRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__msg__SoundRequest__fini(&array->data[i]);
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

sound_play__msg__SoundRequest__Sequence *
sound_play__msg__SoundRequest__Sequence__create(size_t size)
{
  sound_play__msg__SoundRequest__Sequence * array = (sound_play__msg__SoundRequest__Sequence *)malloc(sizeof(sound_play__msg__SoundRequest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__msg__SoundRequest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__msg__SoundRequest__Sequence__destroy(sound_play__msg__SoundRequest__Sequence * array)
{
  if (array) {
    sound_play__msg__SoundRequest__Sequence__fini(array);
  }
  free(array);
}
