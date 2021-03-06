// Copyright 1996-2020 Cyberbotics Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "ros/ros.h"

#include <webots_ros/Int32Stamped.h>

#include <webots_ros/set_float.h>
#include <webots_ros/set_int.h>

#include <webots_ros/robot_get_device_list.h>

#include <std_msgs/String.h>

#include <signal.h>
#include <stdio.h>

#define TIME_STEP 32

#define POSITION_INCREAMENT 0.7
#define TURN_INCREAMENT 0.3
#define BACK_SLOWDOWN 0.9

static int controllerCount;
static std::vector<std::string> controllerList;
static std::string controllerName;
static double lposition = 0;
static double rposition = 0;




ros::ServiceClient leftWheelClient;
webots_ros::set_float leftWheelSrv;

ros::ServiceClient lbWheelClient;
webots_ros::set_float lbWheelSrv;


ros::ServiceClient rightWheelClient;
webots_ros::set_float rightWheelSrv;

ros::ServiceClient rbWheelClient;
webots_ros::set_float rbWheelSrv;

ros::ServiceClient timeStepClient;
webots_ros::set_int timeStepSrv;

ros::ServiceClient enableKeyboardClient;
webots_ros::set_int enableKeyboardSrv;

// catch names of the controllers availables on ROS network
void controllerNameCallback(const std_msgs::String::ConstPtr &name) {
  controllerCount++;
  controllerList.push_back(name->data);
  ROS_INFO("Controller #%d: %s.", controllerCount, controllerList.back().c_str());
}

void quit(int sig) {
  enableKeyboardSrv.request.value = 0;
  enableKeyboardClient.call(enableKeyboardSrv);
  timeStepSrv.request.value = 0;
  timeStepClient.call(timeStepSrv);
  ROS_INFO("User stopped the 'keyboard_teleop' node.");
  ros::shutdown();
  exit(0);
}

void keyboardCallback(const webots_ros::Int32Stamped::ConstPtr &value) {
  int key = value->data;
  int send = 0;
  float back_slowdown = 1;

  switch (key) {
    //LEFT
    case 314:
      lposition += -TURN_INCREAMENT;
      rposition += TURN_INCREAMENT;
      back_slowdown = BACK_SLOWDOWN;
      send = 1;
      break;
    //RIGHT
    case 316:
      lposition += TURN_INCREAMENT;
      rposition += -TURN_INCREAMENT;
      back_slowdown = BACK_SLOWDOWN;
      send = 1;
      break;
    //FORWARD
    case 315:
      lposition += POSITION_INCREAMENT;
      rposition += POSITION_INCREAMENT;
      send = 1;
      break;
    //BACKWARD
    case 317:
      lposition += -POSITION_INCREAMENT;
      rposition += -POSITION_INCREAMENT;
      send = 1;
      break;
    case 312:
      ROS_INFO("END.");
      quit(-1);
      break;
    default:
      send = 0;
      break;
  }

  leftWheelSrv.request.value = lposition;
  rightWheelSrv.request.value = rposition;
  lbWheelSrv.request.value = back_slowdown * lposition;
  rbWheelSrv.request.value = back_slowdown * rposition;
  if (send) {
    if (!leftWheelClient.call(leftWheelSrv) || !rightWheelClient.call(rightWheelSrv) || 
        !lbWheelClient.call(lbWheelSrv) || !rbWheelClient.call(rbWheelSrv) || 
        !leftWheelSrv.response.success || !rightWheelSrv.response.success || 
        !lbWheelSrv.response.success || !rbWheelSrv.response.success)      
      ROS_ERROR("Failed to send new position commands to the robot.");
  }
  return;
}

int main(int argc, char **argv) {
  // create a node named 'keyboard_teleop' on ROS network
  ros::init(argc, argv, "keyboard_teleop", ros::init_options::AnonymousName);
  ros::NodeHandle n;

  signal(SIGINT, quit);

  // subscribe to the topic model_name to get the list of availables controllers
  ros::Subscriber nameSub = n.subscribe("model_name", 100, controllerNameCallback);
  while (controllerCount == 0 || controllerCount < nameSub.getNumPublishers()) {
    ros::spinOnce();
    ros::Duration(0.5).sleep();
  }
  ros::spinOnce();

  // if there is more than one controller available, let the user choose
  if (controllerCount == 1)
    controllerName = controllerList[0];
  else {
    int wantedController = 0;
    std::cout << "Choose the # of the controller you want to use:\n";
    std::cin >> wantedController;
    if (1 <= wantedController && wantedController <= controllerCount)
      controllerName = controllerList[wantedController - 1];
    else {
      ROS_ERROR("Invalid number for controller choice.");
      return 1;
    }
  }
  // leave topic once it's not necessary anymore
  nameSub.shutdown();

  leftWheelClient = n.serviceClient<webots_ros::set_float>("pioneer3at/front_left_wheel/set_position");
  lbWheelClient = n.serviceClient<webots_ros::set_float>("pioneer3at/back_left_wheel/set_position");
  rightWheelClient = n.serviceClient<webots_ros::set_float>("pioneer3at/front_right_wheel/set_position");
  rbWheelClient = n.serviceClient<webots_ros::set_float>("pioneer3at/back_right_wheel/set_position");
  timeStepClient = n.serviceClient<webots_ros::set_int>("pioneer3at/robot/time_step");
  timeStepSrv.request.value = TIME_STEP;

  enableKeyboardClient = n.serviceClient<webots_ros::set_int>("pioneer3at/keyboard/enable");
  enableKeyboardSrv.request.value = TIME_STEP;
  ROS_INFO("tRYING KEYBOARD");
  if (enableKeyboardClient.call(enableKeyboardSrv) && enableKeyboardSrv.response.success) {
    ros::Subscriber sub_keyboard;
    sub_keyboard = n.subscribe("pioneer3at/keyboard/key", 1, keyboardCallback);
    ROS_INFO("Now");
    while (sub_keyboard.getNumPublishers() == 0) {
    }
    ROS_INFO("Keyboard enabled.");
    ROS_INFO("Use the arrows in Webots window to move the robot.");
    ROS_INFO("Press the End key to stop the node.");

    // main loop
    while (ros::ok()) {
      ros::spinOnce();
      if (!timeStepClient.call(timeStepSrv) || !timeStepSrv.response.success)
        ROS_ERROR("Failed to call service time_step for next step.");
    }
  } else
    ROS_ERROR("Could not enable keyboard, success = %d.", enableKeyboardSrv.response.success);

  enableKeyboardSrv.request.value = 0;
  if (!enableKeyboardClient.call(enableKeyboardSrv) || !enableKeyboardSrv.response.success)
    ROS_ERROR("Could not disable keyboard, success = %d.", enableKeyboardSrv.response.success);
  timeStepSrv.request.value = 0;
  timeStepClient.call(timeStepSrv);
  ros::shutdown();
  return (0);
}
