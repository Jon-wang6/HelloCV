
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_Goal() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_Goal__init(msg: *mut Progress_Goal) -> bool;
    fn base_demo__action__Progress_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_Goal>, size: usize) -> bool;
    fn base_demo__action__Progress_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_Goal>);
    fn base_demo__action__Progress_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_Goal>) -> bool;
}

// Corresponds to base_demo__action__Progress_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub num: i32,

}



impl Default for Progress_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_Goal__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_Goal() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_Result() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_Result__init(msg: *mut Progress_Result) -> bool;
    fn base_demo__action__Progress_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_Result>, size: usize) -> bool;
    fn base_demo__action__Progress_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_Result>);
    fn base_demo__action__Progress_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_Result>) -> bool;
}

// Corresponds to base_demo__action__Progress_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sum: i32,

}



impl Default for Progress_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_Result__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_Result where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_Result() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_Feedback__init(msg: *mut Progress_Feedback) -> bool;
    fn base_demo__action__Progress_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_Feedback>, size: usize) -> bool;
    fn base_demo__action__Progress_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_Feedback>);
    fn base_demo__action__Progress_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_Feedback>) -> bool;
}

// Corresponds to base_demo__action__Progress_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f64,

}



impl Default for Progress_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_Feedback__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_Feedback() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_FeedbackMessage__init(msg: *mut Progress_FeedbackMessage) -> bool;
    fn base_demo__action__Progress_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_FeedbackMessage>, size: usize) -> bool;
    fn base_demo__action__Progress_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_FeedbackMessage>);
    fn base_demo__action__Progress_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_FeedbackMessage>) -> bool;
}

// Corresponds to base_demo__action__Progress_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Progress_Feedback,

}



impl Default for Progress_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_FeedbackMessage() }
  }
}




#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_SendGoal_Request__init(msg: *mut Progress_SendGoal_Request) -> bool;
    fn base_demo__action__Progress_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_SendGoal_Request>, size: usize) -> bool;
    fn base_demo__action__Progress_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_SendGoal_Request>);
    fn base_demo__action__Progress_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_SendGoal_Request>) -> bool;
}

// Corresponds to base_demo__action__Progress_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Progress_Goal,

}



impl Default for Progress_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_SendGoal_Request() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_SendGoal_Response__init(msg: *mut Progress_SendGoal_Response) -> bool;
    fn base_demo__action__Progress_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_SendGoal_Response>, size: usize) -> bool;
    fn base_demo__action__Progress_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_SendGoal_Response>);
    fn base_demo__action__Progress_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_SendGoal_Response>) -> bool;
}

// Corresponds to base_demo__action__Progress_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Progress_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_SendGoal_Response() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_GetResult_Request__init(msg: *mut Progress_GetResult_Request) -> bool;
    fn base_demo__action__Progress_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_GetResult_Request>, size: usize) -> bool;
    fn base_demo__action__Progress_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_GetResult_Request>);
    fn base_demo__action__Progress_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_GetResult_Request>) -> bool;
}

// Corresponds to base_demo__action__Progress_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Progress_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_GetResult_Request() }
  }
}


#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "base_demo__rosidl_generator_c")]
extern "C" {
    fn base_demo__action__Progress_GetResult_Response__init(msg: *mut Progress_GetResult_Response) -> bool;
    fn base_demo__action__Progress_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Progress_GetResult_Response>, size: usize) -> bool;
    fn base_demo__action__Progress_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Progress_GetResult_Response>);
    fn base_demo__action__Progress_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Progress_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Progress_GetResult_Response>) -> bool;
}

// Corresponds to base_demo__action__Progress_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Progress_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Progress_Result,

}



impl Default for Progress_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !base_demo__action__Progress_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to base_demo__action__Progress_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Progress_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { base_demo__action__Progress_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Progress_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Progress_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "base_demo/action/Progress_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__base_demo__action__Progress_GetResult_Response() }
  }
}






#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__base_demo__action__Progress_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to base_demo__action__Progress_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Progress_SendGoal;

impl rosidl_runtime_rs::Service for Progress_SendGoal {
    type Request = Progress_SendGoal_Request;
    type Response = Progress_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__base_demo__action__Progress_SendGoal() }
    }
}




#[link(name = "base_demo__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__base_demo__action__Progress_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to base_demo__action__Progress_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Progress_GetResult;

impl rosidl_runtime_rs::Service for Progress_GetResult {
    type Request = Progress_GetResult_Request;
    type Response = Progress_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__base_demo__action__Progress_GetResult() }
    }
}


