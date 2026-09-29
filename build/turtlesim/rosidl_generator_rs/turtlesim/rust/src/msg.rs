#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to turtlesim__msg__Color

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Color::default())
  }
}

impl rosidl_runtime_rs::Message for Color {
  type RmwMsg = super::msg::rmw::Color;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        r: msg.r,
        g: msg.g,
        b: msg.b,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      r: msg.r,
      g: msg.g,
      b: msg.b,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      r: msg.r,
      g: msg.g,
      b: msg.b,
    }
  }
}


// Corresponds to turtlesim__msg__Pose

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pose::default())
  }
}

impl rosidl_runtime_rs::Message for Pose {
  type RmwMsg = super::msg::rmw::Pose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        theta: msg.theta,
        linear_velocity: msg.linear_velocity,
        angular_velocity: msg.angular_velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      theta: msg.theta,
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      theta: msg.theta,
      linear_velocity: msg.linear_velocity,
      angular_velocity: msg.angular_velocity,
    }
  }
}


