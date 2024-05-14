// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_

#include "eufs_msgs/msg/detail/particle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'map'
#include "eufs_msgs/msg/detail/cone_array_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eufs_msgs::msg::Particle>()
{
  return "eufs_msgs::msg::Particle";
}

template<>
inline const char * name<eufs_msgs::msg::Particle>()
{
  return "eufs_msgs/msg/Particle";
}

template<>
struct has_fixed_size<eufs_msgs::msg::Particle>
  : std::integral_constant<bool, has_fixed_size<eufs_msgs::msg::ConeArrayWithCovariance>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::Particle>
  : std::integral_constant<bool, has_bounded_size<eufs_msgs::msg::ConeArrayWithCovariance>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<eufs_msgs::msg::Particle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_
