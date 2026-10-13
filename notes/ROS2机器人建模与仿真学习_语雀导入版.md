# ROS 2 机器人建模与仿真学习

实践环境：Ubuntu 22.04.5 LTS + ROS 2 Humble  
工作空间：`~/ws03`  
功能包：`cpp01_simulation`

学习资料：

1. [《ROS 2机器人开发从入门到实践》第六章](https://www.bilibili.com/video/BV1RT1BYQEAk/)
2. [FishROS 课程配套代码](https://gitee.com/fishros/ros2bookcode/tree/master/chapt6/chapt6_ws/src/fishbot_description)

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

本阶段各部分之间的关系为：

```text
URDF/Xacro 描述机器人结构
        ↓
robot_state_publisher 发布模型与 TF
        ↓
RViz2 检查模型和 ROS 2 数据
        ↓
Gazebo 计算物理运动与传感器数据
        ↓
ros2_control 接收控制指令并驱动车轮
```

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


每个 `link` 都拥有自己的坐标系，`joint` 用来描述父连杆与子连杆之间的关系。其中：

+ `parent` 和 `child` 决定连接方向；
+ `origin xyz` 决定相对位置；
+ `origin rpy` 决定绕 X、Y、Z 轴的旋转；
+ `axis` 决定可动关节的运动方向。

机器人模型必须形成一棵完整的树，不能出现没有连接的孤立部件，也不能形成坐标关系闭环。


本次练习创建了机器人主体和 IMU 部件，并使用固定关节将两个部件连接起来。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791634876886-8664e311-b173-4690-8db1-9c65f6977679.png)

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

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791634889836-43d9225e-d958-4bfd-9427-38626bd3064f.png)

图：机器人模型 Launch 文件  

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791634999516-2c4f2daf-860d-4551-8c69-833fd9e388cb.png)

图：RViz2 中的机器人模型

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791635591144-693efd97-8470-4c13-b4c5-dd62ea8d8441.png)

图：launch中配置启动保存的rviz文件

### 3.3 Xacro
当机器人部件增多时，直接编写 URDF 会出现大量重复内容。Xacro 可以定义常量、进行简单计算、编写可复用的宏，并将机器人模型拆分为多个文件。

因此，简单模型可以直接使用 URDF，复杂机器人通常使用 Xacro 编写。

本项目将机器人拆分为车体、车轮、万向轮、激光雷达、IMU、相机和 Gazebo 插件等文件。各部件先定义为 Xacro 宏，最后由 `robot_urdf.xacro` 统一组合。这样修改某个传感器或执行器时，不需要改动整个机器人文件。

Xacro 的主要作用包括：

+ 使用参数调整部件尺寸和安装位置；
+ 使用表达式完成尺寸与惯性计算；
+ 使用宏复用左右轮和前后万向轮；
+ 使用 `include` 将大型模型拆分为多个文件；
+ 使用 `find` 获取功能包安装后的资源路径。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791637378440-ddf1a8cb-0f3e-4f6f-8f06-81e4975a5aa3.png)

图：编写xacro文件简化urdf

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791637424185-c1312fc5-c48a-47e7-a0cd-bf3ec3275406.png)

图：运行试验

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791643334733-4d2a7c44-fb9a-4f69-8160-a95c4e158a36.png)

图：通过调用功能更清晰地使用传感器封装

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791643312149-e7d1dc99-aa03-477d-a4b4-6749e5b51533.png)

图：加入传感器后的展示

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791704266329-c9d7a58b-8a01-46d6-8b82-d94b6b9fbcf0.png)

图：对执行器（轮子）的增加

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791704326832-392c248c-e5ae-4408-9af6-63cefa3ac263.png)

图：添加轮子的仿真界面

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791705004313-a53e9b5e-81d6-48ec-8b6e-ef2ef6f30175.png)

图：创建虚拟节点

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791705061246-0b2bf898-cc1b-4c2a-961c-cc0fbad67d23.png)

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


