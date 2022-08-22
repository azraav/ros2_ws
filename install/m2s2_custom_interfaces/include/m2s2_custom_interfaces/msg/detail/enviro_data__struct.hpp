// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from m2s2_custom_interfaces:msg/EnviroData.idl
// generated code does not contain a copyright notice

#ifndef M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__STRUCT_HPP_
#define M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__STRUCT_HPP_

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
# define DEPRECATED__m2s2_custom_interfaces__msg__EnviroData __attribute__((deprecated))
#else
# define DEPRECATED__m2s2_custom_interfaces__msg__EnviroData __declspec(deprecated)
#endif

namespace m2s2_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnviroData_
{
  using Type = EnviroData_<ContainerAllocator>;

  explicit EnviroData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->pressure = 0.0;
      this->humidity = 0.0;
    }
  }

  explicit EnviroData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0;
      this->pressure = 0.0;
      this->humidity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _pressure_type =
    double;
  _pressure_type pressure;
  using _humidity_type =
    double;
  _humidity_type humidity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__pressure(
    const double & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__humidity(
    const double & _arg)
  {
    this->humidity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator> *;
  using ConstRawPtr =
    const m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__m2s2_custom_interfaces__msg__EnviroData
    std::shared_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__m2s2_custom_interfaces__msg__EnviroData
    std::shared_ptr<m2s2_custom_interfaces::msg::EnviroData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnviroData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->humidity != other.humidity) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnviroData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnviroData_

// alias to use template instance with default allocator
using EnviroData =
  m2s2_custom_interfaces::msg::EnviroData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace m2s2_custom_interfaces

#endif  // M2S2_CUSTOM_INTERFACES__MSG__DETAIL__ENVIRO_DATA__STRUCT_HPP_
