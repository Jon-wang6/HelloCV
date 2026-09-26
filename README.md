# HelloCV · ws00

本分支保存 `~/ws00` 的完整快照，主要用于 ROS 2 Humble C++ 节点与 VS Code 开发环境的入门练习。

分支导航：[main](https://github.com/Jon-wang6/HelloCV/tree/main) · **ws00** · [ws01](https://github.com/Jon-wang6/HelloCV/tree/ws01)

## 获取本分支

```bash
git clone --branch ws00 --single-branch https://github.com/Jon-wang6/HelloCV.git ws00
cd ws00
```

## 项目内容

| 包名 | 内容 | 可执行程序 |
| --- | --- | --- |
| `hello_cpp` | 最小 ROS 2 C++ Hello World 节点 | `hello_node` |
| `hellovscode_cpp` | ROS 2 与 VS Code 开发示例 | `hellovscode` |

## 环境要求

- Ubuntu 22.04
- ROS 2 Humble
- `colcon`
- CMake 与支持 C++17 的编译器

## 构建

```bash
source /opt/ros/humble/setup.bash
cd ws00
colcon build
source install/setup.bash
```

如果需要跨机器重新构建，建议先清理上传时保留的构建产物：

```bash
rm -rf build install log
colcon build
source install/setup.bash
```

## 运行示例

```bash
ros2 run hello_cpp hello_node
ros2 run hellovscode_cpp hellovscode
```

## 自动加载环境

若工作区位于 `~/ws00`，可将以下内容加入 `~/.bashrc`：

```bash
source /opt/ros/humble/setup.bash
source ~/ws00/install/setup.bash
```

随后执行 `source ~/.bashrc`，或重新打开终端。首次构建前 `install/setup.bash` 尚不存在，需要先运行一次 `colcon build`。

## 目录说明

```text
.
├── src/                # ROS 2 源码包
├── build/              # colcon 构建产物
├── install/            # 安装空间
├── log/                # 构建日志
└── .pre_ws00_rename/   # 重命名前的工作区快照
```

本分支按上传时状态保留了构建产物、日志和隐藏备份目录。
