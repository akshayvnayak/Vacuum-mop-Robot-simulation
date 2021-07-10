#!/usr/bin/env python

import rospy
from rospy.timer import sleep
from std_msgs.msg import String
from webots_ros.srv import *


def controllerNameCallback(data):
   # print("Hello")
   # rospy.loginfo("Hello")
   # print("hi")
   # print("Hello world")
   rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)

if __name__ == '__main__':
   rospy.init_node('create',anonymous=True)
   # rospy.loginfo("Hello")
   # print("hi")
   nameSub = rospy.Subscriber('model_name',String, controllerNameCallback)
   # msg = rospy.wait_for_message("model_name", String, timeout=None)
   # rospy.spin()
   # sleep(10)

   rospy.wait_for_service('Create/robot/time_step')
   timeStepClient =  rospy.ServiceProxy('Create/robot/time_step', set_int)

   nameSub.unregister()

   # set_position_client = 

   ## enable Sick_LMS_291
   rospy.wait_for_service("Create/Sick_LMS_291/enable")
   try:
      set_lidar_client = rospy.ServiceProxy("Create/Sick_LMS_291/enable", set_int)
      set_lidar_client(32)
      print("LMS enabled")
   except rospy.ServiceException as e:
      print("LMS291 Service call failed: %s"%e)

   ## enable gps
   rospy.wait_for_service("Create/gps/enable")
   try:
      set_gps_client = rospy.ServiceProxy("Create/gps/enable", set_int)
      set_gps_client(32)
      print("GPS enabled")
   except rospy.ServiceException as e:
      print("GPS Service call failed: %s"%e)
   
   ## enable inertial unit  
   rospy.wait_for_service("Create/inertial_unit/enable")
   try:
      set_inertial_unit_client = rospy.ServiceProxy("Create/inertial_unit/enable", set_int)
      set_inertial_unit_client(32)
      print("inertial_unit enabled")
   except rospy.ServiceException as e:
      print("inertial_unit Service call failed: %s"%e)
   
   ## enable accelerometer
   rospy.wait_for_service("Create/accelerometer/enable")
   try:
      set_accelerometer_client = rospy.ServiceProxy("Create/accelerometer/enable", set_int)
      set_accelerometer_client(32)
      print("accelerometer enabled")
   except rospy.ServiceException as e:
      print("accelerometer Service call failed: %s"%e)
   
   ## enable camera
   rospy.wait_for_service("Create/camera/enable")
   try:
      set_camera_client = rospy.ServiceProxy("Create/camera/enable", set_int)
      set_camera_client(32)
      print("camera enabled")
   except rospy.ServiceException as e:
      print("camera Service call failed: %s"%e)
   
   ## enable gyro
   rospy.wait_for_service("Create/gyro/enable")
   try:
      set_gyro_client = rospy.ServiceProxy("Create/gyro/enable", set_int)
      set_gyro_client(32)
      print("gyro enabled")
   except rospy.ServiceException as e:
      print("gyro Service call failed: %s"%e)


   rate = rospy.Rate(10)
   while not rospy.is_shutdown():
      # rospy.wait_for_service("Create/gps/enable")
      try:
         timeStepClient(32)
         print("Hi")
         rate.sleep()
      except rospy.ServiceException as e:
         print("timestep service call failed: %s"%e)
         break
   
   
   # rospy.spin()