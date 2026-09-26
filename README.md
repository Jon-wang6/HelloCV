# HelloCV

一个基于 ROS 2 Humble 的 C++ 学习与示例工作区，涵盖话题通信、服务通信、动作通信、参数以及自定义接口。

## 工作区分支

仓库按本机 ROS 2 工作区拆分为两个独立分支：

| 分支 | 对应目录 | 主要内容 |
| --- | --- | --- |
| [`ws00`](https://github.com/Jon-wang6/HelloCV/tree/ws00) | `~/ws00` | ROS 2 C++ Hello World 与 VS Code 入门示例 |
| [`ws01`](https://github.com/Jon-wang6/HelloCV/tree/ws01) | `~/ws01` | Topic、Service、Action、Parameter 与自定义接口示例 |

按工作区克隆：

```bash
git clone --branch ws00 --single-branch https://github.com/Jon-wang6/HelloCV.git ws00
git clone --branch ws01 --single-branch https://github.com/Jon-wang6/HelloCV.git ws01
```

`main` 保留原有项目历史；后续同步对应本地工作区时，请更新同名分支。

## 项目内容

| 包名 | 内容 |
| --- | --- |
| `base_demo` | 自定义消息 `Student.msg`、服务 `Addints.srv` 和动作 `Progress.action` |
| `cpp01_topic` | Topic 发布者与订阅者示例 |
| `cpp02_service` | Service 服务端与客户端示例 |
| `cpp03_action` | Action 服务端与客户端示例 |
| `cpp04_param` | ROS 2 参数服务与客户端示例 |

## 环境要求

- Ubuntu 22.04
- ROS 2 Humble
- `colcon`
- CMake 与支持 C++17 的编译器

## 构建

```bash
source /opt/ros/humble/setup.bash
cd HelloCV
colcon build
source install/setup.bash
```

如需只构建源码包，可以先清理已有构建产物：

```bash
rm -rf build install log
colcon build
source install/setup.bash
```

## 自动加载 ROS 2 环境

如果工作区位于 `~/ws01`，可以将以下内容加入 `~/.bashrc`，让新终端自动加载 ROS 2 Humble 和本工作区：

```bash
source /opt/ros/humble/setup.bash
source ~/ws01/install/setup.bash
```

修改后，可让当前终端立即生效：

```bash
source ~/.bashrc
```

如果工作区位于其他目录，请相应修改第二行路径。首次构建前 `install/setup.bash` 尚不存在，需要先执行一次 `colcon build`。

## 运行示例

以下命令分别在独立终端中执行；每个终端都需要先加载环境：

```bash
source /opt/ros/humble/setup.bash
source install/setup.bash
```

### Topic

```bash
ros2 run cpp01_topic demo01_talker
ros2 run cpp01_topic demo02_listener
```

### Service

```bash
ros2 run cpp02_service demo01_server
ros2 run cpp02_service demo02_client
```

### Action

```bash
ros2 run cpp03_action demo01_server
ros2 run cpp03_action demo02_client
```

### Parameter

```bash
ros2 run cpp04_param demo00_param
ros2 run cpp04_param demo01_sever
ros2 run cpp04_param demo02_client
```

## 目录说明

```text
.
├── src/       # ROS 2 源码包
├── build/     # colcon 构建产物
├── install/   # 安装空间
└── log/       # 构建日志
```

仓库保留了上传时工作区中的 `build`、`install` 和 `log` 内容，便于还原当时状态。跨机器使用时，建议清理这些目录后重新构建。
