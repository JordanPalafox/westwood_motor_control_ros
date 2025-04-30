// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice

#ifndef WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__STRUCT_HPP_
#define WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request __attribute__((deprecated))
#else
# define DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request __declspec(deprecated)
#endif

namespace westwood_motor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorIdAndTarget_Request_
{
  using Type = SetMotorIdAndTarget_Request_<ContainerAllocator>;

  explicit SetMotorIdAndTarget_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetMotorIdAndTarget_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motor_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _motor_ids_type motor_ids;
  using _target_positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _target_positions_type target_positions;

  // setters for named parameter idiom
  Type & set__motor_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->motor_ids = _arg;
    return *this;
  }
  Type & set__target_positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->target_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Request
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorIdAndTarget_Request_ & other) const
  {
    if (this->motor_ids != other.motor_ids) {
      return false;
    }
    if (this->target_positions != other.target_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorIdAndTarget_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorIdAndTarget_Request_

// alias to use template instance with default allocator
using SetMotorIdAndTarget_Request =
  westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace westwood_motor_interfaces


#ifndef _WIN32
# define DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response __attribute__((deprecated))
#else
# define DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response __declspec(deprecated)
#endif

namespace westwood_motor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMotorIdAndTarget_Response_
{
  using Type = SetMotorIdAndTarget_Response_<ContainerAllocator>;

  explicit SetMotorIdAndTarget_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetMotorIdAndTarget_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _previous_positions_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _previous_positions_type previous_positions;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__previous_positions(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->previous_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__westwood_motor_interfaces__srv__SetMotorIdAndTarget_Response
    std::shared_ptr<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMotorIdAndTarget_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->previous_positions != other.previous_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMotorIdAndTarget_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMotorIdAndTarget_Response_

// alias to use template instance with default allocator
using SetMotorIdAndTarget_Response =
  westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace westwood_motor_interfaces

namespace westwood_motor_interfaces
{

namespace srv
{

struct SetMotorIdAndTarget
{
  using Request = westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request;
  using Response = westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response;
};

}  // namespace srv

}  // namespace westwood_motor_interfaces

#endif  // WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__STRUCT_HPP_
