// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sound_play:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY__ACTION__DETAIL__SOUND_REQUEST__FUNCTIONS_H_
#define SOUND_PLAY__ACTION__DETAIL__SOUND_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sound_play/msg/rosidl_generator_c__visibility_control.h"

#include "sound_play/action/detail/sound_request__struct.h"

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_Goal
 * )) before or use
 * sound_play__action__SoundRequest_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_Goal__init(sound_play__action__SoundRequest_Goal * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Goal__fini(sound_play__action__SoundRequest_Goal * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_Goal *
sound_play__action__SoundRequest_Goal__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Goal__destroy(sound_play__action__SoundRequest_Goal * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_Goal__Sequence__init(sound_play__action__SoundRequest_Goal__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Goal__Sequence__fini(sound_play__action__SoundRequest_Goal__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_Goal__Sequence *
sound_play__action__SoundRequest_Goal__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Goal__Sequence__destroy(sound_play__action__SoundRequest_Goal__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_Result
 * )) before or use
 * sound_play__action__SoundRequest_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_Result__init(sound_play__action__SoundRequest_Result * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Result__fini(sound_play__action__SoundRequest_Result * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_Result *
sound_play__action__SoundRequest_Result__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Result__destroy(sound_play__action__SoundRequest_Result * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_Result__Sequence__init(sound_play__action__SoundRequest_Result__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Result__Sequence__fini(sound_play__action__SoundRequest_Result__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_Result__Sequence *
sound_play__action__SoundRequest_Result__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Result__Sequence__destroy(sound_play__action__SoundRequest_Result__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_Feedback
 * )) before or use
 * sound_play__action__SoundRequest_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_Feedback__init(sound_play__action__SoundRequest_Feedback * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Feedback__fini(sound_play__action__SoundRequest_Feedback * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_Feedback *
sound_play__action__SoundRequest_Feedback__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Feedback__destroy(sound_play__action__SoundRequest_Feedback * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_Feedback__Sequence__init(sound_play__action__SoundRequest_Feedback__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Feedback__Sequence__fini(sound_play__action__SoundRequest_Feedback__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_Feedback__Sequence *
sound_play__action__SoundRequest_Feedback__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_Feedback__Sequence__destroy(sound_play__action__SoundRequest_Feedback__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_SendGoal_Request
 * )) before or use
 * sound_play__action__SoundRequest_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_SendGoal_Request__init(sound_play__action__SoundRequest_SendGoal_Request * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Request__fini(sound_play__action__SoundRequest_SendGoal_Request * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_SendGoal_Request *
sound_play__action__SoundRequest_SendGoal_Request__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Request__destroy(sound_play__action__SoundRequest_SendGoal_Request * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_SendGoal_Request__Sequence__init(sound_play__action__SoundRequest_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Request__Sequence__fini(sound_play__action__SoundRequest_SendGoal_Request__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_SendGoal_Request__Sequence *
sound_play__action__SoundRequest_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Request__Sequence__destroy(sound_play__action__SoundRequest_SendGoal_Request__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_SendGoal_Response
 * )) before or use
 * sound_play__action__SoundRequest_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_SendGoal_Response__init(sound_play__action__SoundRequest_SendGoal_Response * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Response__fini(sound_play__action__SoundRequest_SendGoal_Response * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_SendGoal_Response *
sound_play__action__SoundRequest_SendGoal_Response__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Response__destroy(sound_play__action__SoundRequest_SendGoal_Response * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_SendGoal_Response__Sequence__init(sound_play__action__SoundRequest_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Response__Sequence__fini(sound_play__action__SoundRequest_SendGoal_Response__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_SendGoal_Response__Sequence *
sound_play__action__SoundRequest_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_SendGoal_Response__Sequence__destroy(sound_play__action__SoundRequest_SendGoal_Response__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_GetResult_Request
 * )) before or use
 * sound_play__action__SoundRequest_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_GetResult_Request__init(sound_play__action__SoundRequest_GetResult_Request * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Request__fini(sound_play__action__SoundRequest_GetResult_Request * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_GetResult_Request *
sound_play__action__SoundRequest_GetResult_Request__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Request__destroy(sound_play__action__SoundRequest_GetResult_Request * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_GetResult_Request__Sequence__init(sound_play__action__SoundRequest_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Request__Sequence__fini(sound_play__action__SoundRequest_GetResult_Request__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_GetResult_Request__Sequence *
sound_play__action__SoundRequest_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Request__Sequence__destroy(sound_play__action__SoundRequest_GetResult_Request__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_GetResult_Response
 * )) before or use
 * sound_play__action__SoundRequest_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_GetResult_Response__init(sound_play__action__SoundRequest_GetResult_Response * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Response__fini(sound_play__action__SoundRequest_GetResult_Response * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_GetResult_Response *
sound_play__action__SoundRequest_GetResult_Response__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Response__destroy(sound_play__action__SoundRequest_GetResult_Response * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_GetResult_Response__Sequence__init(sound_play__action__SoundRequest_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Response__Sequence__fini(sound_play__action__SoundRequest_GetResult_Response__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_GetResult_Response__Sequence *
sound_play__action__SoundRequest_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_GetResult_Response__Sequence__destroy(sound_play__action__SoundRequest_GetResult_Response__Sequence * array);

/// Initialize action/SoundRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sound_play__action__SoundRequest_FeedbackMessage
 * )) before or use
 * sound_play__action__SoundRequest_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_FeedbackMessage__init(sound_play__action__SoundRequest_FeedbackMessage * msg);

/// Finalize action/SoundRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_FeedbackMessage__fini(sound_play__action__SoundRequest_FeedbackMessage * msg);

/// Create action/SoundRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sound_play__action__SoundRequest_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_FeedbackMessage *
sound_play__action__SoundRequest_FeedbackMessage__create();

/// Destroy action/SoundRequest message.
/**
 * It calls
 * sound_play__action__SoundRequest_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_FeedbackMessage__destroy(sound_play__action__SoundRequest_FeedbackMessage * msg);


/// Initialize array of action/SoundRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * sound_play__action__SoundRequest_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
bool
sound_play__action__SoundRequest_FeedbackMessage__Sequence__init(sound_play__action__SoundRequest_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_FeedbackMessage__Sequence__fini(sound_play__action__SoundRequest_FeedbackMessage__Sequence * array);

/// Create array of action/SoundRequest messages.
/**
 * It allocates the memory for the array and calls
 * sound_play__action__SoundRequest_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
sound_play__action__SoundRequest_FeedbackMessage__Sequence *
sound_play__action__SoundRequest_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/SoundRequest messages.
/**
 * It calls
 * sound_play__action__SoundRequest_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sound_play
void
sound_play__action__SoundRequest_FeedbackMessage__Sequence__destroy(sound_play__action__SoundRequest_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SOUND_PLAY__ACTION__DETAIL__SOUND_REQUEST__FUNCTIONS_H_
