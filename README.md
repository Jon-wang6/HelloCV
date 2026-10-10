# HelloCV

ROS 2 Humble C++ 学习工作区。项目内容按学习主题分别保存在 `ros2-basics`、`ros2-communication`、`launch-rosbag2` 和 `simulation` 分支；`main` 分支仅作为仓库导航首页。

## 分支导航

点击分支名称即可进入对应工作区：

| 分支 | 对应目录 | 主要内容 |
| --- | --- | --- |
| [`ros2-basics`](https://github.com/Jon-wang6/HelloCV/tree/ros2-basics) | `~/ws00` | ROS 2/C++ 入门、Hello World 与 VS Code 开发环境 |
| [`ros2-communication`](https://github.com/Jon-wang6/HelloCV/tree/ros2-communication) | `~/ws01` | Topic、Service、Action、Parameter、自定义接口与综合练习 |
| [`launch-rosbag2`](https://github.com/Jon-wang6/HelloCV/tree/launch-rosbag2) | `~/ws02` | Python/XML/YAML Launch 与 rosbag2 C++ 读写示例 |
| [`simulation`](https://github.com/Jon-wang6/HelloCV/tree/simulation) | `~/ws03` | URDF、Xacro、RViz2 与 Gazebo 机器人建模仿真 |

## 克隆工作区

克隆 ROS 2 基础分支到 `ws00`：

```bash
git clone --branch ros2-basics --single-branch https://github.com/Jon-wang6/HelloCV.git ws00
```

克隆 ROS 2 通信机制分支到 `ws01`：

```bash
git clone --branch ros2-communication --single-branch https://github.com/Jon-wang6/HelloCV.git ws01
```

克隆 Launch 与 rosbag2 分支到 `ws02`：

```bash
git clone --branch launch-rosbag2 --single-branch https://github.com/Jon-wang6/HelloCV.git ws02
```

克隆机器人建模与仿真分支到 `ws03`：

```bash
git clone --branch simulation --single-branch https://github.com/Jon-wang6/HelloCV.git ws03
```

具体的环境配置、构建和运行方法请查看对应分支中的 README。

## 学习笔记

### 前置环境

- [Linux 下载与学习](https://github.com/Jon-wang6/HelloCV/blob/ros2-basics/notes/Linux下载与学习.md)
- [Vim、tmux、SSH 与 PM2 开发工具学习](https://github.com/Jon-wang6/HelloCV/blob/ros2-basics/notes/Vim、tmux、SSH与PM2开发工具学习.md)

### ROS 2 基础（`ros2-basics`）

- [ROS 2 概述、环境搭建与学习](https://github.com/Jon-wang6/HelloCV/blob/ros2-basics/notes/ROS2概述、环境搭建与学习.md)
- [ROS 2中常用的C++知识补充](https://github.com/Jon-wang6/HelloCV/blob/ros2-basics/notes/ROS2中常用的C%2B%2B知识补充.md)

### ROS 2 通信机制（`ros2-communication`）

- [ROS 2 通信机制核心学习](https://github.com/Jon-wang6/HelloCV/blob/ros2-communication/notes/ROS2通信机制核心学习.md)
- [通信机制补充学习](https://github.com/Jon-wang6/HelloCV/blob/ros2-communication/notes/ROS2通信机制补充学习.md)

### Launch 与 rosbag2（`launch-rosbag2`）

- [ROS 2 Launch 与 rosbag2 学习](https://github.com/Jon-wang6/HelloCV/blob/launch-rosbag2/notes/ROS2%20Launch与rosbag2学习.md)

### 机器人建模与仿真（`simulation`）

- [ROS 2 机器人建模与仿真学习](https://github.com/Jon-wang6/HelloCV/blob/simulation/notes/ROS2机器人建模与仿真学习.md)

## Git 学习与实践

- [Git 基础学习与四则运算实践](https://gitee.com/Jon-wang6/git_training)

  使用单文件 C++ 计算器练习 Git 提交、分支、合并、暂存和远程仓库操作。
