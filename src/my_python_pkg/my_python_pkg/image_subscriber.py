#!/usr/bin/env python3
import os
import sys
import cv2
from numpy import argsort
import rclpy
import getopt
import subprocess
from rclpy.node import Node
from cv_bridge import CvBridge #add dependency

from sensor_msgs.msg import Image
from sensor_msgs.msg import CompressedImage

import ros2bag #add dependency
import rosbags.rosbag2
from ros2bag.api import check_path_exists
from ros2cli.node import NODE_NAME_PREFIX
from argparse import FileType
 
class ImageSubscriber(Node): # MODIFY NAME
    def __init__(self, args):
        super().__init__("image_subscriber") # MODIFY NAME
 
        '''
        The constructor.
        1. Initializes class attributes using user inputs and reading input bag file.
        2. Defines subscriber callback.
        3. Plays input bag file.
        '''

        self.fps = 30
        self.rate = 1.0
        self.frame_no = 1
        self.opt_out_file = '/home/azraa/video_test'
        self.opt_topic = ''
        self.bridge = CvBridge()
        self.msg_fmt = ''

        # Checks if a ROS2 bag has been specified in commandline.
        if len(args) < 2:
            print('Please specify ROS2 bag file!')
            sys.exit(1)
        try:
            opt_files = self.parse_args(args[1:])
            print('FPS (int) = ', self.fps)
            print('Rate (float) = ', self.rate)
            print('Topic (str) = ', self.opt_topic)
            print('Output File (str) = ', self.opt_out_file)
        except getopt.GetoptError:
            sys.exit(2)

        self.bag_file = opt_files[0]
        print('bag_file = ', self.bag_file)

        #gets bag info from input bag 
        proc = subprocess.Popen(['ros2','bag','info', self.bag_file],stdout=subprocess.PIPE)
        rosbag2_info = str(proc.stdout.read(), 'utf-8').splitlines()

        #get message type from rosbag 
        self.msgfmt_literal, self.count = self.get_topic_info(rosbag2_info)
        self.msgtype = self.filter_image_msgs(self.msgfmt_literal)

        #create subscription 
        self.subscription = self.create_subscription(self.msgtype, self.opt_topic, self.callback_image_writer, 10) #args: msg type, topic name, callback, qSize

        #replays bag at desired rate 
        p1 = subprocess.Popen(['ros2','bag','play',self.bag_file,'-r', str(self.rate)])


    def parse_args(self, args):
        '''
        Parses user input from commandline to get the following information.
        1. FPS [fps]
        2. Rate [rate]
        3. Output File Name [opt_out_file]
        4. Input Topic Name [opt_topic]
        5. Input Bag File Path Name [opt_files[0]]
        '''
        opts, opt_files = getopt.getopt(args, 'hsvr:o:t:p:',['fps=','rate=','ofile=','topic='])
        for opt, arg in opts:
            if opt == '-h':
                sys.exit(0)
            elif opt in ('--fps'):
                self.fps = int(arg)
            elif opt in ('-r', '--rate'):
                self.rate = float(arg)
            elif opt in ('-o', '--ofile'):
                self.opt_out_file = arg
            elif opt in ('-t', '--topic'):
                self.opt_topic = arg
            else:
                print('opz:', opt, 'arg:', arg)

        
        return opt_files

    def get_topic_info(self, rosbag2_info):

        msgtype = ''
        count = 0
        serialtype = ''  # Unused

        for line in rosbag2_info:
            if self.opt_topic in line:
                parse_line = line.split()
                for word_index in range(0, len(parse_line)):
                    if 'Type:' in parse_line[word_index]:
                        msgtype = parse_line[word_index+1]
                    if 'Count:' in parse_line[word_index]:
                        count = int(parse_line[word_index+1])
                    if 'Serialization' in parse_line[word_index]:
                        serialtype = parse_line[word_index+2]

        return msgtype, count

    '''
    Detemines the ROS2 message format which RosVideoWriter node will expect to
    receive in our subscriber callback.
    '''
    def filter_image_msgs(self, msgfmt_literal):

        if 'sensor_msgs/msg/Image' == msgfmt_literal:
            return Image
        elif 'sensor_msgs/msg/CompressedImage' == msgfmt_literal:
            return CompressedImage

    '''
    The Subscriber Callback.
    1. Receives images from running ROS2 bag file.
    2. Get pix_fmt info for ffmpeg process execution.
    3. Manually converts 16UC1 color encoding to mono16 to avoid cv_bridge
    conversion error.
    4. Converts ROS2 image message to OpenCV Mat object.
    5. Writes individual frame out to file.
    6. Uses ffmpeg to stitch all frames into a video at user-defined
    configuration.
    7. Removes all individual frames.
    '''
    def callback_image_writer(self, msg):
        self.get_logger().info('Image Received [%i/%i]' %
                               (self.frame_no, self.count))

        cv_image = self.bridge.imgmsg_to_cv2(msg, self.msg_fmt)
        #timestr = "%.6f" % msg.header.stamp
        #image_name = str(self.opt_out_file)+"/"+timestr+".jpeg"
        image_name = str(self.opt_out_file)+"/"+str(self.frame_no).zfill(3)+".jpeg"
        cv2.imwrite(image_name, cv_image)
                    

        if self.frame_no == self.count-1:
            self.get_logger().info("All frames receieved")
            sys.exit()
        else:
            self.frame_no = self.frame_no + 1
        
        #if self.pix_fmt_already_set is not True:
        #    self.pix_fmt, self.msg_fmt = self.get_pix_fmt(msg.encoding)
        #    self.pix_fmt_already_set = True

        #if msg.encoding.find('16UC1') != -1:
        #    msg.encoding = 'mono16'

        #img = self.bridge.imgmsg_to_cv2(msg, self.msg_fmt)

        #filename = str(self.frame_no).zfill(3) + '.png'
        #cv2.imwrite(filename, img)
          

        #with ros2bag.Bag(self.bag_file, 'r') as bag:
        #    for topic, msg, t in bag.read_messages():
        #        if topic == "/camera/image_raw":
        #            try:
        #                cv_image = self.bridge.imgmsg_to_cv(msg, self.msg_fmt)
                    
        #            except Exception as e:
        #                self.get_logger().error("CVBridge failed %r" % (e,))
  
        #            timestr = "%.6f" % msg.header.stamp.to_sec()
        #            image_name = str(self.opt_out_file)+"/"+timestr+".jpeg"
        #            cv2.imwrite(image_name, cv_image)



 
def main(args=None):
    rclpy.init(args=args)
    node = ImageSubscriber(args) # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main(sys.argv)