// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ParticleSLAMStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__TRAITS_HPP_

#include "eufs_msgs/msg/detail/particle_slam_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
#include "eufs_msgs/msg/detail/particle_slam__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eufs_msgs::msg::ParticleSLAMStamped>()
{
  return "eufs_msgs::msg::ParticleSLAMStamped";
}

template<>
inline const char * name<eufs_msgs::msg::ParticleSLAMStamped>()
{
  return "eufs_msgs/msg/ParticleSLAMStamped";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ParticleSLAMStamped>
  : std::integral_constant<bool, has_fixed_size<eufs_msgs::msg::ParticleSLAM>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ParticleSLAMStamped>
  : std::integral_constant<bool, has_bounded_size<eufs_msgs::msg::ParticleSLAM>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<eufs_msgs::msg::ParticleSLAMStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__TRAITS_HPP_
