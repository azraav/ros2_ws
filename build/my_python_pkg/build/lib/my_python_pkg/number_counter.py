#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
 
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool


class NumberCounterNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("number_counter") # MODIFY NAME
        
        self.counter_ = 0
        self.number_counter_publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.subscriber_ = self.create_subscription(Int64, "number", self.callback_number, 10) #args: msg type, topic name, callback, qSize

        #SERVER STUFF
        self.reset_counter_service_ = self.create_service(
            SetBool, "reset_counter", self.callback_reset_counter) #from node class args:service type, name of service, callback function
            #for service name good convention is to start with verb (in this case add)
        
        self.get_logger().info("Number Counter has been started")


         
    def callback_number(self, msg): #good naming convention : callback_topic_name
        self.counter_ += msg.data
        #self.get_logger().info(str(self.counter_))

        #new message to publish from this node
        new_msg = Int64()
        new_msg.data = self.counter_
        self.number_counter_publisher_.publish(new_msg)

    
    def callback_reset_counter(self, request, response): #callback function linked to server. Good naming convention: callback_service_name
        if request.data:
            self.counter_ = 0
            response.success = True
            response.message = "Counter has been reset"
        else: 
            self.counter = self.counter_
            response.success = False
            response.message = "Counter has not been reset"    
        return response
 
def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()