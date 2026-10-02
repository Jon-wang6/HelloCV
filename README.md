# HelloCV · ws02

本分支保存 `~/ws02` 的完整快照，主要用于 ROS 2 Humble Launch 与 rosbag2 学习。

分支导航：[main](https://github.com/Jon-wang6/HelloCV/tree/main) · [ws00](https://github.com/Jon-wang6/HelloCV/tree/ws00) · [ws01](https://github.com/Jon-wang6/HelloCV/tree/ws01) · **ws02**

## 获取本分支

```bash
git clone --branch ws02 --single-branch https://github.com/Jon-wang6/HelloCV.git ws02
cd ws02
```

## 项目内容

`cpp01_launch` 包包含：

- Python Launch 示例：节点、命令、参数、Include、Group 与事件处理
- XML Launch 示例：节点、命令、参数、Include 与 Group
- YAML Launch 示例：节点、命令、参数、Include 与 Group
- 参数配置文件 `config/t2.yaml`

`cpp02_rosbag` 包包含：

- 使用 `rosbag2_cpp` 写入消息的 `demo01_writer`
- 使用 `rosbag2_cpp` 读取消息的 `demo02_reader`
- 示例录制数据 `my_bag/`

## 环境要求

- Ubuntu 22.04
- ROS 2 Humble
- `colcon`
- CMake

## 构建

```bash
source /opt/ros/humble/setup.bash
cd ws02
colcon build
source install/setup.bash
```

跨机器使用时，建议先清理上传时保留的构建产物：

```bash
rm -rf build install log
colcon build
source install/setup.bash
```

## 运行示例

```bash
ros2 launch cpp01_launch py01_helloworld_launch.py
ros2 launch cpp01_launch xml01_helloworld_launch.xml
ros2 launch cpp01_launch yaml01_helloworld_launch.yaml
```

运行 rosbag2 C++ 示例：

```bash
ros2 run cpp02_rosbag demo01_writer
ros2 run cpp02_rosbag demo02_reader
```

查看或回放示例数据：

```bash
ros2 bag info my_bag
ros2 bag play my_bag
```

## 自动加载环境

若工作区位于 `~/ws02`，可将以下内容加入 `~/.bashrc`：

```bash
source /opt/ros/humble/setup.bash
source ~/ws02/install/setup.bash
```

首次构建前 `install/setup.bash` 尚不存在，需要先运行一次 `colcon build`。

## 目录说明

```text
.
├── src/       # ROS 2 源码包
├── build/     # colcon 构建产物
├── install/   # 安装空间
├── log/       # 构建日志
└── my_bag/    # rosbag2 示例录制数据
```

本分支按上传时状态保留了源码、构建产物、安装文件和日志。
