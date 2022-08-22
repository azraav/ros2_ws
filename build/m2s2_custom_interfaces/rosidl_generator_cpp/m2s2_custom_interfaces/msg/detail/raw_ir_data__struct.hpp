// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from m2s2_custom_interfaces:msg/RawIrData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__STRUCT_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__STRUCT_HPP_

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
# define DEPRECATED__m2s2_custom_interfaces__msg__RawIrData __attribute__((deprecated))
#else
# define DEPRECATED__m2s2_custom_interfaces__msg__RawIrData __declspec(deprecated)
#endif

namespace m2s2_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawIrData_
{
  using Type = RawIrData_<ContainerAllocator>;

  explicit RawIrData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    raw_values(_init)
  {
    (void)_init;
  }

  explicit RawIrData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator> *;
  using ConstRawPtr =
    const m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__m2s2_custom_interfaces__msg__RawIrData
    std::shared_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__m2s2_custom_interfaces__msg__RawIrData
    std::shared_ptr<m2s2_custom_interfaces::msg::RawIrData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawIrData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->raw_values != other.raw_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawIrData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawIrData_

// alias to use template instance with default allocator
using RawIrData =
  m2s2_custom_interfaces::msg::RawIrData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace m2s2_custom_interfaces

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__RAW_IR_DATA__STRUCT_HPP_
