
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_Goal() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_Goal__init(msg: *mut RotateAbsolute_Goal) -> bool;
    fn turtlesim__action__RotateAbsolute_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Goal>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Goal>);
    fn turtlesim__action__RotateAbsolute_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Goal>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,

}



impl Default for RotateAbsolute_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_Goal__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_Goal() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_Result() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_Result__init(msg: *mut RotateAbsolute_Result) -> bool;
    fn turtlesim__action__RotateAbsolute_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Result>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Result>);
    fn turtlesim__action__RotateAbsolute_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Result>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub delta: f32,

}



impl Default for RotateAbsolute_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_Result__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_Result where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_Result() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_Feedback__init(msg: *mut RotateAbsolute_Feedback) -> bool;
    fn turtlesim__action__RotateAbsolute_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Feedback>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Feedback>);
    fn turtlesim__action__RotateAbsolute_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_Feedback>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining: f32,

}



impl Default for RotateAbsolute_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_Feedback__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_Feedback() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_FeedbackMessage__init(msg: *mut RotateAbsolute_FeedbackMessage) -> bool;
    fn turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_FeedbackMessage>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_FeedbackMessage>);
    fn turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_FeedbackMessage>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::RotateAbsolute_Feedback,

}



impl Default for RotateAbsolute_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_FeedbackMessage() }
  }
}




#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_SendGoal_Request__init(msg: *mut RotateAbsolute_SendGoal_Request) -> bool;
    fn turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Request>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Request>);
    fn turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Request>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::RotateAbsolute_Goal,

}



impl Default for RotateAbsolute_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_SendGoal_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_SendGoal_Response__init(msg: *mut RotateAbsolute_SendGoal_Response) -> bool;
    fn turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Response>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Response>);
    fn turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_SendGoal_Response>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RotateAbsolute_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_SendGoal_Response() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_GetResult_Request__init(msg: *mut RotateAbsolute_GetResult_Request) -> bool;
    fn turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Request>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Request>);
    fn turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Request>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for RotateAbsolute_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_GetResult_Request() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__action__RotateAbsolute_GetResult_Response__init(msg: *mut RotateAbsolute_GetResult_Response) -> bool;
    fn turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Response>, size: usize) -> bool;
    fn turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Response>);
    fn turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RotateAbsolute_GetResult_Response>) -> bool;
}

// Corresponds to turtlesim__action__RotateAbsolute_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RotateAbsolute_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::RotateAbsolute_Result,

}



impl Default for RotateAbsolute_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__action__RotateAbsolute_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__action__RotateAbsolute_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RotateAbsolute_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__action__RotateAbsolute_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RotateAbsolute_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RotateAbsolute_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/action/RotateAbsolute_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__action__RotateAbsolute_GetResult_Response() }
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


