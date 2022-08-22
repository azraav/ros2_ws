#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts
  
def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_ints_client_no_oop")

    client = node.create_client(AddTwoInts, "add_two_ints") #args: service type, service name (must be the same as server)

    while not client.wait_for_service(1.0):  #waits for server to be up before sending request args: timeout
        node.get_logger().warn("Waiting for Server Add Two Ints")
    
    request = AddTwoInts.Request() #create request
    request.a = 3
    request.b = 8

    future = client.call_async(request) #call service: always use call_async. Creates a future object: an object that contains a value that may be set in the future. 
    rclpy.spin_until_future_complete(node, future) #args: node , future   #we don't like this line. Use oops

    try:
        response = future.result()
        node.get_logger().info(str(request.a) + " + " + str(request.b) + " = " + str(response.sum))

    
    except Exception as e:
        node.get_logger().error("Service call failed %r" % (e,))


    rclpy.shutdown()

 
 
if __name__ == "__main__":
    main()