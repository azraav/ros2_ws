// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sound_play:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef SOUND_PLAY__ACTION__DETAIL__SOUND_REQUEST__TRAITS_HPP_
#define SOUND_PLAY__ACTION__DETAIL__SOUND_REQUEST__TRAITS_HPP_

#include "sound_play/action/detail/sound_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'sound_request'
#include "sound_play/msg/detail/sound_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_Goal>()
{
  return "sound_play::action::SoundRequest_Goal";
}

template<>
inline const char * name<sound_play::action::SoundRequest_Goal>()
{
  return "sound_play/action/SoundRequest_Goal";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_Goal>
  : std::integral_constant<bool, has_fixed_size<sound_play::msg::SoundRequest>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_Goal>
  : std::integral_constant<bool, has_bounded_size<sound_play::msg::SoundRequest>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_Result>()
{
  return "sound_play::action::SoundRequest_Result";
}

template<>
inline const char * name<sound_play::action::SoundRequest_Result>()
{
  return "sound_play/action/SoundRequest_Result";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_Feedback>()
{
  return "sound_play::action::SoundRequest_Feedback";
}

template<>
inline const char * name<sound_play::action::SoundRequest_Feedback>()
{
  return "sound_play/action/SoundRequest_Feedback";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "sound_play/action/detail/sound_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_SendGoal_Request>()
{
  return "sound_play::action::SoundRequest_SendGoal_Request";
}

template<>
inline const char * name<sound_play::action::SoundRequest_SendGoal_Request>()
{
  return "sound_play/action/SoundRequest_SendGoal_Request";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<sound_play::action::SoundRequest_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<sound_play::action::SoundRequest_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_SendGoal_Response>()
{
  return "sound_play::action::SoundRequest_SendGoal_Response";
}

template<>
inline const char * name<sound_play::action::SoundRequest_SendGoal_Response>()
{
  return "sound_play/action/SoundRequest_SendGoal_Response";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_SendGoal>()
{
  return "sound_play::action::SoundRequest_SendGoal";
}

template<>
inline const char * name<sound_play::action::SoundRequest_SendGoal>()
{
  return "sound_play/action/SoundRequest_SendGoal";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<sound_play::action::SoundRequest_SendGoal_Request>::value &&
    has_fixed_size<sound_play::action::SoundRequest_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<sound_play::action::SoundRequest_SendGoal_Request>::value &&
    has_bounded_size<sound_play::action::SoundRequest_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<sound_play::action::SoundRequest_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<sound_play::action::SoundRequest_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sound_play::action::SoundRequest_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_GetResult_Request>()
{
  return "sound_play::action::SoundRequest_GetResult_Request";
}

template<>
inline const char * name<sound_play::action::SoundRequest_GetResult_Request>()
{
  return "sound_play/action/SoundRequest_GetResult_Request";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "sound_play/action/detail/sound_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_GetResult_Response>()
{
  return "sound_play::action::SoundRequest_GetResult_Response";
}

template<>
inline const char * name<sound_play::action::SoundRequest_GetResult_Response>()
{
  return "sound_play/action/SoundRequest_GetResult_Response";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<sound_play::action::SoundRequest_Result>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<sound_play::action::SoundRequest_Result>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_GetResult>()
{
  return "sound_play::action::SoundRequest_GetResult";
}

template<>
inline const char * name<sound_play::action::SoundRequest_GetResult>()
{
  return "sound_play/action/SoundRequest_GetResult";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<sound_play::action::SoundRequest_GetResult_Request>::value &&
    has_fixed_size<sound_play::action::SoundRequest_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<sound_play::action::SoundRequest_GetResult_Request>::value &&
    has_bounded_size<sound_play::action::SoundRequest_GetResult_Response>::value
  >
{
};

template<>
struct is_service<sound_play::action::SoundRequest_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<sound_play::action::SoundRequest_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sound_play::action::SoundRequest_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "sound_play/action/detail/sound_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sound_play::action::SoundRequest_FeedbackMessage>()
{
  return "sound_play::action::SoundRequest_FeedbackMessage";
}

template<>
inline const char * name<sound_play::action::SoundRequest_FeedbackMessage>()
{
  return "sound_play/action/SoundRequest_FeedbackMessage";
}

template<>
struct has_fixed_size<sound_play::action::SoundRequest_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<sound_play::action::SoundRequest_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sound_play::action::SoundRequest_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<sound_play::action::SoundRequest_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sound_play::action::SoundRequest_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<sound_play::action::SoundRequest>
  : std::true_type
{
};

template<>
struct is_action_goal<sound_play::action::SoundRequest_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<sound_play::action::SoundRequest_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<sound_play::action::SoundRequest_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SOUND_PLAY__ACTION__DETAIL__SOUND_REQUEST__TRAITS_HPP_
