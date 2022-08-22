#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
 
from my_robot_interfaces.msg import LedStates
from my_robot_interfaces.srv import SetLed


class LedPanelNode(Node): 
    def __init__(self):
        super().__init__("led_panel") 
        #publisher stuff
        self.led_states_ = [0, 0, 0]
        self.led_states_publisher_ = self.create_publisher(LedStates, "led_states", 10)
        self.timer_ = self.create_timer(4, self.publish_led_states) #creates timer at 1Hz
        self.get_logger().info("Led States Publisher has been started") #shows this when executable runs.

        #server stuff 
        self.server_ = self.create_service(SetLed, "set_led", self.callback_set_led) #from node class args:service type, name of service, callback function
            #for service name good convention is to start with verb (in this case add)
        self.get_logger().info("Set Led Server has been started")

    def publish_led_states(self): #function to publish a topic 
        msg = LedStates()
        msg.led_states = self.led_states_
        self.led_states_publisher_.publish(msg)

    def callback_set_led(self, request, response): #callback function linked to server. Good naming convention: callback_service_name
        led_number = request.led_number
        state = request.state

        if led_number > len(self.led_states_) or led_number <= 0:
            response.success = False
            return response
        
        if state not in [0,1]:
            response.success =  False
            return response
        
        self.led_states_[led_number-1] = state
        response.success = True
        self.get_logger().info("LED states updated")
        self.publish_led_states()
        return response
    
 
 
def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode() 
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()


#int64 led_number
#int64 state
#---
#bool success