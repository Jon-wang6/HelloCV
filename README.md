# HelloCV · ROS 2 导航进阶与插件开发

本分支保存 `~/ws05` 的 ROS 2 Navigation2 进阶源码与学习笔记，内容包括 pluginlib、自定义全局规划器、自定义控制器、导航应用以及自动巡检示例。

分支导航：[main](https://github.com/Jon-wang6/HelloCV/tree/main) · [ros2-basics](https://github.com/Jon-wang6/HelloCV/tree/ros2-basics) · [ros2-communication](https://github.com/Jon-wang6/HelloCV/tree/ros2-communication) · [launch-rosbag2](https://github.com/Jon-wang6/HelloCV/tree/launch-rosbag2) · [simulation](https://github.com/Jon-wang6/HelloCV/tree/simulation) · [navigation](https://github.com/Jon-wang6/HelloCV/tree/navigation) · **navigation-advanced**

## 获取本分支

```bash
git clone --branch navigation-advanced --single-branch https://github.com/Jon-wang6/HelloCV.git ws05
cd ws05
```

## 项目内容

| 功能包 | 主要内容 |
| --- | --- |
| `motion_control_system` | pluginlib 基础接口、旋转控制插件和加载测试 |
| `nav2_custom_planner` | Navigation2 自定义全局规划器 |
| `nav2_custom_controller` | Navigation2 自定义路径跟踪控制器 |
| `fishbot_description` | FishBot 模型、Gazebo 世界和底盘控制 |
| `fishbot_navigation2` | 地图、Nav2 参数、稳定版 RViz2 配置和启动文件 |
| `fishbot_application` | 初始化位姿、获取位姿、单点和多点导航示例 |
| `autopatrol_interfaces` | 自动巡检服务接口 |
| `autopatrol_robot` | 自动巡检节点、语音模块和启动配置 |

## 环境要求

- Ubuntu 22.04
- ROS 2 Humble
- Gazebo Classic 11
- Navigation2、AMCL、RViz2
- `pluginlib`、`colcon`

## 构建

```bash
source /opt/ros/humble/setup.bash
colcon build --symlink-install
source install/setup.bash
```

## 运行

先启动 Gazebo 仿真：

```bash
ros2 launch fishbot_description gazebo_sim.launch.py
```

再开一个终端启动 Navigation2：

```bash
ros2 launch fishbot_navigation2 navigation2.launch.py
```

当前 Gazebo 配置会在地图原点初始化 AMCL，也可以在 RViz2 中使用 `2D Pose Estimate` 重新校准，再使用 `Nav2 Goal` 设置导航目标。

## 插件测试

```bash
ros2 run motion_control_system test_plugin \
  motion_control_system/SpinMotionController
```

## 目录说明

```text
.
├── src/       # 第八章功能包源码
└── notes/     # 导航与插件开发笔记
```

`build`、`install` 和 `log` 是可重新生成的本机构建产物，因此未上传。

## 学习笔记

- [ROS 2 移动机器人导航学习](notes/ROS2移动机器人导航学习.md)
- [ROS 2 导航进阶与插件开发学习](notes/ROS2导航进阶与插件开发学习.md)
