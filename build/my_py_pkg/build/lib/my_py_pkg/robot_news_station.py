#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String #import example message 
 
 
class RobotNewsStationNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("robot_news_station") # MODIFY NAME

        self.declare_parameter("name", "C3PO")
        self.robot_name_ = self.get_parameter("name").value
        
        #create publisher from Node class
        self.publisher_ = self.create_publisher(String, "robot_news", 10) #args: msg_type, topic_name, q_size (like buffer - how many messages to keep if messages are late before losing messages)
        self.timer_ = self.create_timer(0.5, self.publish_news) #creates timer at 2Hz
        self.get_logger().info("Robot News Station has been started") #shows this when executable runs.

    #def timer_callback(self):

    def publish_news(self): #function to publish a topic (a msg Hello will be published on the topic robot_news)
        msg = String()
        msg.data = "Hi, this is " + str(self.robot_name_) + " from the robot news station."
        self.publisher_.publish(msg)

 
 
def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStationNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()