#!/usr/bin/env python3
from http import client
import rclpy
from rclpy.node import Node
from functools import partial #allows us to add more arguments to a function
from example_interfaces.srv import AddTwoInts

 
class AddTwoIntsClientNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("add_two_ints_client") # MODIFY NAME
        self.call_add_two_ints_server(6,7)
    
    def call_add_two_ints_server(self, a, b): #function to create client, create request, call server and wait for response 
        client = self.create_client(AddTwoInts, "add_two_ints")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("WAiting for Server Add Two Ints")
        
        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_add_two_ints, a=a, b=b)) #adds a future callback function for when the server sends a response



    def callback_call_add_two_ints(self, future, a, b): #send parameters so we know whc=ich response is for which request
        try:
            response = future.result()
            self.get_logger().info(str(a) + " + " + str(b) + " = " + str(response.sum))
    
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

        

 
 
def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClientNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()