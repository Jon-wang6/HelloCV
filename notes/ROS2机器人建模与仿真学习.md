# ROS 2 机器人建模与仿真学习

实践环境：Ubuntu 22.04.5 LTS + ROS 2 Humble  
工作空间：`~/ws03`  
功能包：`cpp01_simulation`

## 一、学习目标
本阶段主要学习 ROS 2 机器人建模与仿真：

1. 理解机器人建模与仿真的作用；
2. 掌握 URDF 中连杆和关节的基本概念；
3. 使用 RViz2 显示机器人模型；
4. 使用 Xacro 简化机器人模型；
5. 为模型添加碰撞、质量和惯性属性；
6. 在 Gazebo 中加载并控制机器人；
7. 了解激光雷达、IMU 和深度相机仿真；
8. 了解 `ros2_control` 的基本作用。

## 二、机器人建模与仿真概述
机器人建模是通过文件描述机器人的结构、尺寸、关节和传感器。仿真则是在计算机中模拟机器人的运动、碰撞和传感器数据。

本阶段主要使用以下工具：

| 工具 | 作用 |
| --- | --- |
| URDF | 描述机器人结构 |
| Xacro | 简化和复用 URDF |
| RViz2 | 显示机器人模型和 ROS 2 数据 |
| Gazebo | 模拟物理环境和传感器 |
| ros2_control | 管理机器人控制器和硬件接口 |


RViz2 主要用于数据可视化，本身不进行物理仿真；Gazebo 可以模拟重力、碰撞、摩擦和传感器。

**参考：**

