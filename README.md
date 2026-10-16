# HelloCV · ROS 2 移动机器人导航

本分支保存 `~/ws04` 中的 ROS 2 移动机器人导航源码与学习笔记，主要用于地图加载、AMCL 定位、Nav2 路径规划和 Gazebo 仿真导航。

分支导航：[main](https://github.com/Jon-wang6/HelloCV/tree/main) · [ros2-basics](https://github.com/Jon-wang6/HelloCV/tree/ros2-basics) · [ros2-communication](https://github.com/Jon-wang6/HelloCV/tree/ros2-communication) · [launch-rosbag2](https://github.com/Jon-wang6/HelloCV/tree/launch-rosbag2) · [simulation](https://github.com/Jon-wang6/HelloCV/tree/simulation) · **navigation** · [navigation-advanced](https://github.com/Jon-wang6/HelloCV/tree/navigation-advanced)

## 获取本分支

```bash
git clone --branch navigation --single-branch https://github.com/Jon-wang6/HelloCV.git ws04
cd ws04
```

## 项目内容

| 功能包 | 主要内容 |
| --- | --- |
| `fishbot_description` | FishBot 模型、Gazebo 世界、传感器与底盘控制 |
| `fishbot_navigation2` | 地图、Nav2 参数与导航启动文件 |

## 环境要求

- Ubuntu 22.04
- ROS 2 Humble
- Gazebo Classic 11
- RViz2
- Navigation2
- AMCL
- `colcon`

## 构建

```bash
source /opt/ros/humble/setup.bash
cd ~/ws04
colcon build --packages-select fishbot_description fishbot_navigation2 --symlink-install
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

在 RViz2 中先使用 `2D Pose Estimate` 设置初始位姿，再使用 `Nav2 Goal` 设置导航目标。

## 目录说明

```text
.
├── src/
│   ├── fishbot_description/         # 机器人模型与 Gazebo 仿真
│   └── fishbot_navigation2/         # 地图、参数及导航启动文件
└── notes/                            # 导航学习笔记
```

`build`、`install` 和 `log` 是可重新生成的本机构建产物，因此未上传。

## 学习笔记

- [ROS 2 移动机器人导航学习](notes/ROS2移动机器人导航学习.md)
- [ROS 2 移动机器人导航学习（语雀导入版）](notes/ROS2移动机器人导航学习_语雀导入版.md)
