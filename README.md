# HelloCV · 机器人建模与仿真

本分支保存 `~/ws03` 中的 ROS 2 机器人建模与仿真源码，主要用于 URDF、Xacro、RViz2 和 Gazebo 入门练习。

分支导航：[main](https://github.com/Jon-wang6/HelloCV/tree/main) · [ros2-basics](https://github.com/Jon-wang6/HelloCV/tree/ros2-basics) · [ros2-communication](https://github.com/Jon-wang6/HelloCV/tree/ros2-communication) · [launch-rosbag2](https://github.com/Jon-wang6/HelloCV/tree/launch-rosbag2) · **simulation**

## 获取本分支

```bash
git clone --branch simulation --single-branch https://github.com/Jon-wang6/HelloCV.git ws03
cd ws03
```

## 项目内容

| 功能包 | 主要内容 |
| --- | --- |
| `cpp01_simulation` | URDF/Xacro 机器人模型、RViz2 配置与 Launch 启动文件 |

## 环境要求

- Ubuntu 22.04
- ROS 2 Humble
- `colcon`
- RViz2
- `robot_state_publisher`
- `joint_state_publisher`
- `xacro`

## 构建与运行

```bash
source /opt/ros/humble/setup.bash
cd ~/ws03
colcon build --packages-select cpp01_simulation --symlink-install
source install/setup.bash
ros2 launch cpp01_simulation display_robot_launch.py
```

运行 Xacro 模型：

```bash
ros2 launch cpp01_simulation display_robot_xacro_launch.py
```

## 目录说明

```text
.
├── .vscode/                         # VS Code 配置
├── src/cpp01_simulation/
│   ├── config/                      # RViz2 配置
│   ├── launch/                      # 模型启动文件
│   ├── urdf/                        # URDF、Xacro 与结构图
│   ├── CMakeLists.txt
│   └── package.xml
└── notes/                           # 学习笔记及本地图片
```

`build`、`install` 和 `log` 是可通过 `colcon build` 重新生成的本机构建产物，因此未上传到本分支。

## 学习笔记

- [ROS 2 机器人建模与仿真学习](notes/ROS2机器人建模与仿真学习.md)
