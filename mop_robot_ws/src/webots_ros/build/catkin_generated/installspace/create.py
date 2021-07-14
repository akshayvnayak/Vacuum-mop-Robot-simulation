#!/usr/bin/env python3

import rospy
import roslib
import tf
from rospy.timer import sleep
from std_msgs.msg import String
from sensor_msgs.msg import *
from webots_ros.srv import *
from geometry_msgs.msg import *
from random import uniform


TIME_STEP = 32

motors = ["left_wheel_motor", "right_wheel_motor"]
gpsValues = [0,0]
inertialUnitValues[0,0,0,0]


def controllerNameCallback(data):
   rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)


def lidarCallback(data):
   pass
   # rospy.loginfo("lidar data: ")
   # for motor in motors:
   #    rospy.wait_for_service("Create/"+motor+"/set_velocity")
   # try:
   #    set_velocity_client = rospy.ServiceProxy("Create/"+motor+"/set_velocity", set_float)
   #    random_no = 
   #    set_velocity_client(0)
   #    rospy.loginfo(motor+" velocity set to 0")
   # except rospy.ServiceException as e:
   #    rospy.loginfo(motor+": set_velocityService call failed: %s"%e)



def broadcastTransform():
   # br = tf.TransformBroadcaster()
   # # Publish odometry
   # br.sendTransform(
   #    tuple(gpsValues), 
   #    tf.transformations.quaternion_from_euler(*intertialUnitValues),
   #    rospy.Time.now(),
   #    "base_link",
   #    "odom"
   #    )
   # # Publish Lidar
   # br.sendTransform(,(1,0,0)

   pass





def gpsCallback(data):
   global gpsValues
   gpsValues = [data.point.x,data.point.y,0]
   broadcastTransform()
   # print(gpsValues)





######################################################################################
######################### Main #########################

rospy.init_node('create',anonymous=True)
nameSub = rospy.Subscriber('model_name',String, controllerNameCallback)
# sleep(10)
rospy.wait_for_service('Create/robot/time_step')
timeStepClient =  rospy.ServiceProxy('Create/robot/time_step', set_int)
nameSub.unregister()


################## Initialize motors ##################

for motor in motors:
   ##set position to INFINITY
   rospy.logdebug("Trying to set "+motor+" position set to INFINITY")
   rospy.wait_for_service("Create/"+motor+"/set_position")
   try:
      set_position_client = rospy.ServiceProxy("Create/"+motor+"/set_position", set_float)
      set_position_client(float('inf'))
      rospy.loginfo(motor+" position set to INFINITY")
   except rospy.ServiceException as e:
      rospy.logerr(motor+": set_position Service call failed: %s"%e)

   ##set velocity
   rospy.wait_for_service("Create/"+motor+"/set_velocity")
   try:
      set_velocity_client = rospy.ServiceProxy("Create/"+motor+"/set_velocity", set_float)
      set_velocity_client(3.0)
      rospy.loginfo(motor+" velocity set to 0")
   except rospy.ServiceException as e:
      rospy.logerr(motor+": set_velocityService call failed: %s"%e)


################## enable LDS_01 ##################

rospy.wait_for_service("Create/LDS_01/enable")
try:
   set_lidar_client = rospy.ServiceProxy("Create/LDS_01/enable", set_int)
   set_lidar_client(TIME_STEP)
   rospy.loginfo("LDS_01 enabled")
   sub_lidar_scan = rospy.Subscriber("Create/LDS_01/laser_scan/layer0",LaserScan, lidarCallback)
   rospy.loginfo("Topic for lidar initialized")
   while sub_lidar_scan.get_num_connections() == 0:
      rospy.logdebug_once("Waiting for lidar scan publisher.")
   rospy.loginfo("Topic for lidar scan connected")
except rospy.ServiceException as e:
   rospy.logerr("LDS_01 Service call failed: %s"%e)


################## enable gps ##################

rospy.wait_for_service("Create/gps/enable")
try:
   set_gps_client = rospy.ServiceProxy("Create/gps/enable", set_int)
   set_gps_client(TIME_STEP)
   rospy.loginfo("GPS enabled")
   sub_gps_scan = rospy.Subscriber("Create/gps/values",PointStamped, gpsCallback)
   rospy.loginfo("Topic for gps initialized")
   while sub_gps_scan.get_num_connections() == 0:
      rospy.logdebug_once("Waiting for gps scan publisher.")
   rospy.loginfo("Topic for gps scan connected")
except rospy.ServiceException as e:
   rospy.logerr("GPS Service call failed: %s"%e)


################## enable inertial unit ##################

rospy.wait_for_service("Create/inertial_unit/enable")
try:
   set_inertial_unit_client = rospy.ServiceProxy("Create/inertial_unit/enable", set_int)
   set_inertial_unit_client(TIME_STEP)
   rospy.loginfo("inertial_unit enabled")
except rospy.ServiceException as e:
   rospy.logerr("inertial_unit Service call failed: %s"%e)


################## enable accelerometer ##################

rospy.wait_for_service("Create/accelerometer/enable")
try:
   set_accelerometer_client = rospy.ServiceProxy("Create/accelerometer/enable", set_int)
   set_accelerometer_client(TIME_STEP)
   rospy.loginfo("accelerometer enabled")
except rospy.ServiceException as e:
   rospy.logerr("accelerometer Service call failed: %s"%e)


################## enable camera ##################

rospy.wait_for_service("Create/camera/enable")
try:
   set_camera_client = rospy.ServiceProxy("Create/camera/enable", set_int)
   set_camera_client(TIME_STEP)
   rospy.loginfo("camera enabled")
except rospy.ServiceException as e:
   rospy.logerr("camera Service call failed: %s"%e)

################## enable gyro ##################

rospy.wait_for_service("Create/gyro/enable")
try:
   set_gyro_client = rospy.ServiceProxy("Create/gyro/enable", set_int)
   set_gyro_client(TIME_STEP)
   rospy.loginfo("gyro enabled")
except rospy.ServiceException as e:
   rospy.logerr("gyro Service call failed: %s"%e)


rate = rospy.Rate(10)
while not rospy.is_shutdown():
   try:
      timeStepClient(TIME_STEP)
      # rospy.loginfo("Hi")
      rate.sleep()
   except rospy.ServiceException as e:
      rospy.logerr("timestep service call failed: %s"%e)
      break


# rospy.spin()