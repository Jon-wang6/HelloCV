from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    t = Node(package="turtlesim",executable="turtlesim_node")
    param = Node(package="cpp07_exercise",executable="exer06_param")

    return LaunchDescription([t,param])