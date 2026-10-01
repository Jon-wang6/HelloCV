from launch import LaunchDescription
from launch_ros.actions import Node
# 封装终端指令相关类--------------
from launch.actions import ExecuteProcess
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
from launch.event_handlers import OnProcessStart, OnProcessExit
from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
# 获取功能包下share目录路径-------
# from ament_index_python.packages import get_package_share_directory

"""
    需求：为turtlesim_node绑定事件，节点启动时执行生成新的乌龟程序，关闭时执行日志输出操作
"""

def generate_launch_description():
    turtle = Node(package="turtlesim", executable="turtlesim_node")
    #ros2 service call /spawn turtlesim/srv/Spawn "{'x':8.0,'y':3.0}"
    spawn = ExecuteProcess(
        cmd=["ros2 service call /spawn turtlesim/srv/Spawn \"{'x':8.0,'y':3.0}\""],
        output="both",
        shell=True
    )
    #注册事件1
    event_start = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=turtle,
            on_start=spawn
        )
    )
    #注册事件2
    event_exit = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=turtle,
            on_exit=[LogInfo(msg="turtlesim_node节点关闭了!")]
        )
    )
    return LaunchDescription([turtle, event_start, event_exit])