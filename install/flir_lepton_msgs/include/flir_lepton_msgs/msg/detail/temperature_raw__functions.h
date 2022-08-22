// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flir_lepton_msgs:msg/TemperatureRaw.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__FUNCTIONS_H_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flir_lepton_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "flir_lepton_msgs/msg/detail/temperature_raw__struct.h"

/// Initialize msg/TemperatureRaw message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flir_lepton_msgs__msg__TemperatureRaw
 * )) before or use
 * flir_lepton_msgs__msg__TemperatureRaw__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
bool
flir_lepton_msgs__msg__TemperatureRaw__init(flir_lepton_msgs__msg__TemperatureRaw * msg);

/// Finalize msg/TemperatureRaw message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__TemperatureRaw__fini(flir_lepton_msgs__msg__TemperatureRaw * msg);

/// Create msg/TemperatureRaw message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flir_lepton_msgs__msg__TemperatureRaw__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
flir_lepton_msgs__msg__TemperatureRaw *
flir_lepton_msgs__msg__TemperatureRaw__create();

/// Destroy msg/TemperatureRaw message.
/**
 * It calls
 * flir_lepton_msgs__msg__TemperatureRaw__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__TemperatureRaw__destroy(flir_lepton_msgs__msg__TemperatureRaw * msg);


/// Initialize array of msg/TemperatureRaw messages.
/**
 * It allocates the memory for the number of elements and calls
 * flir_lepton_msgs__msg__TemperatureRaw__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
bool
flir_lepton_msgs__msg__TemperatureRaw__Sequence__init(flir_lepton_msgs__msg__TemperatureRaw__Sequence * array, size_t size);

/// Finalize array of msg/TemperatureRaw messages.
/**
 * It calls
 * flir_lepton_msgs__msg__TemperatureRaw__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__TemperatureRaw__Sequence__fini(flir_lepton_msgs__msg__TemperatureRaw__Sequence * array);

/// Create array of msg/TemperatureRaw messages.
/**
 * It allocates the memory for the array and calls
 * flir_lepton_msgs__msg__TemperatureRaw__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
flir_lepton_msgs__msg__TemperatureRaw__Sequence *
flir_lepton_msgs__msg__TemperatureRaw__Sequence__create(size_t size);

/// Destroy array of msg/TemperatureRaw messages.
/**
 * It calls
 * flir_lepton_msgs__msg__TemperatureRaw__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flir_lepton_msgs
void
flir_lepton_msgs__msg__TemperatureRaw__Sequence__destroy(flir_lepton_msgs__msg__TemperatureRaw__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_RAW__FUNCTIONS_H_
