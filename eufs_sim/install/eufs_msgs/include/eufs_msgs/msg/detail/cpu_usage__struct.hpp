// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'all'
// Member 'cpus'
#include "eufs_msgs/msg/detail/cpu_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__CpuUsage __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__CpuUsage __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CpuUsage_
{
  using Type = CpuUsage_<ContainerAllocator>;

  explicit CpuUsage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    all(_init)
  {
    (void)_init;
  }

  explicit CpuUsage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    all(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _all_type =
    eufs_msgs::msg::CpuStatus_<ContainerAllocator>;
  _all_type all;
  using _cpus_type =
    std::vector<eufs_msgs::msg::CpuStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<eufs_msgs::msg::CpuStatus_<ContainerAllocator>>::other>;
  _cpus_type cpus;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__all(
    const eufs_msgs::msg::CpuStatus_<ContainerAllocator> & _arg)
  {
    this->all = _arg;
    return *this;
  }
  Type & set__cpus(
    const std::vector<eufs_msgs::msg::CpuStatus_<ContainerAllocator>, typename ContainerAllocator::template rebind<eufs_msgs::msg::CpuStatus_<ContainerAllocator>>::other> & _arg)
  {
    this->cpus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::CpuUsage_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::CpuUsage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::CpuUsage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::CpuUsage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__CpuUsage
    std::shared_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__CpuUsage
    std::shared_ptr<eufs_msgs::msg::CpuUsage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CpuUsage_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->all != other.all) {
      return false;
    }
    if (this->cpus != other.cpus) {
      return false;
    }
    return true;
  }
  bool operator!=(const CpuUsage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CpuUsage_

// alias to use template instance with default allocator
using CpuUsage =
  eufs_msgs::msg::CpuUsage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_HPP_