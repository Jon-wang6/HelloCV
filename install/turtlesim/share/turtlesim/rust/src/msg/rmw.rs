#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__msg__Color() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__msg__Color__init(msg: *mut Color) -> bool;
    fn turtlesim__msg__Color__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Color>, size: usize) -> bool;
    fn turtlesim__msg__Color__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Color>);
    fn turtlesim__msg__Color__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Color>, out_seq: *mut rosidl_runtime_rs::Sequence<Color>) -> bool;
}

// Corresponds to turtlesim__msg__Color
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Color {

    // This member is not documented.
    #[allow(missing_docs)]
    pub r: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub g: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: u8,

}



impl Default for Color {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__msg__Color__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__msg__Color__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Color {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__msg__Color__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__msg__Color__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__msg__Color__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Color {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Color where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/msg/Color";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__msg__Color() }
  }
}


#[link(name = "turtlesim__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim__msg__Pose() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim__rosidl_generator_c")]
extern "C" {
    fn turtlesim__msg__Pose__init(msg: *mut Pose) -> bool;
    fn turtlesim__msg__Pose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pose>, size: usize) -> bool;
    fn turtlesim__msg__Pose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pose>);
    fn turtlesim__msg__Pose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pose>, out_seq: *mut rosidl_runtime_rs::Sequence<Pose>) -> bool;
}

// Corresponds to turtlesim__msg__Pose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: f32,

}



impl Default for Pose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim__msg__Pose__init(&mut msg as *mut _) {
        panic!("Call to turtlesim__msg__Pose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__msg__Pose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__msg__Pose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim__msg__Pose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pose where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim/msg/Pose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim__msg__Pose() }
  }
}


