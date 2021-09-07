#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "Motion_Planning";

// For Block Motion_Planning/Planning/Subscribe
SimulinkSubscriber<geometry_msgs::Pose2D, SL_Bus_Motion_Planning_geometry_msgs_Pose2D> Sub_Motion_Planning_1823;

// For Block Motion_Planning/Planning/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_Motion_Planning_geometry_msgs_Twist> Sub_Motion_Planning_1825;

// For Block Motion_Planning/Planning/Subscribe2
SimulinkSubscriber<geometry_msgs::PoseArray, SL_Bus_Motion_Planning_geometry_msgs_PoseArray> Sub_Motion_Planning_1904;

// For Block Motion_Planning/Planning/Publish
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_Motion_Planning_std_msgs_Float32MultiArray> Pub_Motion_Planning_1797;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

