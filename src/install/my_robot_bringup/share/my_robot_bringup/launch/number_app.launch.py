from itertools import count
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    remap_number_topic = ("number", "my_number")       #("number", "my_number")   #old_topic, new_topic


    number_publisher_node = Node(
        package = "my_python_pkg",
        executable = "number_publisher",
        name = "my_number_publisher", #renaming node in launch file
        remappings=[
            remap_number_topic      #remapping topic/service name 
         ],
         parameters=[
            {"number_to_publish": 4} #add parameters
         ]
    )

    counter_node = Node(
        package = "my_python_pkg",
        executable = "number_counter",
        name = "my_number_counter", #renaming node in launch file 
        remappings=[
            remap_number_topic,
            ("number_count", "my_number_count")
        ]
    )

    ld.add_action(number_publisher_node)
    ld.add_action(counter_node)
    return ld 