![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791705826715-02ed1733-f7bd-489d-a83b-006786c362e6.png)

图：转动惯性矩阵

如果没有正确设置碰撞、质量和惯性，模型在 Gazebo 中可能出现抖动、下落异常或者无法正常运动。

惯性矩阵描述物体抵抗转动的能力。规则物体可以根据质量和尺寸计算惯性：

| 形状 | 主要参数 | 计算特点 |
| --- | --- | --- |
| 长方体 | 质量、长、宽、高 | 三个方向的惯性由另外两个方向的尺寸决定 |
| 圆柱体 | 质量、半径、高度 | 圆柱轴方向与径向的惯性不同 |
| 球体 | 质量、半径 | 三个方向的惯性相同 |

本项目使用 `sphere_inertia.xacro` 集中保存常见形状的惯性宏，其他部件只需要传入质量和尺寸，避免重复书写公式。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791705730457-cbf4e5c6-ca43-4d06-9903-b2deeff8476d.png)

图：模型碰撞属性代码  

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791705635648-6e56bcae-3194-41c5-9a45-5169d3cfe217.png)

图：添加碰撞属性效果

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791707893717-d793075a-103f-466d-be48-64adbce3d69a.png)

图：模型质量与惯性属性代码

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791707849319-2807b20e-9c8d-49e8-8a15-7d36556f1787.png)

图：质量增加效果

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791707829175-750b5eb9-b85d-454d-8432-d75ddf1d0d31.png)

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

当前仿真场景由 `custom_room.world` 和 `world/room` 中的房间模型组成。World 文件负责设置物理引擎、光照、地面和场景模型，URDF/Xacro 负责机器人本身，两者在 Launch 中组合。

基本运行过程为：

```text
加载机器人模型
→ 加载 Gazebo 插件
→ 接收速度指令
→ 控制左右车轮
→ 机器人移动
→ 发布里程计和 TF
```

`gazebo_sim_launch.py` 的启动顺序为：

1. 读取并展开机器人 Xacro；
2. 启动 `robot_state_publisher`；
3. 启动 Gazebo 并加载自定义世界；
4. 等待世界加载完成后生成机器人；
5. 激活关节状态广播器；
6. 激活两轮差速控制器。

按顺序启动可以避免 Gazebo 尚未完成初始化时生成机器人，从而减少 `/spawn_entity` 超时和控制器加载失败。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791720643651-fead25ee-75c5-4cd2-8cd4-71c28d03e6aa.png)

图：Gazebo 仿真世界  

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791720596851-75194680-cb26-47da-877f-0bc616ff2f61.png)

图：Gazebo 中加载机器人模型 ，车车需要一个温暖的家

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791725761468-a394dc7b-3df5-4df3-af73-dab7ff5b33cc.png)

图：两轮差速机器人运动结果

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791725770867-35634e57-f963-4b77-8a77-0c89d1a894ba.png)

图：tf-tree节点展示

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791725721428-fa5ec116-6d7f-4b60-9c7a-0edb6e66e234.png)

图：rviz仿真环境演示

**参考：**

1. [6.4.1 安装与使用 Gazebo 构建世界](https://www.bilibili.com/video/BV1oamGYxEty/)
2. [6.4.2 在 Gazebo 中加载机器人模型](https://www.bilibili.com/video/BV1ho2dYNE6T/)
3. [6.4.3 使用 Gazebo 标签扩展 URDF](https://www.bilibili.com/video/BV1k8mNYyEjW/)
4. [第六章仿真课程合集](https://www.bilibili.com/video/BV1RT1BYQEAk/)

## 六、传感器仿真
### 6.1 激光雷达
激光雷达用于测量机器人与周围障碍物的距离，数据通常发布到 `/scan`，可以用于 SLAM 建图、定位和避障。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791726840156-6440bdea-f3c0-4b2c-a72a-813edbba3b8f.png)

图：添加激光雷达插件

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791726753980-6a189aba-30f7-4c63-a16b-23f0a79d5199.png)

图：激光雷达细节（雷达盲区）

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791726786160-e8dddf37-bb2b-47d4-a259-723f0d53f4e6.png)

图：激光雷达全局概览

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791726986433-4ae6ce96-0b49-43ca-af0d-b0f304d189ed.png)

