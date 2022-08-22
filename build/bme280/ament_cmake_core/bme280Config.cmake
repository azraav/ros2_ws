# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_bme280_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED bme280_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(bme280_FOUND FALSE)
  elseif(NOT bme280_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(bme280_FOUND FALSE)
  endif()
  return()
endif()
set(_bme280_CONFIG_INCLUDED TRUE)

# output package information
if(NOT bme280_FIND_QUIETLY)
  message(STATUS "Found bme280: 0.0.0 (${bme280_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'bme280' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${bme280_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(bme280_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${bme280_DIR}/${_extra}")
endforeach()
