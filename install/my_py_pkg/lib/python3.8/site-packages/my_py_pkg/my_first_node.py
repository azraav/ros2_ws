#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyNode(Node): #using OOPS to create nodes is recommended. Inherits from Node object  
    def __init__(self): #constructor for clas
        super().__init__("py_test") #calls init function from Node object. Give name of node 
        self.counter_ = 0
        self.get_logger().info("Hello ROS2!!!")
        self.create_timer(0.5, self.timer_callback) #function from Node object args: period,function

    def timer_callback(self): #callback function for timer
        self.counter_ +=1
        self.get_logger().info("Hello " + str(self.counter_))

"""
#main function without OOPS Lesson 18s
def main(args=None):
    rclpy.init(args=args) #initialise ros2 communication
    node = Node("py_test") #create node with name. Important name of node is not name of file. 
    node.get_logger().info("Hello ROS2")
    rclpy.spin(node) #very important! Will allow node to be alive, eg allow callbacks to be called 
    rclpy.shutdown() # shut down node. Always adD as last line in program 
"""

#main function with OOPS Lesson 19 
def main(args=None):
    rclpy.init(args=args) #initialise ros2 communication
    node = MyNode() #create node object using class MyNode
    rclpy.spin(node) #very important! Will allow node to be alive, eg allow callbacks to be called 
    rclpy.shutdown() # shut down node. Always adD as last line in program 

if __name__ == "__main__":
    main()


