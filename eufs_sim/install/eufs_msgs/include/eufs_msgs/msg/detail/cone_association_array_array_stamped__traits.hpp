// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConeAssociationArrayArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_ARRAY_STAMPED__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_ARRAY_STAMPED__TRAITS_HPP_

#include "eufs_msgs/msg/detail/cone_association_array_array_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eufs_msgs::msg::ConeAssociationArrayArrayStamped>()
{
  return "eufs_msgs::msg::ConeAssociationArrayArrayStamped";
}

template<>
inline const char * name<eufs_msgs::msg::ConeAssociationArrayArrayStamped>()
{
  return "eufs_msgs/msg/ConeAssociationArrayArrayStamped";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConeAssociationArrayArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConeAssociationArrayArrayStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ConeAssociationArrayArrayStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_ARRAY_STAMPED__TRAITS_HPP_