1. [6.1 机器人建模与仿真概述](https://www.bilibili.com/video/BV1CB19Y1Ew8/)

## 三、URDF 机器人建模
### 3.1 连杆与关节
URDF 是 ROS 中常用的机器人模型描述格式，主要由连杆和关节组成。

+ `link` 表示机器人部件，例如车身、车轮和传感器；
+ `joint` 表示两个部件之间的连接关系；
+ `origin` 用于设置部件的位置和姿态；
+ `visual` 用于设置部件的外观。

常见关节类型包括：

| 类型 | 作用 |
| --- | --- |
| `fixed` | 固定连接 |
| `continuous` | 连续旋转 |
| `revolute` | 在限制范围内旋转 |
| `prismatic` | 沿指定方向移动 |


本次练习创建了机器人主体和 IMU 部件，并使用固定关节将两个部件连接起来。

<img src="images/1791634876886-8664e311-b173-4690-8db1-9c65f6977679.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u2034e95e" class="ne-image">

图：URDF 机器人主体、IMU 和固定关节代码

### 3.2 使用 RViz2 显示模型
RViz2 不会直接读取 URDF 文件，需要通过相关节点发布机器人描述、关节状态和 TF。

主要节点包括：

+ `robot_state_publisher`：发布机器人模型和 TF；
+ `joint_state_publisher`：发布关节状态；
+ `rviz2`：显示机器人模型。

运行逻辑为：

```text
读取 URDF
→ 发布机器人描述
→ 发布关节状态和 TF
→ RViz2 显示模型
```

编译并启动：

```bash
cd ~/ws03
colcon build --packages-select cpp01_simulation --symlink-install
source install/setup.bash
ros2 launch cpp01_simulation display_robot_launch.py
```

在 RViz2 中需要设置正确的 Fixed Frame，并添加 `RobotModel`。

<img src="images/1791634889836-43d9225e-d958-4bfd-9427-38626bd3064f.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u25c1213e" class="ne-image">

图：机器人模型 Launch 文件  

<img src="images/1791634999516-2c4f2daf-860d-4551-8c69-833fd9e388cb.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="ub058b97b" class="ne-image">

图：RViz2 中的机器人模型

<img src="images/1791635591144-693efd97-8470-4c13-b4c5-dd62ea8d8441.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u8e387f3c" class="ne-image">

图：launch中配置启动保存的rviz文件

### 3.3 Xacro
当机器人部件增多时，直接编写 URDF 会出现大量重复内容。Xacro 可以定义常量、进行简单计算、编写可复用的宏，并将机器人模型拆分为多个文件。

因此，简单模型可以直接使用 URDF，复杂机器人通常使用 Xacro 编写。

<img src="images/1791637378440-ddf1a8cb-0f3e-4f6f-8f06-81e4975a5aa3.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u9878e9f1" class="ne-image">

图：编写xacro文件简化urdf

<img src="images/1791637424185-c1312fc5-c48a-47e7-a0cd-bf3ec3275406.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u0fd532bc" class="ne-image">

图：运行试验

<img src="images/1791643334733-4d2a7c44-fb9a-4f69-8160-a95c4e158a36.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u9cb2f05c" class="ne-image">

图：通过调用功能更清晰地使用传感器封装

<img src="images/1791643312149-e7d1dc99-aa03-477d-a4b4-6749e5b51533.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="uc7cf9a1f" class="ne-image">

图：加入传感器后的展示

<img src="images/1791704266329-c9d7a58b-8a01-46d6-8b82-d94b6b9fbcf0.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u8dd91e7b" class="ne-image">

图：对执行器（轮子）的增加

<img src="images/1791704326832-392c248c-e5ae-4408-9af6-63cefa3ac263.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u9bc66d3a" class="ne-image">

图：添加轮子的仿真界面

<img src="images/1791705004313-a53e9b5e-81d6-48ec-8b6e-ef2ef6f30175.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="ued6db640" class="ne-image">

图：创建虚拟节点

<img src="images/1791705061246-0b2bf898-cc1b-4c2a-961c-cc0fbad67d23.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="ud9501e92" class="ne-image">

图：让机器人站在地面上

**参考：**

1. [6.2 使用 URDF 创建机器人](https://www.bilibili.com/video/BV1RT1BYQEAk/)
2. [6.2.2 在 RViz 中显示机器人](https://www.bilibili.com/video/BV1Vq2LYoECn/)
3. [6.2.3 使用 Xacro 简化 URDF](https://www.bilibili.com/video/BV1WY2WYaEwc)
4. [6.2.5 完善机器人执行器部件](https://www.bilibili.com/video/BV1s92VYTEc7/)
5. [6.2.6 贴合地面并添加虚拟部件](https://www.bilibili.com/video/BV1xU2mYBE9u/)

## 四、模型物理属性
RViz2 主要显示模型外观，而 Gazebo 还需要模型具有物理属性。

机器人部件通常包含：

| 属性 | 作用 |
| --- | --- |
| `visual` | 决定模型显示效果 |
| `collision` | 决定模型碰撞范围 |
| `inertial` | 描述质量、质心和惯性 |


<img src="images/1791705826715-02ed1733-f7bd-489d-a83b-006786c362e6.png" width="1212.7272464421176" alt="" title="" crop="0,0,1,1" id="ub22a2437" class="ne-image">

图：转动惯性矩阵

如果没有正确设置碰撞、质量和惯性，模型在 Gazebo 中可能出现抖动、下落异常或者无法正常运动。

<img src="images/1791705730457-cbf4e5c6-ca43-4d06-9903-b2deeff8476d.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="ue2849dc8" class="ne-image">

图：模型碰撞属性代码  

<img src="images/1791705635648-6e56bcae-3194-41c5-9a45-5169d3cfe217.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="uf7970474" class="ne-image">

图：添加碰撞属性效果

<img src="images/1791707893717-d793075a-103f-466d-be48-64adbce3d69a.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u1c1ccd55" class="ne-image">

图：模型质量与惯性属性代码

<img src="images/1791707849319-2807b20e-9c8d-49e8-8a15-7d36556f1787.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u07715e82" class="ne-image">

图：质量增加效果

<img src="images/1791707829175-750b5eb9-b85d-454d-8432-d75ddf1d0d31.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u73689669" class="ne-image">

图：惯性碰撞效果

**参考：**

1. [6.3.1 为机器人部件添加碰撞属性](https://www.bilibili.com/video/BV11J29YQESi/)
2. [6.3.2 为机器人部件添加质量与惯性](https://www.bilibili.com/video/BV1wJ2BYqER6/)

## 五、Gazebo 机器人仿真
Gazebo 可以模拟：

+ 重力；
+ 碰撞；
+ 摩擦；
+ 关节运动；
+ 机器人与环境的交互；
+ 雷达、IMU 和相机等传感器。

机器人加载到 Gazebo 后，可以通过两轮差速插件接收速度指令并控制左右车轮。

基本运行过程为：

```text
加载机器人模型
→ 加载 Gazebo 插件
→ 接收速度指令
→ 控制左右车轮
→ 机器人移动
→ 发布里程计和 TF
```

<img src="images/1791720643651-fead25ee-75c5-4cd2-8cd4-71c28d03e6aa.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u9efa07bd" class="ne-image">

图：Gazebo 仿真世界  

<img src="images/1791720596851-75194680-cb26-47da-877f-0bc616ff2f61.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u229a8160" class="ne-image">

图：Gazebo 中加载机器人模型 ，车车需要一个温暖的家

<img src="images/1791725761468-a394dc7b-3df5-4df3-af73-dab7ff5b33cc.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u1b620e49" class="ne-image">

图：两轮差速机器人运动结果

<img src="images/1791725770867-35634e57-f963-4b77-8a77-0c89d1a894ba.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u5a523d79" class="ne-image">

图：tf-tree节点展示

<img src="images/1791725721428-fa5ec116-6d7f-4b60-9c7a-0edb6e66e234.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u30f756e9" class="ne-image">

图：rviz仿真环境演示

**参考：**

1. [6.4.1 安装与使用 Gazebo 构建世界](https://www.bilibili.com/video/BV1oamGYxEty/)
2. [6.4.2 在 Gazebo 中加载机器人模型](https://www.bilibili.com/video/BV1ho2dYNE6T/)
3. [6.4.3 使用 Gazebo 标签扩展 URDF](https://www.bilibili.com/video/BV1k8mNYyEjW/)
4. [第六章仿真课程合集](https://www.bilibili.com/video/BV1RT1BYQEAk/)

## 六、传感器仿真
### 6.1 激光雷达
激光雷达用于测量机器人与周围障碍物的距离，数据通常发布到 `/scan`，可以用于 SLAM 建图、定位和避障。

<img src="images/1791726840156-6440bdea-f3c0-4b2c-a72a-813edbba3b8f.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u3a7785eb" class="ne-image">

图：添加激光雷达插件

<img src="images/1791726753980-6a189aba-30f7-4c63-a16b-23f0a79d5199.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u947286c4" class="ne-image">

图：激光雷达细节（雷达盲区）

<img src="images/1791726786160-e8dddf37-bb2b-47d4-a259-723f0d53f4e6.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u8d25edcb" class="ne-image">

图：激光雷达全局概览

<img src="images/1791726986433-4ae6ce96-0b49-43ca-af0d-b0f304d189ed.png" width="2327.2726768304506" alt="" title="" crop="0,0,1,1" id="u826cd87b" class="ne-image">

图：rviz的激光雷达数据查看

### 6.2 IMU
IMU 用于测量机器人的角速度和线加速度，可以辅助判断机器人的姿态和运动状态。

### 6.3 深度相机
深度相机可以同时获得图像和距离信息，常用于三维感知、避障和目标识别。

图：激光雷达仿真效果  

图：IMU 话题数据  

图：深度相机仿真效果

**参考：**

1. [6.4.7 深度相机传感器仿真](https://www.bilibili.com/video/BV1SVy8YQEzu/)
2. [第六章仿真课程合集](https://www.bilibili.com/video/BV1RT1BYQEAk/)

## 七、ros2_control
`ros2_control` 用于统一管理机器人控制器和硬件接口。

基本关系为：

```text
上层控制节点
→ 控制器
→ ros2_control
→ Gazebo 仿真硬件或真实硬件
```

常见控制器包括：

+ 关节状态发布控制器；
+ 位置控制器；
+ 速度控制器；
+ 两轮差速控制器。

使用 `ros2_control` 后，可以减少仿真机器人和真实机器人之间的控制代码差异。

图：ros2_control 配置  

图：控制器运行结果

**参考：**

1. [6.5.2 使用 Gazebo 接入 ros2_control](https://www.bilibili.com/video/BV1VayHYqEUe/)
2. [第六章仿真课程合集](https://www.bilibili.com/video/BV1RT1BYQEAk/)

## 八、我的实现代码与运行

本次实践代码保存在 [`cpp01_simulation`](../src/cpp01_simulation) 功能包中，主要文件如下：

| 文件 | 作用 |
| --- | --- |
| [`robot_urdf.xacro`](../src/cpp01_simulation/urdf/robot01/robot_urdf.xacro) | 组合车体、轮子、万向轮、传感器和 Gazebo 插件 |
| [`base_urdf.xacro`](../src/cpp01_simulation/urdf/robot01/base_urdf.xacro) | 定义机器人底盘 |
| [`wheel_urdf.xacro`](../src/cpp01_simulation/urdf/robot01/actuator/wheel_urdf.xacro) | 定义左右驱动轮与连续关节 |
| [`caster_urdf.xacro`](../src/cpp01_simulation/urdf/robot01/actuator/caster_urdf.xacro) | 定义前后万向轮 |
| [`gazebo_control_plugin.xacro`](../src/cpp01_simulation/urdf/robot01/plugins/gazebo_control_plugin.xacro) | 配置两轮差速控制、里程计和 TF |
| [`gazebo_sensor_plugin.xacro`](../src/cpp01_simulation/urdf/robot01/plugins/gazebo_sensor_plugin.xacro) | 配置激光雷达与 `/scan` 话题 |
| [`gazebo_sim_launch.py`](../src/cpp01_simulation/launch/gazebo_sim_launch.py) | 启动 Gazebo、加载世界并生成机器人 |
| [`custom_room.world`](../src/cpp01_simulation/world/custom_room.world) | 自建 Gazebo 仿真场景 |

编译并启动 Gazebo：

```bash
cd ~/ws03
colcon build --packages-select cpp01_simulation --symlink-install
source install/setup.bash
ros2 launch cpp01_simulation gazebo_sim_launch.py
```

另开终端发布速度指令：

```bash
ros2 topic pub --rate 10 /cmd_vel geometry_msgs/msg/Twist \
  "{linear: {x: 0.2}, angular: {z: 0.0}}"
```

常用数据话题：

| 话题 | 内容 |
| --- | --- |
| `/cmd_vel` | 机器人线速度和角速度指令 |
| `/odom` | 两轮差速插件发布的里程计 |
| `/tf` | 坐标变换关系 |
| `/scan` | 激光雷达扫描数据 |

查看 TF 树：

```bash
ros2 run rqt_tf_tree rqt_tf_tree
```

## 九、总结

通过本阶段学习，我完成了机器人底盘、驱动轮、万向轮和传感器的 Xacro 建模，并补充了碰撞、质量与惯性属性。机器人能够加载到自建 Gazebo 世界中，通过 `/cmd_vel` 接收速度指令，由两轮差速插件发布 `/odom` 和 TF，同时通过激光雷达插件发布 `/scan` 数据。

目前已完成 URDF/Xacro 建模、RViz2 显示、Gazebo 世界加载、两轮差速控制和激光雷达仿真；`ros2_control`、IMU 与深度相机仿真将作为后续学习内容继续完善。
