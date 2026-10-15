#include "nav2_util/node_utils.hpp"

#include <algorithm>
#include <cmath>
#include <memory>
#include <string>

#include "nav2_core/exceptions.hpp"
#include "nav2_custom_planner/nav2_custom_planner.hpp"

namespace nav2_custom_planner
{

void CustomPlanner::configure(
  const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent, std::string name,
  std::shared_ptr<tf2_ros::Buffer> tf,
  std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros)
{
  tf_ = tf;
  node_ = parent.lock();
  name_ = name;
  costmap_ = costmap_ros->getCostmap();
  global_frame_ = costmap_ros->getGlobalFrameID();

  nav2_util::declare_parameter_if_not_declared(
    node_, name_ + ".interpolation_resolution", rclcpp::ParameterValue(0.1));
  node_->get_parameter(name_ + ".interpolation_resolution", interpolation_resolution_);
}

void CustomPlanner::cleanup()
{
  RCLCPP_INFO(node_->get_logger(), "正在清理 CustomPlanner 插件 %s", name_.c_str());
}

void CustomPlanner::activate()
{
  RCLCPP_INFO(node_->get_logger(), "正在激活 CustomPlanner 插件 %s", name_.c_str());
}

void CustomPlanner::deactivate()
{
  RCLCPP_INFO(node_->get_logger(), "正在停用 CustomPlanner 插件 %s", name_.c_str());
}

nav_msgs::msg::Path CustomPlanner::createPlan(
  const geometry_msgs::msg::PoseStamped & start,
  const geometry_msgs::msg::PoseStamped & goal)
{
  nav_msgs::msg::Path global_path;
  global_path.header.stamp = node_->now();
  global_path.header.frame_id = global_frame_;

  if (start.header.frame_id != global_frame_ || goal.header.frame_id != global_frame_) {
    RCLCPP_ERROR(node_->get_logger(), "规划器只接受 %s 坐标系中的位姿", global_frame_.c_str());
    return global_path;
  }

  const double distance = std::hypot(
    goal.pose.position.x - start.pose.position.x,
    goal.pose.position.y - start.pose.position.y);
  const int steps = std::max(1, static_cast<int>(distance / interpolation_resolution_));
  const double x_increment = (goal.pose.position.x - start.pose.position.x) / steps;
  const double y_increment = (goal.pose.position.y - start.pose.position.y) / steps;

  for (int i = 0; i < steps; ++i) {
    geometry_msgs::msg::PoseStamped pose;
    pose.header.stamp = node_->now();
    pose.header.frame_id = global_frame_;
    pose.pose.position.x = start.pose.position.x + x_increment * i;
    pose.pose.position.y = start.pose.position.y + y_increment * i;
    pose.pose.orientation.w = 1.0;
    global_path.poses.push_back(pose);
  }

  for (const auto & pose : global_path.poses) {
    unsigned int mx;
    unsigned int my;
    if (!costmap_->worldToMap(pose.pose.position.x, pose.pose.position.y, mx, my)) {
      throw nav2_core::PlannerException("规划路径超出代价地图范围");
    }
    if (costmap_->getCost(mx, my) == nav2_costmap_2d::LETHAL_OBSTACLE) {
      throw nav2_core::PlannerException("规划路径经过致命障碍物");
    }
  }

  auto goal_pose = goal;
  goal_pose.header.stamp = node_->now();
  goal_pose.header.frame_id = global_frame_;
  global_path.poses.push_back(goal_pose);
  return global_path;
}

}  // namespace nav2_custom_planner

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(nav2_custom_planner::CustomPlanner, nav2_core::GlobalPlanner)
