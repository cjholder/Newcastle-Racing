// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE__BUILDER_HPP_

#include "eufs_msgs/msg/detail/particle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_Particle_weight
{
public:
  explicit Init_Particle_weight(::eufs_msgs::msg::Particle & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::Particle weight(::eufs_msgs::msg::Particle::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::Particle msg_;
};

class Init_Particle_map
{
public:
  explicit Init_Particle_map(::eufs_msgs::msg::Particle & msg)
  : msg_(msg)
  {}
  Init_Particle_weight map(::eufs_msgs::msg::Particle::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_Particle_weight(msg_);
  }

private:
  ::eufs_msgs::msg::Particle msg_;
};

class Init_Particle_pose
{
public:
  Init_Particle_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Particle_map pose(::eufs_msgs::msg::Particle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Particle_map(msg_);
  }

private:
  ::eufs_msgs::msg::Particle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::Particle>()
{
  return eufs_msgs::msg::builder::Init_Particle_pose();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE__BUILDER_HPP_
