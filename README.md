# HelloCV

ROS 2 Humble 学习工作区。项目内容按学习主题分别保存在基础、通信、Launch、仿真、导航和导航进阶分支；`main` 分支作为仓库导航首页。

## 分支导航

点击分支名称即可进入对应工作区：

| 分支 | 对应目录 | 主要内容 |
| --- | --- | --- |
| [`ros2-basics`](https://github.com/Jon-wang6/HelloCV/tree/ros2-basics) | `~/ws00` | ROS 2/C++ 入门、Hello World 与 VS Code 开发环境 |
| [`ros2-communication`](https://github.com/Jon-wang6/HelloCV/tree/ros2-communication) | `~/ws01` | Topic、Service、Action、Parameter、自定义接口与综合练习 |
| [`launch-rosbag2`](https://github.com/Jon-wang6/HelloCV/tree/launch-rosbag2) | `~/ws02` | Python/XML/YAML Launch 与 rosbag2 C++ 读写示例 |
| [`simulation`](https://github.com/Jon-wang6/HelloCV/tree/simulation) | `~/ws03` | URDF、Xacro、RViz2 与 Gazebo 机器人建模仿真 |
| [`navigation`](https://github.com/Jon-wang6/HelloCV/tree/navigation) | `~/ws04` | SLAM、地图、AMCL 定位与 Navigation2 基础导航 |
| [`navigation-advanced`](https://github.com/Jon-wang6/HelloCV/tree/navigation-advanced) | `~/ws05` | pluginlib、自定义 Nav2 规划器、控制器与自动巡检 |

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

克隆移动机器人导航分支到 `ws04`：

```bash
git clone --branch navigation --single-branch https://github.com/Jon-wang6/HelloCV.git ws04
```

克隆导航进阶与插件开发分支到 `ws05`：

```bash
git clone --branch navigation-advanced --single-branch https://github.com/Jon-wang6/HelloCV.git ws05
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

### 移动机器人导航（`navigation`）

- [ROS 2 移动机器人导航学习](https://github.com/Jon-wang6/HelloCV/blob/navigation/notes/ROS2移动机器人导航学习.md)

### 导航进阶与插件开发（`navigation-advanced`）

- [ROS 2 导航进阶与插件开发学习](https://github.com/Jon-wang6/HelloCV/blob/navigation-advanced/notes/ROS2导航进阶与插件开发学习.md)

## 工程开发基础与实践

### Git 学习与实践

- [Git 基础学习与四则运算实践](https://gitee.com/Jon-wang6/git_training)

  使用单文件 C++ 计算器练习 Git 提交、分支、合并、暂存和远程仓库操作。

### CMake 学习与实践

- [CMake 基础学习与单位转换器实践](https://gitee.com/Jon-wang6/UnitConverter)

  使用 CMake 管理主程序和单位转换库，练习源码外构建、库链接与多级项目结构。

### LLM 学习与实践

- [LLM 石头剪刀布决策网关](https://gitee.com/Jon-wang6/LLM_training)

  接入 DeepSeek API，完成 JSON 容错、结果校验、请求重试和本地兜底，并通过 93 项自动测试。
