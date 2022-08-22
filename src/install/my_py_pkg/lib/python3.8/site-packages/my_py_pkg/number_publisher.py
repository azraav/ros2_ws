#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64 #import std message 

 
 
class NumberPublisherNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("number_publisher") # MODIFY NAME

        #declare parameter
        #self.declare_parameter("test123")

        self.declare_parameter("number_to_publish", 2) #declare parameter args:name of param, default value
        self.number_ = self.get_parameter("number_to_publish").value  #get parameter value  
        
        self.number_publisher_ = self.create_publisher(Int64, "number", 10)
        self.timer_ = self.create_timer(1, self.publish_number) #creates timer at 1Hz
        self.get_logger().info("Number Publisher has been started") #shows this when executable runs.

    def publish_number(self): #function to publish a topic 
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)

 
def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()