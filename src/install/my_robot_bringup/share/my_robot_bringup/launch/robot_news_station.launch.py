from itertools import count
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    robot_news_node_1 = Node(
        package = "my_python_pkg",
        executable = "robot_news_station",
        name = "robot_news_station_giskard", #renaming node in launch file
        parameters=[
            {"name": "Giskard"} #add parameters
         ]
    )

    robot_news_node_2 = Node(
        package = "my_python_pkg",
        executable = "robot_news_station",
        name = "robot_news_station_bb8", #renaming node in launch file
        parameters=[
            {"name": "BB8"} #add parameters
         ]
    )

    robot_news_node_3= Node(
        package = "my_python_pkg",
        executable = "robot_news_station",
        name = "robot_news_station_daneel", #renaming node in launch file
        parameters=[
            {"name": "Deneel"} #add parameters
         ]
    )

    robot_news_node_4 = Node(
        package = "my_python_pkg",
        executable = "robot_news_station",
        name = "robot_news_station_jander", #renaming node in launch file
        parameters=[
            {"name": "Jander"} #add parameters
         ]
    )

    robot_news_node_5 = Node(
        package = "my_python_pkg",
        executable = "robot_news_station",
        name = "robot_news_station_c3po", #renaming node in launch file
        parameters=[
            {"name": "C3PO"} #add parameters
         ]
    )

    smartphone_node = Node(
        package = "my_python_pkg",
        executable = "smartphone",
    )

    ld.add_action(robot_news_node_1)
    ld.add_action(robot_news_node_2)
    ld.add_action(robot_news_node_3)
    ld.add_action(robot_news_node_4)
    ld.add_action(robot_news_node_5)

    ld.add_action(smartphone_node)
    return ld 