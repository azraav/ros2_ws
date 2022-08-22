// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from m2s2_custom_interfaces:msg/EnviroData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__FUNCTIONS_H_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "m2s2_custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "m2s2_custom_interfaces/msg/detail/enviro_data__struct.h"

/// Initialize msg/EnviroData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * m2s2_custom_interfaces__msg__EnviroData
 * )) before or use
 * m2s2_custom_interfaces__msg__EnviroData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
bool
m2s2_custom_interfaces__msg__EnviroData__init(m2s2_custom_interfaces__msg__EnviroData * msg);

/// Finalize msg/EnviroData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__EnviroData__fini(m2s2_custom_interfaces__msg__EnviroData * msg);

/// Create msg/EnviroData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * m2s2_custom_interfaces__msg__EnviroData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
m2s2_custom_interfaces__msg__EnviroData *
m2s2_custom_interfaces__msg__EnviroData__create();

/// Destroy msg/EnviroData message.
/**
 * It calls
 * m2s2_custom_interfaces__msg__EnviroData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__EnviroData__destroy(m2s2_custom_interfaces__msg__EnviroData * msg);


/// Initialize array of msg/EnviroData messages.
/**
 * It allocates the memory for the number of elements and calls
 * m2s2_custom_interfaces__msg__EnviroData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
bool
m2s2_custom_interfaces__msg__EnviroData__Sequence__init(m2s2_custom_interfaces__msg__EnviroData__Sequence * array, size_t size);

/// Finalize array of msg/EnviroData messages.
/**
 * It calls
 * m2s2_custom_interfaces__msg__EnviroData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__EnviroData__Sequence__fini(m2s2_custom_interfaces__msg__EnviroData__Sequence * array);

/// Create array of msg/EnviroData messages.
/**
 * It allocates the memory for the array and calls
 * m2s2_custom_interfaces__msg__EnviroData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
m2s2_custom_interfaces__msg__EnviroData__Sequence *
m2s2_custom_interfaces__msg__EnviroData__Sequence__create(size_t size);

/// Destroy array of msg/EnviroData messages.
/**
 * It calls
 * m2s2_custom_interfaces__msg__EnviroData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_m2s2_custom_interfaces
void
m2s2_custom_interfaces__msg__EnviroData__Sequence__destroy(m2s2_custom_interfaces__msg__EnviroData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__FUNCTIONS_H_
