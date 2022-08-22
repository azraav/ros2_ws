// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sound_play:action/SoundRequest.idl
// generated code does not contain a copyright notice
#include "sound_play/action/detail/sound_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sound_request`
#include "sound_play/msg/detail/sound_request__functions.h"

bool
sound_play__action__SoundRequest_Goal__init(sound_play__action__SoundRequest_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sound_request
  if (!sound_play__msg__SoundRequest__init(&msg->sound_request)) {
    sound_play__action__SoundRequest_Goal__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_Goal__fini(sound_play__action__SoundRequest_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sound_request
  sound_play__msg__SoundRequest__fini(&msg->sound_request);
}

sound_play__action__SoundRequest_Goal *
sound_play__action__SoundRequest_Goal__create()
{
  sound_play__action__SoundRequest_Goal * msg = (sound_play__action__SoundRequest_Goal *)malloc(sizeof(sound_play__action__SoundRequest_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_Goal));
  bool success = sound_play__action__SoundRequest_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_Goal__destroy(sound_play__action__SoundRequest_Goal * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_Goal__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_Goal__Sequence__init(sound_play__action__SoundRequest_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_Goal * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_Goal *)calloc(size, sizeof(sound_play__action__SoundRequest_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_Goal__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_Goal__Sequence__fini(sound_play__action__SoundRequest_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_Goal__fini(&array->data[i]);
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

sound_play__action__SoundRequest_Goal__Sequence *
sound_play__action__SoundRequest_Goal__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_Goal__Sequence * array = (sound_play__action__SoundRequest_Goal__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_Goal__Sequence__destroy(sound_play__action__SoundRequest_Goal__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
sound_play__action__SoundRequest_Result__init(sound_play__action__SoundRequest_Result * msg)
{
  if (!msg) {
    return false;
  }
  // playing
  // stamp
  if (!builtin_interfaces__msg__Duration__init(&msg->stamp)) {
    sound_play__action__SoundRequest_Result__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_Result__fini(sound_play__action__SoundRequest_Result * msg)
{
  if (!msg) {
    return;
  }
  // playing
  // stamp
  builtin_interfaces__msg__Duration__fini(&msg->stamp);
}

sound_play__action__SoundRequest_Result *
sound_play__action__SoundRequest_Result__create()
{
  sound_play__action__SoundRequest_Result * msg = (sound_play__action__SoundRequest_Result *)malloc(sizeof(sound_play__action__SoundRequest_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_Result));
  bool success = sound_play__action__SoundRequest_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_Result__destroy(sound_play__action__SoundRequest_Result * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_Result__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_Result__Sequence__init(sound_play__action__SoundRequest_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_Result * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_Result *)calloc(size, sizeof(sound_play__action__SoundRequest_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_Result__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_Result__Sequence__fini(sound_play__action__SoundRequest_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_Result__fini(&array->data[i]);
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

sound_play__action__SoundRequest_Result__Sequence *
sound_play__action__SoundRequest_Result__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_Result__Sequence * array = (sound_play__action__SoundRequest_Result__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_Result__Sequence__destroy(sound_play__action__SoundRequest_Result__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
sound_play__action__SoundRequest_Feedback__init(sound_play__action__SoundRequest_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // playing
  // stamp
  if (!builtin_interfaces__msg__Duration__init(&msg->stamp)) {
    sound_play__action__SoundRequest_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_Feedback__fini(sound_play__action__SoundRequest_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // playing
  // stamp
  builtin_interfaces__msg__Duration__fini(&msg->stamp);
}

sound_play__action__SoundRequest_Feedback *
sound_play__action__SoundRequest_Feedback__create()
{
  sound_play__action__SoundRequest_Feedback * msg = (sound_play__action__SoundRequest_Feedback *)malloc(sizeof(sound_play__action__SoundRequest_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_Feedback));
  bool success = sound_play__action__SoundRequest_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_Feedback__destroy(sound_play__action__SoundRequest_Feedback * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_Feedback__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_Feedback__Sequence__init(sound_play__action__SoundRequest_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_Feedback * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_Feedback *)calloc(size, sizeof(sound_play__action__SoundRequest_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_Feedback__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_Feedback__Sequence__fini(sound_play__action__SoundRequest_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_Feedback__fini(&array->data[i]);
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

sound_play__action__SoundRequest_Feedback__Sequence *
sound_play__action__SoundRequest_Feedback__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_Feedback__Sequence * array = (sound_play__action__SoundRequest_Feedback__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_Feedback__Sequence__destroy(sound_play__action__SoundRequest_Feedback__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "sound_play/action/detail/sound_request__functions.h"

bool
sound_play__action__SoundRequest_SendGoal_Request__init(sound_play__action__SoundRequest_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sound_play__action__SoundRequest_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!sound_play__action__SoundRequest_Goal__init(&msg->goal)) {
    sound_play__action__SoundRequest_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_SendGoal_Request__fini(sound_play__action__SoundRequest_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  sound_play__action__SoundRequest_Goal__fini(&msg->goal);
}

sound_play__action__SoundRequest_SendGoal_Request *
sound_play__action__SoundRequest_SendGoal_Request__create()
{
  sound_play__action__SoundRequest_SendGoal_Request * msg = (sound_play__action__SoundRequest_SendGoal_Request *)malloc(sizeof(sound_play__action__SoundRequest_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_SendGoal_Request));
  bool success = sound_play__action__SoundRequest_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_SendGoal_Request__destroy(sound_play__action__SoundRequest_SendGoal_Request * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_SendGoal_Request__Sequence__init(sound_play__action__SoundRequest_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_SendGoal_Request * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_SendGoal_Request *)calloc(size, sizeof(sound_play__action__SoundRequest_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_SendGoal_Request__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_SendGoal_Request__Sequence__fini(sound_play__action__SoundRequest_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_SendGoal_Request__fini(&array->data[i]);
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

sound_play__action__SoundRequest_SendGoal_Request__Sequence *
sound_play__action__SoundRequest_SendGoal_Request__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_SendGoal_Request__Sequence * array = (sound_play__action__SoundRequest_SendGoal_Request__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_SendGoal_Request__Sequence__destroy(sound_play__action__SoundRequest_SendGoal_Request__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
sound_play__action__SoundRequest_SendGoal_Response__init(sound_play__action__SoundRequest_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    sound_play__action__SoundRequest_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_SendGoal_Response__fini(sound_play__action__SoundRequest_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

sound_play__action__SoundRequest_SendGoal_Response *
sound_play__action__SoundRequest_SendGoal_Response__create()
{
  sound_play__action__SoundRequest_SendGoal_Response * msg = (sound_play__action__SoundRequest_SendGoal_Response *)malloc(sizeof(sound_play__action__SoundRequest_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_SendGoal_Response));
  bool success = sound_play__action__SoundRequest_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_SendGoal_Response__destroy(sound_play__action__SoundRequest_SendGoal_Response * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_SendGoal_Response__Sequence__init(sound_play__action__SoundRequest_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_SendGoal_Response * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_SendGoal_Response *)calloc(size, sizeof(sound_play__action__SoundRequest_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_SendGoal_Response__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_SendGoal_Response__Sequence__fini(sound_play__action__SoundRequest_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_SendGoal_Response__fini(&array->data[i]);
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

sound_play__action__SoundRequest_SendGoal_Response__Sequence *
sound_play__action__SoundRequest_SendGoal_Response__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_SendGoal_Response__Sequence * array = (sound_play__action__SoundRequest_SendGoal_Response__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_SendGoal_Response__Sequence__destroy(sound_play__action__SoundRequest_SendGoal_Response__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
sound_play__action__SoundRequest_GetResult_Request__init(sound_play__action__SoundRequest_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sound_play__action__SoundRequest_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_GetResult_Request__fini(sound_play__action__SoundRequest_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

sound_play__action__SoundRequest_GetResult_Request *
sound_play__action__SoundRequest_GetResult_Request__create()
{
  sound_play__action__SoundRequest_GetResult_Request * msg = (sound_play__action__SoundRequest_GetResult_Request *)malloc(sizeof(sound_play__action__SoundRequest_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_GetResult_Request));
  bool success = sound_play__action__SoundRequest_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_GetResult_Request__destroy(sound_play__action__SoundRequest_GetResult_Request * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_GetResult_Request__Sequence__init(sound_play__action__SoundRequest_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_GetResult_Request * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_GetResult_Request *)calloc(size, sizeof(sound_play__action__SoundRequest_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_GetResult_Request__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_GetResult_Request__Sequence__fini(sound_play__action__SoundRequest_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_GetResult_Request__fini(&array->data[i]);
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

sound_play__action__SoundRequest_GetResult_Request__Sequence *
sound_play__action__SoundRequest_GetResult_Request__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_GetResult_Request__Sequence * array = (sound_play__action__SoundRequest_GetResult_Request__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_GetResult_Request__Sequence__destroy(sound_play__action__SoundRequest_GetResult_Request__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "sound_play/action/detail/sound_request__functions.h"

bool
sound_play__action__SoundRequest_GetResult_Response__init(sound_play__action__SoundRequest_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!sound_play__action__SoundRequest_Result__init(&msg->result)) {
    sound_play__action__SoundRequest_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_GetResult_Response__fini(sound_play__action__SoundRequest_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  sound_play__action__SoundRequest_Result__fini(&msg->result);
}

sound_play__action__SoundRequest_GetResult_Response *
sound_play__action__SoundRequest_GetResult_Response__create()
{
  sound_play__action__SoundRequest_GetResult_Response * msg = (sound_play__action__SoundRequest_GetResult_Response *)malloc(sizeof(sound_play__action__SoundRequest_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_GetResult_Response));
  bool success = sound_play__action__SoundRequest_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_GetResult_Response__destroy(sound_play__action__SoundRequest_GetResult_Response * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_GetResult_Response__Sequence__init(sound_play__action__SoundRequest_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_GetResult_Response * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_GetResult_Response *)calloc(size, sizeof(sound_play__action__SoundRequest_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_GetResult_Response__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_GetResult_Response__Sequence__fini(sound_play__action__SoundRequest_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_GetResult_Response__fini(&array->data[i]);
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

sound_play__action__SoundRequest_GetResult_Response__Sequence *
sound_play__action__SoundRequest_GetResult_Response__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_GetResult_Response__Sequence * array = (sound_play__action__SoundRequest_GetResult_Response__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_GetResult_Response__Sequence__destroy(sound_play__action__SoundRequest_GetResult_Response__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "sound_play/action/detail/sound_request__functions.h"

bool
sound_play__action__SoundRequest_FeedbackMessage__init(sound_play__action__SoundRequest_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sound_play__action__SoundRequest_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!sound_play__action__SoundRequest_Feedback__init(&msg->feedback)) {
    sound_play__action__SoundRequest_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
sound_play__action__SoundRequest_FeedbackMessage__fini(sound_play__action__SoundRequest_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  sound_play__action__SoundRequest_Feedback__fini(&msg->feedback);
}

sound_play__action__SoundRequest_FeedbackMessage *
sound_play__action__SoundRequest_FeedbackMessage__create()
{
  sound_play__action__SoundRequest_FeedbackMessage * msg = (sound_play__action__SoundRequest_FeedbackMessage *)malloc(sizeof(sound_play__action__SoundRequest_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sound_play__action__SoundRequest_FeedbackMessage));
  bool success = sound_play__action__SoundRequest_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sound_play__action__SoundRequest_FeedbackMessage__destroy(sound_play__action__SoundRequest_FeedbackMessage * msg)
{
  if (msg) {
    sound_play__action__SoundRequest_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
sound_play__action__SoundRequest_FeedbackMessage__Sequence__init(sound_play__action__SoundRequest_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sound_play__action__SoundRequest_FeedbackMessage * data = NULL;
  if (size) {
    data = (sound_play__action__SoundRequest_FeedbackMessage *)calloc(size, sizeof(sound_play__action__SoundRequest_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sound_play__action__SoundRequest_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sound_play__action__SoundRequest_FeedbackMessage__fini(&data[i - 1]);
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
sound_play__action__SoundRequest_FeedbackMessage__Sequence__fini(sound_play__action__SoundRequest_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sound_play__action__SoundRequest_FeedbackMessage__fini(&array->data[i]);
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

sound_play__action__SoundRequest_FeedbackMessage__Sequence *
sound_play__action__SoundRequest_FeedbackMessage__Sequence__create(size_t size)
{
  sound_play__action__SoundRequest_FeedbackMessage__Sequence * array = (sound_play__action__SoundRequest_FeedbackMessage__Sequence *)malloc(sizeof(sound_play__action__SoundRequest_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sound_play__action__SoundRequest_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sound_play__action__SoundRequest_FeedbackMessage__Sequence__destroy(sound_play__action__SoundRequest_FeedbackMessage__Sequence * array)
{
  if (array) {
    sound_play__action__SoundRequest_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