图：rviz的激光雷达数据查看

### 6.2 IMU
IMU 用于测量机器人的角速度和线加速度，可以辅助判断机器人的姿态和运动状态。

### 6.3 深度相机
深度相机可以同时获得图像和距离信息，常用于三维感知、避障和目标识别。

当前仿真传感器及主要话题如下：

| 传感器 | 主要话题 | 数据作用 |
| --- | --- | --- |
| 激光雷达 | `/scan` | 二维距离扫描，用于建图、定位和避障 |
| IMU | `/imu` | 角速度、线加速度和姿态信息 |
| 深度相机 | `/camera_sensor/depth/image_raw` | 每个像素对应的深度值 |
| 深度相机 | `/camera_sensor/points` | 三维点云数据 |

Gazebo 插件负责计算仿真数据并发布 ROS 2 话题，RViz2 只负责订阅和显示。话题存在但没有数据时，应先检查 Gazebo 是否暂停，以及传感器插件是否成功加载。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791794728618-ee89ba1b-8ecd-4e6a-af07-8109e5a1daf0.png)

图：深度相机仿真效果

**参考：**

1. [6.4.7 深度相机传感器仿真](https://www.bilibili.com/video/BV1SVy8YQEzu/)
2. [第六章仿真课程合集](https://www.bilibili.com/video/BV1RT1BYQEAk/)

## 七、ros2_control
`ros2_control` 用于统一管理控制器和机器人硬件接口。上层节点只需要发送标准控制指令，不必直接操作 Gazebo 关节；以后换成真实电机时，也可以尽量保留相同的控制方式。

基本关系为：

```text
上层节点发布 /cmd_vel
→ 差速控制器计算左右轮速度
→ controller_manager 管理控制器
→ gazebo_ros2_control 执行关节命令
→ Gazebo 中的左右轮转动
→ 发布 /joint_states、/odom 和 TF
```

### 7.1 硬件接口

每个可控制关节通常包含两类接口：

| 接口 | 作用 | 本项目中的例子 |
| --- | --- | --- |
| `command_interface` | 控制器向关节写入命令 | 左右轮的速度或力矩命令 |
| `state_interface` | 从关节读取当前状态 | 位置、速度和力矩 |

`robot01_ros2_control.xacro` 声明左右轮关节及其接口，`gazebo_ros2_control` 插件把这些接口连接到 Gazebo 模型。

### 7.2 控制器的作用

本项目的 YAML 中配置了三个控制器：

| 控制器 | 作用 | 当前是否自动激活 |
| --- | --- | --- |
| `robot01_joint_state_broadcaster` | 读取左右轮状态并发布 `/joint_states` | 是 |
| `robot01_diff_drive_controller` | 把底盘线速度、角速度换算为左右轮速度 | 是 |
| `robot01_effort_controller` | 直接向左右轮发送力矩，供基础控制实验使用 | 否 |

差速控制器和力矩控制器都会占用左右轮关节，因此通常不要同时激活。日常移动机器人时使用差速控制器；学习关节力矩控制时，再停用差速控制器并切换到力矩控制器。

### 7.3 两轮差速原理

两侧轮速相同，机器人直行；两侧轮速不同，机器人转弯；两侧轮速大小相等、方向相反，机器人原地旋转。控制器会根据期望的线速度 `v`、角速度 `w`、轮距 `L` 和轮子半径 `R` 计算轮速：

```text
左轮角速度 = (v - w × L / 2) / R
右轮角速度 = (v + w × L / 2) / R
```

本项目设置 `wheel_separation: 0.20`、`wheel_radius: 0.032`。这两个数必须与 Xacro 模型一致，否则机器人实际运动距离和 `/odom` 计算结果会出现偏差。

### 7.4 里程计与 TF

差速控制器根据车轮运动估算机器人位置，并发布：

```text
odom → base_footprint → base_link → 各车轮和传感器
```

其中 `odom → base_footprint` 由差速控制器发布，其余机器人内部坐标关系由 `robot_state_publisher` 发布。这样 RViz2 才能在同一坐标系下显示机器人、雷达和运动轨迹。

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791795896953-b38df9d7-1f3b-4962-b276-58bf1c6b092f.png)

图：ros2_control 配置

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791800594294-8dc6a0f9-b6b8-4a5f-9687-9da1ed1c7acd.png)

