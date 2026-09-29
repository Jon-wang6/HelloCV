
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to turtlesim__action__RotateAbsolute_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,

}



impl Default for RotateAbsolute_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_Goal {
  type RmwMsg = super::action::rmw::RotateAbsolute_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        theta: msg.theta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      theta: msg.theta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      theta: msg.theta,
    }
  }
}


// Corresponds to turtlesim__action__RotateAbsolute_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub delta: f32,

}



impl Default for RotateAbsolute_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_Result::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_Result {
  type RmwMsg = super::action::rmw::RotateAbsolute_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        delta: msg.delta,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      delta: msg.delta,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      delta: msg.delta,
    }
  }
}


// Corresponds to turtlesim__action__RotateAbsolute_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining: f32,

}



impl Default for RotateAbsolute_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_Feedback {
  type RmwMsg = super::action::rmw::RotateAbsolute_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        remaining: msg.remaining,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      remaining: msg.remaining,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      remaining: msg.remaining,
    }
  }
}


// Corresponds to turtlesim__action__RotateAbsolute_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::RotateAbsolute_Feedback,

}



impl Default for RotateAbsolute_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_FeedbackMessage {
  type RmwMsg = super::action::rmw::RotateAbsolute_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::RotateAbsolute_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::RotateAbsolute_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::RotateAbsolute_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to turtlesim__action__RotateAbsolute_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::RotateAbsolute_Goal,

}



impl Default for RotateAbsolute_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_SendGoal_Request {
  type RmwMsg = super::action::rmw::RotateAbsolute_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::RotateAbsolute_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::RotateAbsolute_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::RotateAbsolute_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to turtlesim__action__RotateAbsolute_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for RotateAbsolute_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_SendGoal_Response {
  type RmwMsg = super::action::rmw::RotateAbsolute_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to turtlesim__action__RotateAbsolute_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for RotateAbsolute_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_GetResult_Request {
  type RmwMsg = super::action::rmw::RotateAbsolute_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to turtlesim__action__RotateAbsolute_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::RotateAbsolute_Result,

}



impl Default for RotateAbsolute_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RotateAbsolute_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_GetResult_Response {
  type RmwMsg = super::action::rmw::RotateAbsolute_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::RotateAbsolute_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::RotateAbsolute_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::RotateAbsolute_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__action__RotateAbsolute_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__action__RotateAbsolute_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct RotateAbsolute_SendGoal;

impl rosidl_runtime_rs::Service for RotateAbsolute_SendGoal {
    type Request = RotateAbsolute_SendGoal_Request;
    type Response = RotateAbsolute_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__action__RotateAbsolute_SendGoal() }
    }
}




#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim__action__RotateAbsolute_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__action__RotateAbsolute_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct RotateAbsolute_GetResult;

impl rosidl_runtime_rs::Service for RotateAbsolute_GetResult {
    type Request = RotateAbsolute_GetResult_Request;
    type Response = RotateAbsolute_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim__action__RotateAbsolute_GetResult() }
    }
}






#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__turtlesim__action__RotateAbsolute() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim__action__RotateAbsolute
#[allow(missing_docs, non_camel_case_types)]
pub struct RotateAbsolute;

impl rosidl_runtime_rs::Action for RotateAbsolute {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = RotateAbsolute_Goal;

  /// The result message defined in the action definition.
  type Result = RotateAbsolute_Result;

  /// The feedback message defined in the action definition.
  type Feedback = RotateAbsolute_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::RotateAbsolute_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::RotateAbsolute_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::RotateAbsolute_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__turtlesim__action__RotateAbsolute() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::RotateAbsolute_Goal,
  ) -> super::action::rmw::RotateAbsolute_SendGoal_Request {
   super::action::rmw::RotateAbsolute_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::RotateAbsolute_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::RotateAbsolute_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::RotateAbsolute_SendGoal_Response {
   super::action::rmw::RotateAbsolute_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::RotateAbsolute_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::RotateAbsolute_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::RotateAbsolute_Feedback,
  ) -> super::action::rmw::RotateAbsolute_FeedbackMessage {
    let mut message = super::action::rmw::RotateAbsolute_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::RotateAbsolute_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::RotateAbsolute_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::RotateAbsolute_GetResult_Request {
   super::action::rmw::RotateAbsolute_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::RotateAbsolute_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::RotateAbsolute_Result,
  ) -> super::action::rmw::RotateAbsolute_GetResult_Response {
   super::action::rmw::RotateAbsolute_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::RotateAbsolute_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::RotateAbsolute_Result,
  ) {
    (response.status, response.result)
  }
}


