from launch import LaunchDescription
from launch_ros.actions import Node
# 封装终端指令相关类--------------
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable
# 参数声明与获取-----------------
# from launch.actions import DeclareLaunchArgument
# from launch.substitutions import LaunchConfiguration
# 文件包含相关-------------------
# from launch.actions import IncludeLaunchDescription
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# 分组相关----------------------
# from launch_ros.actions import PushRosNamespace
# from launch.actions import GroupAction
# 事件相关----------------------
# from launch.event_handlers import OnProcessStart, OnProcessExit
# from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
# 获取功能包下share目录路径-------
from ament_index_python.packages import get_package_share_directory
import os

"""
    需求：演示如何在launch文件中使用Node类启动节点
    构造函数参数说明：
        :param: executable      被执行的程序名称
        :param: package         被执行的程序所属的功能包名称
        :param: name            节点名称
        :param: namespace       节点命名空间
        :param: exec_name       设置程序标签
        :param: parameters      节点参数列表
        :param: remappings      节点重映射列表
        :param: ros_arguments   ROS arguments列表，为节点传参
                                    --ros-args xx yy zz
        :param: arguments       额外的arguments列表
                                    xx yy zz --ros-args
"""

def generate_launch_description():
    # turtle1 = Node(
    #     package="turtlesim",
    #     executable="turtlesim_node",
    #     exec_name="my_label",
    #     ros_arguments=["--remap", "__ns:=/t2"]
    #     #ros2 run turtlesim turtlesim_node --ros-args --remap __ns:=/t2
    # )
    turtle2 = Node(
        package="turtlesim",
        executable="turtlesim_node",
        respawn=True,
        name="t2",
        #方式1，直接设置参数
        #parameters=[{"background_r": 255}, {"background_g": 0}, {"background_b": 0}]
        #方式2（更常用），读取yaml文件(通过yaml文件绝对路径读取)
        #parameters=["/home/jon/ws02/install/cpp01_launch/share/cpp01_launch/config/t2.yaml"]
        #优化：动态获取路径
        parameters=[os.path.join(get_package_share_directory("cpp01_launch"), "config", "t2.yaml")]
    )
    return LaunchDescription([turtle2])