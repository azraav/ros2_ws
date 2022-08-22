#!/usr/bin/env python3
import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge #add dependency

from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage

 
class ImageSubscriberRT(Node): # MODIFY NAME
    def __init__(self, args):
        super().__init__("image_subscriber_rt") # MODIFY NAME

        self.frame_no = 1
        self.opt_out_file = '/home/azraa/video_test'
        self.opt_topic = '/v4l/camera/image_raw'
        self.bridge = CvBridge()
       

        #create subscription 
        self.subscription = self.create_subscription(Image, self.opt_topic, self.callback_image_writer, 10) #args: msg type, topic name, callback, qSize


  
    def callback_image_writer(self, msg):
        self.get_logger().info('Image Received [%i]' %
                               (self.frame_no))

        cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        #timestr = "%.6f" % msg.header.stamp
        #image_name = str(self.opt_out_file)+"/"+timestr+".jpeg"
        image_name = str(self.opt_out_file)+"/"+str(self.frame_no).zfill(3)+".jpeg"
        cv2.imwrite(image_name, cv_image)
                    
        self.frame_no = self.frame_no + 1
        
        

def main(args=None):
    rclpy.init(args=args)
    node = ImageSubscriberRT(args) # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()