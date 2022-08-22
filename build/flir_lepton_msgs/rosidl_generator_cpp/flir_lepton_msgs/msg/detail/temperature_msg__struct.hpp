// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flir_lepton_msgs:msg/TemperatureMsg.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__STRUCT_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flir_lepton_msgs__msg__TemperatureMsg __attribute__((deprecated))
#else
# define DEPRECATED__flir_lepton_msgs__msg__TemperatureMsg __declspec(deprecated)
#endif

namespace flir_lepton_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TemperatureMsg_
{
  using Type = TemperatureMsg_<ContainerAllocator>;

  explicit TemperatureMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->unit = "";
    }
  }

  explicit TemperatureMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->unit = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _unit_type unit;
  using _data_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flir_lepton_msgs__msg__TemperatureMsg
    std::shared_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flir_lepton_msgs__msg__TemperatureMsg
    std::shared_ptr<flir_lepton_msgs::msg::TemperatureMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TemperatureMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TemperatureMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TemperatureMsg_

// alias to use template instance with default allocator
using TemperatureMsg =
  flir_lepton_msgs::msg::TemperatureMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flir_lepton_msgs

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__TEMPERATURE_MSG__STRUCT_HPP_
