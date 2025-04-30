// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from westwood_motor_interfaces:srv/SetMotorIdAndTarget.idl
// generated code does not contain a copyright notice

#ifndef WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__TRAITS_HPP_
#define WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "westwood_motor_interfaces/srv/detail/set_motor_id_and_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace westwood_motor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotorIdAndTarget_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_ids
  {
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []";
    } else {
      out << "motor_ids: [";
      size_t pending_items = msg.motor_ids.size();
      for (auto item : msg.motor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_positions
  {
    if (msg.target_positions.size() == 0) {
      out << "target_positions: []";
    } else {
      out << "target_positions: [";
      size_t pending_items = msg.target_positions.size();
      for (auto item : msg.target_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotorIdAndTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_ids.size() == 0) {
      out << "motor_ids: []\n";
    } else {
      out << "motor_ids:\n";
      for (auto item : msg.motor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_positions.size() == 0) {
      out << "target_positions: []\n";
    } else {
      out << "target_positions:\n";
      for (auto item : msg.target_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotorIdAndTarget_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace westwood_motor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use westwood_motor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  westwood_motor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use westwood_motor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request & msg)
{
  return westwood_motor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>()
{
  return "westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request";
}

template<>
inline const char * name<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>()
{
  return "westwood_motor_interfaces/srv/SetMotorIdAndTarget_Request";
}

template<>
struct has_fixed_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace westwood_motor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMotorIdAndTarget_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: previous_positions
  {
    if (msg.previous_positions.size() == 0) {
      out << "previous_positions: []";
    } else {
      out << "previous_positions: [";
      size_t pending_items = msg.previous_positions.size();
      for (auto item : msg.previous_positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMotorIdAndTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: previous_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.previous_positions.size() == 0) {
      out << "previous_positions: []\n";
    } else {
      out << "previous_positions:\n";
      for (auto item : msg.previous_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMotorIdAndTarget_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace westwood_motor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use westwood_motor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  westwood_motor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use westwood_motor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response & msg)
{
  return westwood_motor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>()
{
  return "westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response";
}

template<>
inline const char * name<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>()
{
  return "westwood_motor_interfaces/srv/SetMotorIdAndTarget_Response";
}

template<>
struct has_fixed_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<westwood_motor_interfaces::srv::SetMotorIdAndTarget>()
{
  return "westwood_motor_interfaces::srv::SetMotorIdAndTarget";
}

template<>
inline const char * name<westwood_motor_interfaces::srv::SetMotorIdAndTarget>()
{
  return "westwood_motor_interfaces/srv/SetMotorIdAndTarget";
}

template<>
struct has_fixed_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>::value &&
    has_fixed_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>::value &&
    has_bounded_size<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>::value
  >
{
};

template<>
struct is_service<westwood_motor_interfaces::srv::SetMotorIdAndTarget>
  : std::true_type
{
};

template<>
struct is_service_request<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<westwood_motor_interfaces::srv::SetMotorIdAndTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WESTWOOD_MOTOR_INTERFACES__SRV__DETAIL__SET_MOTOR_ID_AND_TARGET__TRAITS_HPP_
