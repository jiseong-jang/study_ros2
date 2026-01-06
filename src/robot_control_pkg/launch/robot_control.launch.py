import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')
    pkg_turtlebot3_gazebo = get_package_share_directory('turtlebot3_gazebo')

    model_name_arg = DeclareLaunchArgument('model_name', default_value='phi3:mini')
    linear_speed_arg = DeclareLaunchArgument('linear_speed', default_value='0.2')
    angular_speed_arg = DeclareLaunchArgument('angular_speed', default_value='0.5')

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_turtlebot3_gazebo, 'launch', 'empty_world.launch.py')
        )
    )

    llm_service_node = Node(
        package='robot_control_pkg',
        executable='llm_service_node',
        name='llm_service_node',
        parameters=[{'model_name': LaunchConfiguration('model_name')}],
        output='screen'
    )

    movement_action_server = Node(
        package='robot_control_pkg',
        executable='movement_action_server',
        name='movement_action_server',
        output='screen'
    )

    teleop_node = Node(
        package='robot_control_pkg',
        executable='teleop_node',
        name='teleop_node',
        parameters=[{
            'linear_speed': LaunchConfiguration('linear_speed'),
            'angular_speed': LaunchConfiguration('angular_speed'),
        }],
        output='screen',
        emulate_tty=True
    )

    return LaunchDescription([
        model_name_arg,
        linear_speed_arg,
        angular_speed_arg,
        gazebo,
        llm_service_node,
        movement_action_server,
        teleop_node,
    ])