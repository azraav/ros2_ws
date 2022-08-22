// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from audio_common_msgs:msg/AudioInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "audio_common_msgs/msg/detail/audio_info__struct.h"
#include "audio_common_msgs/msg/detail/audio_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool audio_common_msgs__msg__audio_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("audio_common_msgs.msg._audio_info.AudioInfo", full_classname_dest, 43) == 0);
  }
  audio_common_msgs__msg__AudioInfo * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // channels
    PyObject * field = PyObject_GetAttrString(_pymsg, "channels");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->channels = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sample_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sample_rate = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sample_format
    PyObject * field = PyObject_GetAttrString(_pymsg, "sample_format");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sample_format, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bitrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "bitrate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bitrate = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coding_format
    PyObject * field = PyObject_GetAttrString(_pymsg, "coding_format");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->coding_format, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * audio_common_msgs__msg__audio_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AudioInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("audio_common_msgs.msg._audio_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AudioInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  audio_common_msgs__msg__AudioInfo * ros_message = (audio_common_msgs__msg__AudioInfo *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // channels
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->channels);
    {
      int rc = PyObject_SetAttrString(_pymessage, "channels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sample_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sample_format
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sample_format.data,
      strlen(ros_message->sample_format.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sample_format", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bitrate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bitrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bitrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coding_format
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->coding_format.data,
      strlen(ros_message->coding_format.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "coding_format", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}