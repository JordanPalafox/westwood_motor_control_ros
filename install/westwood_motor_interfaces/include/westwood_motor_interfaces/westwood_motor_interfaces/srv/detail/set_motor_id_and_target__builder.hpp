// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice

#ifndef WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__BUILDER_HPP_
#define WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace westwood_motor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorIdAndTarget_Request_target_positions
{
public:
  explicit Init_SetMotorIdAndTarget_Request_target_positions(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request & msg)
  : msg_(msg)
  {}
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request target_positions(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request::_target_positions_type arg)
  {
    msg_.target_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request msg_;
};

class Init_SetMotorIdAndTarget_Request_motor_ids
{
public:
  Init_SetMotorIdAndTarget_Request_motor_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorIdAndTarget_Request_target_positions motor_ids(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return Init_SetMotorIdAndTarget_Request_target_positions(msg_);
  }

private:
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>()
{
  return westwood_motor_interfaces::srv::builder::Init_SetMotorIdAndTarget_Request_motor_ids();
}

}  // namespace westwood_motor_interfaces


namespace westwood_motor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotorIdAndTarget_Response_previous_positions
{
public:
  explicit Init_SetMotorIdAndTarget_Response_previous_positions(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response & msg)
  : msg_(msg)
  {}
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response previous_positions(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response::_previous_positions_type arg)
  {
    msg_.previous_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response msg_;
};

class Init_SetMotorIdAndTarget_Response_message
{
public:
  explicit Init_SetMotorIdAndTarget_Response_message(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response & msg)
  : msg_(msg)
  {}
  Init_SetMotorIdAndTarget_Response_previous_positions message(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_SetMotorIdAndTarget_Response_previous_positions(msg_);
  }

private:
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response msg_;
};

class Init_SetMotorIdAndTarget_Response_success
{
public:
  Init_SetMotorIdAndTarget_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotorIdAndTarget_Response_message success(::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMotorIdAndTarget_Response_message(msg_);
  }

private:
  ::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>()
{
  return westwood_motor_interfaces::srv::builder::Init_SetMotorIdAndTarget_Response_success();
}

}  // namespace westwood_motor_interfaces

#endif  // WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__BUILDER_HPP_
