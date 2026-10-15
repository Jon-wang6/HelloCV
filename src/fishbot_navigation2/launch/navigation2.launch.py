import os
import launch
import launch_ros

from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    # 获取与拼接默认路径
    fishbot_navigation2_dir = get_package_share_directory(
        'fishbot_navigation2'
    )

    nav2_bringup_dir = get_package_share_directory('nav2_bringup')

    rviz_config_dir = os.path.join(
        fishbot_navigation2_dir,
        'config',
        'nav2_stable_view.rviz'
    )

    # 创建 Launch 配置
    use_sim_time = launch.substitutions.LaunchConfiguration(
        'use_sim_time',
        default='true'
    )

    map_yaml_path = launch.substitutions.LaunchConfiguration(
        'map',
        default=os.path.join(
            fishbot_navigation2_dir,
            'maps',
            'room.yaml'
        )
    )

    nav2_param_path = launch.substitutions.LaunchConfiguration(
        'params_file',
        default=os.path.join(
            fishbot_navigation2_dir,
            'config',
            'nav2_params.yaml'
        )
    )

    return launch.LaunchDescription([
        # 避开当前系统的 Fast DDS 共享内存锁异常，统一使用 UDP 通信。
        launch.actions.SetEnvironmentVariable(
            'FASTDDS_BUILTIN_TRANSPORTS',
            'UDPv4'
        ),

        # 声明新的 Launch 参数
        launch.actions.DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='Use simulation (Gazebo) clock if true'
        ),

        launch.actions.DeclareLaunchArgument(
            'map',
            default_value=map_yaml_path,
            description='Full path to map file to load'
        ),

        launch.actions.DeclareLaunchArgument(
            'params_file',
            default_value=nav2_param_path,
            description='Full path to param file to load'
        ),

        # 启动 Nav2
        launch.actions.IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [nav2_bringup_dir, '/launch', '/bringup_launch.py']
            ),
            launch_arguments={
                'map': map_yaml_path,
                'use_sim_time': use_sim_time,
                'params_file': nav2_param_path,
                # 当前环境下组合容器会让控制器读到过期的 TF。
                # 使用独立进程后，各节点能稳定接收 AMCL 发布的 map -> odom。
                'use_composition': 'False'
            }.items(),
        ),

        # 启动 RViz2
        launch_ros.actions.Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
            additional_env={
                # 使用 NVIDIA 桌面 OpenGL，但保留正常的 X11 共享内存路径。
                '__NV_PRIME_RENDER_OFFLOAD': '1',
                '__GLX_VENDOR_LIBRARY_NAME': 'nvidia',
                'QT_OPENGL': 'desktop',
                'QT_XCB_GL_INTEGRATION': 'xcb_glx'
            },
            # RViz 若因显卡驱动瞬时异常退出，等待两秒后自动恢复。
            respawn=True,
            respawn_delay=2.0,
            output='screen'
        ),
    ])
