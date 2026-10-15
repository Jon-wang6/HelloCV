学习资料：[《ROS 2机器人开发从入门到实践》](https://www.bilibili.com/video/BV1RT1BYQEAk/)  
参考代码：[FishROS ros2bookcode 第八章](https://gitee.com/fishros/ros2bookcode/tree/master/chapt8)  
实践环境：Ubuntu 22.04.5 LTS、ROS 2 Humble  
当前工作空间：`~/ws05`

# 一、学习目标
本阶段主要学习 ROS 2 插件机制和 Navigation2 插件开发：

1. 理解 pluginlib 的作用；
2. 掌握插件接口、插件实现和动态加载流程；
3. 了解 Navigation2 规划器接口；
4. 实现简单的自定义全局规划器；
5. 了解 Navigation2 控制器接口；
6. 实现简单的自定义控制器；
7. 将自定义插件配置到 Navigation2 中运行。

# 二、pluginlib 插件机制
## 2.1 pluginlib 的作用
pluginlib 是 ROS 2 中用于动态加载插件的工具。

程序在编译时只需要依赖统一的抽象接口，运行时再根据插件名称加载具体实现，不需要修改主程序。

```plain
抽象接口
   ↓
不同插件实现
   ↓
编译为动态库
   ↓
pluginlib 运行时加载
```

Navigation2 中的规划器、控制器和恢复行为都采用了类似的插件结构。

## 2.2 当前功能包结构
```plain
motion_control_system/
├── include/motion_control_system/
│   ├── motion_control_interface.hpp
│   └── spin_motion_controller.hpp
├── src/
│   ├── spin_motion_controller.cpp
│   └── test_plugin.cpp
├── spin_motion_plugins.xml
├── CMakeLists.txt
└── package.xml
```

各文件作用：

| 文件 | 作用 |
| --- | --- |
| `motion_control_interface.hpp` | 定义插件统一接口 |
| `spin_motion_controller.hpp` | 声明旋转控制插件 |
| `spin_motion_controller.cpp` | 实现并导出插件 |
| `spin_motion_plugins.xml` | 描述插件名称、类型和基类 |
| `test_plugin.cpp` | 动态加载并测试插件 |
| `CMakeLists.txt` | 编译动态库和测试程序 |


## 2.3 定义插件接口
`MotionController` 是插件的抽象基类，规定所有控制插件必须实现：

+ `start()`：启动控制；
+ `stop()`：停止控制；
+ 虚析构函数：保证通过基类指针释放对象时能够正确析构。

## 2.4 编写并导出插件
`SpinMotionController` 继承 `MotionController`，实现 `start()` 和 `stop()`。

插件实现完成后，需要使用以下宏导出：

```plain
PLUGINLIB_EXPORT_CLASS(
    motion_control_system::SpinMotionController,
    motion_control_system::MotionController
)
```

第一个参数是插件实现类，第二个参数是插件接口类。

## 2.5 插件描述文件
`spin_motion_plugins.xml` 用来告诉 pluginlib：

+ 动态库名称；
+ 插件名称；
+ 插件实现类；
+ 插件基类。

其中插件名称为：

```plain
motion_control_system/SpinMotionController
```

程序运行时通过这个名称选择插件。

## 2.6 编译与测试
```plain
cd ~/ws05/learn_pluginlib/src
colcon build --packages-select motion_control_system
source install/setup.bash
```

运行插件测试程序：

```plain
ros2 run motion_control_system test_plugin \
  motion_control_system/SpinMotionController
```

运行结果：

```plain
SpinMotionController::start
SpinMotionController::stop
```

完整的插件加载过程为：

```plain
读取插件名称
      ↓
创建 ClassLoader
      ↓
读取插件描述文件
      ↓
加载动态库
      ↓
创建插件对象
      ↓
调用 start() 和 stop()
```

# 三、自定义 Navigation2 全局规划器
## 3.1 全局规划器的作用
全局规划器根据机器人的起点、目标点和全局代价地图生成完整路径。

```plain
机器人当前位置 + 目标位置 + 全局代价地图
                    ↓
                 全局规划器
                    ↓
                  Path
```

Nav2 中的自定义规划器需要继承：

```plain
nav2_core::GlobalPlanner
```

## 3.2 主要接口
| 接口 | 作用 |
| --- | --- |
| `configure()` | 获取节点、TF、代价地图和参数 |
| `activate()` | 激活插件 |
| `deactivate()` | 停用插件 |
| `cleanup()` | 清理插件资源 |
| `createPlan()` | 根据起点和终点生成路径 |


## 3.3 教程中的规划方法
教程中的自定义规划器采用直线插值：

1. 检查起点和目标点坐标系；
2. 计算起点到终点的距离；
3. 根据插值分辨率生成一系列路径点；
4. 将世界坐标转换为代价地图栅格坐标；
5. 检查路径是否经过致命障碍物；
6. 没有障碍物时返回路径。

插值参数：

```plain
interpolation_resolution: 0.1
```

该规划器主要用于理解插件开发流程，只能生成直线路径，不能像 A*、Dijkstra 那样绕开障碍物。

## 3.4 配置规划器
在 `nav2_params.yaml` 中配置：

```plain
planner_server:
  ros__parameters:
    planner_plugins: ["GridBased"]

    GridBased:
      plugin: "nav2_custom_planner/CustomPlanner"
      interpolation_resolution: 0.1
```

# 四、自定义 Navigation2 控制器
## 4.1 控制器的作用
控制器根据全局路径和机器人当前位置计算速度指令：

```plain
全局路径 + 当前位姿
          ↓
       控制器
          ↓
       /cmd_vel
```

自定义控制器需要继承：

```plain
nav2_core::Controller
```

## 4.2 主要接口
| 接口 | 作用 |
| --- | --- |
| `configure()` | 获取节点、TF、代价地图和参数 |
| `setPlan()` | 接收全局规划路径 |
| `computeVelocityCommands()` | 计算线速度和角速度 |
| `setSpeedLimit()` | 设置速度限制 |
| `activate()` | 激活控制器 |
| `deactivate()` | 停用控制器 |
| `cleanup()` | 清理资源 |


## 4.3 教程中的控制方法
控制器首先在全局路径中找到距离机器人最近的点，再选择下一个路径点作为跟踪目标。

随后计算机器人朝向与目标点方向之间的角度差：

+ 角度差大于约 `18°` 时，机器人原地旋转；
+ 角度差较小时，机器人向前直行。

```plain
角度偏差较大 → 线速度为 0，原地旋转
角度偏差较小 → 角速度为 0，向前行驶
```

主要参数：

```plain
max_linear_speed: 0.1
max_angular_speed: 1.0
```

该控制方法结构简单，主要用于学习控制器插件接口，实际运动可能不够平滑。

## 4.4 配置控制器
在 `nav2_params.yaml` 中配置：

```plain
controller_server:
  ros__parameters:
    controller_plugins: ["FollowPath"]

    FollowPath:
      plugin: "nav2_custom_controller::CustomController"
      max_linear_speed: 0.1
      max_angular_speed: 1.0
```

# 五、插件接入 Navigation2 的流程
```plain
定义 Nav2 插件接口实现
          ↓
编译为共享动态库
          ↓
使用 PLUGINLIB_EXPORT_CLASS 导出
          ↓
编写插件描述 XML
          ↓
在 CMake 中注册 XML
          ↓
在 nav2_params.yaml 中选择插件
          ↓
启动 Navigation2
```

配置完成后，Navigation2 会根据参数文件动态加载自定义规划器和控制器。

# 六、常见问题
## 6.1 重复定义编译目标
如果多次编写：

```plain
add_library(spin_motion_controller ...)
```

会出现：

```plain
target with the same name already exists
```

同一个目标只能定义一次。

## 6.2 新文件出现红色下划线
新建 `.cpp` 文件后，需要将其加入 CMake：

```plain
add_executable(test_plugin src/test_plugin.cpp)
```

重新执行 `colcon build` 后，文件才会进入 `compile_commands.json`。

## 6.3 插件无法加载
需要检查：

1. 插件动态库是否成功生成；
2. XML 中的类名和基类是否正确；
3. CMake 是否注册插件描述文件；
4. 是否执行了 `source install/setup.bash`；
5. 运行时使用的插件名称是否与 XML 一致。

# 七、本章总结
本章学习了 pluginlib 的基本使用，并将插件机制应用到 Navigation2 中。

核心关系为：

```plain
pluginlib
   ├── 自定义全局规划器 → 生成 Path
   └── 自定义控制器   → 生成 /cmd_vel
```

通过插件机制，可以在不修改 Navigation2 主程序的情况下，更换规划算法和控制算法，为后续开发 A*、Dijkstra、RRT 或其他控制方法打下基础。
