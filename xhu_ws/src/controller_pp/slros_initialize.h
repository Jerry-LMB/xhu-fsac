#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block Controller_PP/Subscribe
extern SimulinkSubscriber<geometry_msgs::Pose2D, SL_Bus_Controller_PP_geometry_msgs_Pose2D> Sub_Controller_PP_2055;

// For Block Controller_PP/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_Controller_PP_geometry_msgs_Twist> Sub_Controller_PP_2057;

// For Block Controller_PP/Subscribe2
extern SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_Controller_PP_std_msgs_Float32MultiArray> Sub_Controller_PP_3052;

// For Block Controller_PP/Publish1
extern SimulinkPublisher<std_msgs::Int16MultiArray, SL_Bus_Controller_PP_std_msgs_Int16MultiArray> Pub_Controller_PP_3150;

void slros_node_init(int argc, char** argv);

#endif
