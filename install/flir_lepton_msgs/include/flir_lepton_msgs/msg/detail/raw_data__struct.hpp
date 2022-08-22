// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flir_lepton_msgs:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__STRUCT_HPP_
#define FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__STRUCT_HPP_

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
// Member 'raw_values'
#include "example_interfaces/msg/detail/int16_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flir_lepton_msgs__msg__RawData __attribute__((deprecated))
#else
# define DEPRECATED__flir_lepton_msgs__msg__RawData __declspec(deprecated)
#endif

namespace flir_lepton_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawData_
{
  using Type = RawData_<ContainerAllocator>;

  explicit RawData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    raw_values(_init)
  {
    (void)_init;
  }

  explicit RawData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    raw_values(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _raw_values_type =
    example_interfaces::msg::Int16MultiArray_<ContainerAllocator>;
  _raw_values_type raw_values;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__raw_values(
    const example_interfaces::msg::Int16MultiArray_<ContainerAllocator> & _arg)
  {
    this->raw_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flir_lepton_msgs::msg::RawData_<ContainerAllocator> *;
  using ConstRawPtr =
    const flir_lepton_msgs::msg::RawData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flir_lepton_msgs::msg::RawData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flir_lepton_msgs::msg::RawData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flir_lepton_msgs__msg__RawData
    std::shared_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flir_lepton_msgs__msg__RawData
    std::shared_ptr<flir_lepton_msgs::msg::RawData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->raw_values != other.raw_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawData_

// alias to use template instance with default allocator
using RawData =
  flir_lepton_msgs::msg::RawData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flir_lepton_msgs

#endif  // FLIR_LEPTON_MSGS__MSG__DETAIL__RAW_DATA__STRUCT_HPP_
