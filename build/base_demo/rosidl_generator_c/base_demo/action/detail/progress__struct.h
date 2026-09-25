// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_demo:action/Progress.idl
// generated code does not contain a copyright notice

#ifndef BASE_DEMO__ACTION__DETAIL__PROGRESS__STRUCT_H_
#define BASE_DEMO__ACTION__DETAIL__PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_Goal
{
  int32_t num;
} base_demo__action__Progress_Goal;

// Struct for a sequence of base_demo__action__Progress_Goal.
typedef struct base_demo__action__Progress_Goal__Sequence
{
  base_demo__action__Progress_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_Result
{
  int32_t sum;
} base_demo__action__Progress_Result;

// Struct for a sequence of base_demo__action__Progress_Result.
typedef struct base_demo__action__Progress_Result__Sequence
{
  base_demo__action__Progress_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_Feedback
{
  double progress;
} base_demo__action__Progress_Feedback;

// Struct for a sequence of base_demo__action__Progress_Feedback.
typedef struct base_demo__action__Progress_Feedback__Sequence
{
  base_demo__action__Progress_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "base_demo/action/detail/progress__struct.h"

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_demo__action__Progress_Goal goal;
} base_demo__action__Progress_SendGoal_Request;

// Struct for a sequence of base_demo__action__Progress_SendGoal_Request.
typedef struct base_demo__action__Progress_SendGoal_Request__Sequence
{
  base_demo__action__Progress_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} base_demo__action__Progress_SendGoal_Response;

// Struct for a sequence of base_demo__action__Progress_SendGoal_Response.
typedef struct base_demo__action__Progress_SendGoal_Response__Sequence
{
  base_demo__action__Progress_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} base_demo__action__Progress_GetResult_Request;

// Struct for a sequence of base_demo__action__Progress_GetResult_Request.
typedef struct base_demo__action__Progress_GetResult_Request__Sequence
{
  base_demo__action__Progress_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "base_demo/action/detail/progress__struct.h"

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_GetResult_Response
{
  int8_t status;
  base_demo__action__Progress_Result result;
} base_demo__action__Progress_GetResult_Response;

// Struct for a sequence of base_demo__action__Progress_GetResult_Response.
typedef struct base_demo__action__Progress_GetResult_Response__Sequence
{
  base_demo__action__Progress_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "base_demo/action/detail/progress__struct.h"

/// Struct defined in action/Progress in the package base_demo.
typedef struct base_demo__action__Progress_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  base_demo__action__Progress_Feedback feedback;
} base_demo__action__Progress_FeedbackMessage;

// Struct for a sequence of base_demo__action__Progress_FeedbackMessage.
typedef struct base_demo__action__Progress_FeedbackMessage__Sequence
{
  base_demo__action__Progress_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_demo__action__Progress_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_DEMO__ACTION__DETAIL__PROGRESS__STRUCT_H_
