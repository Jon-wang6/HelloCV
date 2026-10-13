# ROS 2 移动机器人导航学习

学习资料：[《ROS 2机器人开发从入门到实践》](https://www.bilibili.com/video/BV1RT1BYQEAk/)  
参考代码：[FishROS ros2bookcode 第七章](https://gitee.com/fishros/ros2bookcode/tree/master/chapt7/chapt7_ws)  
实践环境：Ubuntu 22.04.5 LTS、ROS 2 Humble、Gazebo Classic、RViz2  
当前工作空间：`~/ws04`  
当前功能包：`fishbot_description`、`fishbot_navigation2`

## 一、学习目标

本阶段主要学习 ROS 2 移动机器人导航，具体目标包括：

1. 理解 SLAM 建图与 Navigation2 导航的区别；
2. 认识栅格地图及其组成；
3. 理解 Navigation2 的整体工作流程；
4. 了解地图加载、机器人定位、路径规划和运动控制；
5. 掌握 RViz2 中初始位姿和导航目标点的设置方法；
6. 能够在 Gazebo 仿真环境中进行机器人导航。

## 二、机器人自主导航

### 2.1 自主导航的基本问题

机器人实现自主导航需要解决三个问题：

1. 我在哪里：通过 AMCL 和传感器数据确定机器人在地图中的位置；
2. 我要去哪里：通过 RViz2 设置目标位置和目标朝向；
3. 我应该怎么走：通过全局规划和局部规划生成安全路径。

Navigation2 将定位、规划、控制和避障等功能组织在一起，使机器人能够从当前位置自动移动到目标位置。

### 2.2 整体运行流程

```text
加载已有地图
   ↓
设置机器人初始位置
   ↓
AMCL 完成定位
   ↓
设置导航目标点
   ↓
全局规划器生成路径
   ↓
局部规划器跟踪路径并避障
   ↓
发布 /cmd_vel 控制机器人
```

## 三、地图文件

### 3.1 地图的组成

当前地图保存在：

```text
~/ws04/src/fishbot_navigation2/maps
```

| 文件 | 作用 |
| --- | --- |
| `room.pgm` | 保存黑白栅格地图图像 |
| `room.yaml` | 保存地图分辨率、原点和障碍物阈值 |

### 3.2 栅格地图含义

| 颜色 | 含义 |
| --- | --- |
| 白色 | 可以通行的区域 |
| 黑色 | 障碍物 |
| 灰色 | 未知区域 |

当前教程地图的分辨率为 `0.05 m`，表示一个像素对应现实中的 `5 cm`。

<img src="https://raw.githubusercontent.com/Jon-wang6/HelloCV/navigation/notes/images/navigation-map.png" width="346" alt="教程中的房间栅格地图">

图：教程中的房间栅格地图

## 四、机器人定位

### 4.1 AMCL 定位

Navigation2 使用 AMCL 根据以下数据估计机器人位置：

- 已知地图；
- 激光雷达数据 `/scan`；
- 里程计数据 `/odom`；
- TF 坐标变换。

刚启动导航时，机器人并不知道自己位于地图中的什么位置，因此需要在 RViz2 中使用 `2D Pose Estimate` 设置初始位姿。

### 4.2 TF 坐标关系

导航需要保证以下 TF 链完整：

```text
map → odom → base_link → laser_link
```

| 坐标系 | 作用 |
| --- | --- |
| `map` | 全局地图坐标系 |
| `odom` | 机器人里程计坐标系 |
| `base_link` | 机器人本体坐标系 |
| `laser_link` | 激光雷达坐标系 |

如果 TF 不完整，可能出现机器人模型消失、地图错位或导航无法启动的问题。

## 五、Navigation2 主要模块

| 模块 | 主要作用 |
| --- | --- |
| Map Server | 加载已有地图 |
| AMCL | 在地图中定位机器人 |
| Planner Server | 生成全局路径 |
| Controller Server | 跟踪路径并输出速度 |
| Global Costmap | 记录全局地图中的障碍物 |
| Local Costmap | 记录机器人附近的动态障碍物 |
| BT Navigator | 使用行为树管理导航任务 |
| Behavior Server | 执行旋转、后退和等待等恢复行为 |

教程配置中主要使用 NavFn 全局规划器、DWB 局部规划器、AMCL 定位和激光雷达障碍物检测。

## 六、导航功能包

`fishbot_navigation2` 用于保存 Navigation2 的地图、参数和启动文件：

```text
fishbot_navigation2/
├── config/        Navigation2 参数
├── launch/        导航启动文件
├── maps/          地图文件
├── CMakeLists.txt
└── package.xml
```

编译功能包：

```bash
cd ~/ws04
colcon build --packages-select fishbot_navigation2
```

新终端会通过 `.bashrc` 自动加载 `~/ws04/install/setup.bash`，不需要重复执行 `source install/setup.bash`。

## 七、运行导航

### 7.1 启动 Gazebo 仿真

```bash
ros2 launch fishbot_description gazebo_sim.launch.py
```

该命令会启动 Gazebo、加载房间和机器人、启动控制器，并发布激光、里程计和 TF 数据。

### 7.2 启动 Navigation2

```bash
ros2 launch fishbot_navigation2 navigation2.launch.py
```

启动后将加载教程地图、Nav2 参数、AMCL、代价地图、规划器和 RViz2。

<img src="https://raw.githubusercontent.com/Jon-wang6/HelloCV/navigation/notes/images/navigation2-rviz-start.png" width="1200" alt="Navigation2 与 RViz2 启动结果">

图：Navigation2 与 RViz2 启动结果

## 八、RViz2 导航操作

### 8.1 设置初始位置

点击 RViz2 顶部的 `2D Pose Estimate`，在地图中拖动鼠标设置机器人的位置和朝向。AMCL 随后会根据激光雷达数据进一步修正位置。

<img src="https://raw.githubusercontent.com/Jon-wang6/HelloCV/navigation/notes/images/navigation-initial-pose.png" width="1200" alt="使用 2D Pose Estimate 设置初始位姿">

图：使用 `2D Pose Estimate` 设置初始位姿

### 8.2 设置导航目标

点击 RViz2 顶部的 `Nav2 Goal`，在地图中设置目标位置和目标朝向。Navigation2 会生成全局路径并控制机器人向目标点移动。

<img src="https://raw.githubusercontent.com/Jon-wang6/HelloCV/navigation/notes/images/navigation-goal.png" width="1200" alt="使用 Nav2 Goal 设置导航目标">

图：使用 `Nav2 Goal` 设置导航目标

### 8.3 导航过程

导航过程中可以观察全局路径、局部轨迹、代价地图、激光数据、AMCL 粒子云和机器人实时位置。

<img src="https://raw.githubusercontent.com/Jon-wang6/HelloCV/navigation/notes/images/navigation-running.png" width="1200" alt="机器人自动规划路径并前往目标点">

图：机器人自动规划路径并前往目标点

### 8.4 优化导航速度和膨胀半径（课程 7.3.6）

导航速度主要由 DWB 控制器参数决定：

| 参数 | 作用 |
| --- | --- |
| `max_vel_x` | 最大前进速度 |
| `max_vel_theta` | 最大旋转速度 |
| `acc_lim_x` | 直线加速度上限 |
| `acc_lim_theta` | 旋转加速度上限 |

速度过大容易出现转弯不稳和到点过冲，速度过小则会增加导航时间。修改后应先低速测试，再逐步增大。

`inflation_radius` 用来设置障碍物周围的膨胀范围。数值过大会让狭窄通道无法通过，过小则会使机器人离障碍物过近。当前局部和全局代价地图均设置为：

```yaml
inflation_radius: 0.35
```

### 8.5 优化机器人到点精度（课程 7.3.7）

目标点精度由 Goal Checker 参数控制：

| 参数 | 作用 |
| --- | --- |
| `xy_goal_tolerance` | 目标位置允许的距离误差 |
| `yaw_goal_tolerance` | 目标朝向允许的角度误差 |
| `stateful` | 到达位置后继续检查最终朝向 |

容差越小，到点越准确，但机器人可能在目标附近反复调整；容差越大，更容易完成导航，但停止位置误差也会增大。

## 九、通过接口使用 Navigation2

### 9.1 使用接口初始化机器人位姿（课程 7.4.1）

除了在 RViz2 中使用 `2D Pose Estimate`，程序还可以通过 Nav2 Simple Commander 创建 `PoseStamped`，设置 `map` 坐标系中的位置和朝向，再调用：

```python
navigator.setInitialPose(initial_pose)
navigator.waitUntilNav2Active()
```

这种方式适合机器人出生点固定、需要启动后自动完成初始化的程序。

### 9.2 使用 TF 获取机器人实时位置（课程 7.4.2）

机器人在地图中的实时位姿可以通过 `map → base_footprint` 查询：

```bash
ros2 run tf2_ros tf2_echo map base_footprint
```

程序中可通过 `tf2_ros.Buffer` 和 `TransformListener` 调用 `lookup_transform()`，获取平移量和旋转四元数。

### 9.3 调用接口进行单点导航（课程 7.4.3）

程序可以使用 `BasicNavigator` 调用 Nav2 的 `NavigateToPose` 动作：

```python
navigator.waitUntilNav2Active()
navigator.goToPose(goal_pose)
```

执行过程中可通过 `getFeedback()` 获取剩余距离和预计时间，通过 `isTaskComplete()` 判断任务是否结束，最后使用 `getResult()` 判断成功、取消或失败。

### 9.4 调用接口完成路点导航（课程 7.4.4）

先按顺序创建多个 `PoseStamped` 目标，再调用：

```python
navigator.followWaypoints(goal_poses)
```

Nav2 会依次前往各个路点，运行期间可读取 `current_waypoint` 查看当前目标编号。与连续点击多个 `Nav2 Goal` 不同，路点导航不会用新目标直接覆盖前一个目标。

## 十、SLAM 与导航的区别

SLAM 用于创建地图：

```bash
ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true
```

Navigation2 使用已经创建好的地图：

```bash
ros2 launch fishbot_navigation2 navigation2.launch.py
```

| SLAM 建图 | Navigation2 导航 |
| --- | --- |
| 地图未知 | 地图已知 |
| 创建并更新地图 | 加载已有地图 |
| 使用 Slam Toolbox 定位 | 使用 AMCL 定位 |
| 输出 `/map` | 读取地图并规划路径 |

## 十一、本阶段总结

本阶段完成了 FishBot 仿真环境、地图加载、AMCL 定位和 Navigation2 目标点导航，并学习了导航参数优化及 Nav2 接口调用方法。

```text
地图 + 激光 + 里程计
       ↓
     AMCL 定位
       ↓
   全局路径规划
       ↓
   局部控制与避障
       ↓
     输出 /cmd_vel
```
