# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_flir_lepton_capture_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED flir_lepton_capture_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(flir_lepton_capture_FOUND FALSE)
  elseif(NOT flir_lepton_capture_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(flir_lepton_capture_FOUND FALSE)
  endif()
  return()
endif()
set(_flir_lepton_capture_CONFIG_INCLUDED TRUE)

# output package information
if(NOT flir_lepton_capture_FIND_QUIETLY)
  message(STATUS "Found flir_lepton_capture: 0.0.0 (${flir_lepton_capture_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'flir_lepton_capture' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${flir_lepton_capture_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(flir_lepton_capture_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${flir_lepton_capture_DIR}/${_extra}")
endforeach()