图：轮子控制命令执行过程

![仿真学习截图](https://raw.githubusercontent.com/Jon-wang6/HelloCV/simulation/notes/images/1791801246394-189ef562-7f47-4e7e-a525-fa246228e313.png)

图：控制器运行结果

**参考：**

1. [6.5.2 使用 Gazebo 接入 ros2_control](https://www.bilibili.com/video/BV1VayHYqEUe/)
2. [第六章仿真课程合集](https://www.bilibili.com/video/BV1RT1BYQEAk/)

## 八、我的实现代码与运行

本次实践代码保存在 [`cpp01_simulation`](../src/cpp01_simulation) 功能包中，主要文件如下：

| 文件 | 作用 |
| --- | --- |
| [`robot_urdf.xacro`](../src/cpp01_simulation/urdf/robot01/robot_urdf.xacro) | 组合车体、执行器、传感器和 Gazebo 插件 |
| [`robot01_ros2_control.xacro`](../src/cpp01_simulation/urdf/robot01/robot01_ros2_control.xacro) | 声明左右轮硬件接口并接入 Gazebo ros2_control |
| [`robot01_ros2_controller.yaml`](../src/cpp01_simulation/config/robot01_ros2_controller.yaml) | 配置关节状态广播器、差速控制器和力矩控制器 |
| [`gazebo_sensor_plugin.xacro`](../src/cpp01_simulation/urdf/robot01/plugins/gazebo_sensor_plugin.xacro) | 配置激光雷达、IMU 和深度相机仿真 |
| [`gazebo_sim_launch.py`](../src/cpp01_simulation/launch/gazebo_sim_launch.py) | 启动 Gazebo、生成机器人并依次激活广播器和差速控制器 |
| [`custom_room.world`](../src/cpp01_simulation/world/custom_room.world) | 自建 Gazebo 仿真场景 |

编译并启动：

```bash
cd ~/ws03
colcon build --packages-select cpp01_simulation --symlink-install
source install/setup.bash
ros2 launch cpp01_simulation gazebo_sim_launch.py
```

启动后会自动激活：

```text
robot01_joint_state_broadcaster
robot01_diff_drive_controller
```

检查控制器及硬件接口：

```bash
ros2 control list_controllers
ros2 control list_hardware_interfaces
```

发送直行速度，其中 `linear.x` 表示前进速度，`angular.z` 表示转向角速度：

```bash
ros2 topic pub --rate 10 /cmd_vel geometry_msgs/msg/Twist \
  "{linear: {x: 0.1}, angular: {z: 0.0}}"
```

发送原地旋转速度：

```bash
ros2 topic pub --rate 10 /cmd_vel geometry_msgs/msg/Twist \
  "{linear: {x: 0.0}, angular: {z: 0.5}}"
```

常用数据话题：

| 话题 | 内容 |
| --- | --- |
| `/cmd_vel` | 底盘速度控制指令 |
| `/joint_states` | 左右轮关节状态 |
| `/odom` | 差速控制器计算的里程计 |
| `/tf`、`/tf_static` | 机器人各坐标系之间的关系 |
| `/scan` | 激光雷达扫描数据 |
| `/imu` | IMU 数据 |
| `/camera_sensor/depth/image_raw` | 深度图像 |
| `/camera_sensor/points` | 深度相机点云 |

可以使用下面的命令确认数据是否持续发布：

```bash
ros2 topic list
ros2 topic hz /scan
ros2 topic echo /odom --once
ros2 run tf2_tools view_frames
```

## 九、常见问题排查

### 9.1 找不到功能包

出现 `Package 'cpp01_simulation' not found` 时，一般是工作空间没有编译或当前终端没有加载环境：

```bash
cd ~/ws03
colcon build --packages-select cpp01_simulation --symlink-install
source /opt/ros/humble/setup.bash
source install/setup.bash
```

### 9.2 Xacro 找不到文件或宏

出现 `No such file or directory` 时检查 `<xacro:include>` 拼接路径，尤其注意功能包名与 `urdf` 之间是否漏了 `/`。出现 `unknown macro name` 时检查宏的定义名称、调用名称以及定义文件是否已提前包含。可先单独验证：

```bash
xacro ~/ws03/src/cpp01_simulation/urdf/robot01/robot_urdf.xacro > /tmp/robot01.urdf
```

命令没有报错并生成 URDF，才说明 Xacro 展开成功。

### 9.3 Gazebo 中没有机器人

先观察终端是否出现 `Successfully spawned entity [robot01]`。如果出现生成超时，可以关闭残留进程后重新启动：

```bash
pkill -f gzserver
pkill -f gzclient
```

当前 Launch 已延迟 3 秒生成机器人，用于等待 Gazebo 世界和 `/spawn_entity` 服务就绪。

### 9.4 机器人不动或控制器加载失败

依次检查：

```bash
ros2 control list_controllers
ros2 control list_hardware_interfaces
ros2 topic info /cmd_vel
```

差速控制器应显示为 `active`，左右轮速度命令接口应显示为可用且已被占用。Gazebo 如果处于暂停状态，即使话题正常也不会运动，需要先点击播放按钮。

### 9.5 RViz2 显示错误

RViz2 中看不到模型或提示 `Frame does not exist` 时，检查：

1. `Fixed Frame` 是否选择 `odom`、`base_footprint` 或当前真实存在的坐标系；
2. `RobotModel` 是否订阅 `/robot_description`；
3. `/joint_states` 和 `/tf` 是否持续发布；
4. Xacro 中的父子关节名称是否拼写一致。

### 9.6 运动距离不准或发生打滑

优先核对 `wheel_radius`、`wheel_separation` 与模型实际尺寸是否一致，再检查轮子的碰撞体、质量、惯性和摩擦参数。仿真中的里程计只是由轮子运动推算，轮子打滑后也会产生累计误差。

## 十、整套运行逻辑

```text
启动 Launch
→ Xacro 展开为 robot_description
→ robot_state_publisher 发布机器人固定 TF
→ Gazebo 加载 custom_room.world
→ spawn_entity 生成 robot01
→ gazebo_ros2_control 注册左右轮接口
→ joint_state_broadcaster 发布关节状态
→ diff_drive_controller 接收 /cmd_vel
→ 左右轮在 Gazebo 中运动
→ 控制器发布 /odom 与 odom TF
→ 雷达、IMU、相机插件发布传感器数据
→ RViz2 订阅 TF、模型和传感器话题进行显示
```

## 十一、总结

通过本阶段学习，我完成了机器人底盘、驱动轮、万向轮和传感器的 Xacro 建模，并补充了碰撞、质量与惯性属性。机器人能够加载到自建 Gazebo 世界中，通过 `gazebo_ros2_control` 管理左右轮硬件接口，自动启动关节状态广播器和两轮差速控制器。

目前已完成 URDF/Xacro 建模、RViz2 显示、Gazebo 世界加载、激光雷达、IMU、深度相机、`/cmd_vel` 运动控制、里程计和 TF 发布。下一阶段可以在此基础上接入 SLAM Toolbox 与 Navigation2，继续学习建图、定位和自主导航。
