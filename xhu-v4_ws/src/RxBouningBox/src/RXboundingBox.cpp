/*****************************************************************************************************
#功能对坐标系进行转换后存储
＃作者：朱兴建 , 李美斌
世界坐标系正北为Ｙ，正东为Ｘ，载体坐标系　前进方向为Ｙ，与Ｙ垂直的右边为Ｘ．
航向角是以正东方向（Ｘ），到前进方向的夹角，逆时针方向
车身坐标系是以车头前进方向为x，左边为y，跟摄像头有一个90度的转换
在大地坐标系下，x方向大概是40多万，y方向大概是300多万
这个程序是储存直线的
*************************************************************************************************/
#include<ros/ros.h>
#include<vector>
#include<iostream>
#include <cmath>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include "darknet_ros_msgs/BoundingBoxes.h"
#include "darknet_ros_msgs/BoundingBox.h"
#include <geometry_msgs/Pose2D.h>
#include <iomanip>
#include"RxBouningBox/point.h"
#include"RxBouningBox/point_array.h"
#include<geometry_msgs/Pose.h>
#include<geometry_msgs/PoseArray.h>
const float D2R = 3.1415926/180;
const float dd = 0.22;//转换车身坐标
class Position
{
  public:
  double x = 0.0;
  double y = 0.0;
};//申明位置类，用来储存绝对的坐标点
double X = 0.0;//定义的绝对坐标ｘ;
double Y = 0.0;//定义的绝对坐标y;
float  theta = 0.0;//定义航向角;
double  l_x = 0.0;//定义的车身坐标ｘ;是以车头的前进方向为x,左边为y,
double  l_y = 0.0;//定义的车身坐标y;
double  r_x = 0.0;
double  r_y =0.0;
std::vector<Position> left;//定义的ｖｅｃｔｏｒ数组类，来储存左边和右边的距离值
std::vector<Position> right;
std::vector<Position> left11;
std::vector<Position> right11;//定义vector数组类，来储存数据的所有坐标点
double gr_x = 0.0;
double gr_y = 0.0;//设置的一进循环就直接把值转化为绝对坐标系
double gl_x = 0.0;
double gl_y = 0.0;
uint8_t FPS = 0;//计算帧数第一帧
uint8_t count1 = 0;//第一帧标志位
uint8_t count2 = 0;
uint8_t count3 = 0;
uint8_t r_flag = 0;//定义的比较标志位，置1才执行比较
uint8_t l_flag = 0;
uint8_t c_flag = 0;
uint8_t lflag = 0;//设置的循环遍历的存储标志位
uint8_t rflag = 0;
uint8_t cflag = 0;
Position left_;//申明类的对象left_和right_
Position right_;
Position left11_;
Position right11_;//存原始的点
class p_and_s //声明一个类 来实现一个节点订阅和发布消息
{
public:
  p_and_s()
  {
   Pub_point = nh.advertise<geometry_msgs::PoseArray>("/point",50);//申明订阅者和发布者，发布和订阅的队列长度要一样，不然会数据延迟
   Sub_imu = nh.subscribe("/canalystii_ros/vehicle_Pose",50,&p_and_s::CallBack_GPS,this);
   Sub_BX = nh.subscribe("/darknet_ros/bounding_boxes",50,&p_and_s::CallBack,this);
  }
  void CallBack(const darknet_ros_msgs:: BoundingBoxes::ConstPtr &msg)//bounding boxes 回调函数，接收距离数据实现坐标转换和发布
{
  if(FPS == 1 && count1 !=0 )
  {
    l_flag = 1;
    count1 = 0;
  }
  if(FPS == 1 && count2 !=0)
  {
    r_flag = 1;
    count2 = 0;
  }
   if(FPS == 1 && count3 !=0)
  {
    c_flag = 1;
    count3 = 0;
  }//只进一次，来储存第一帧的点
  for (uint8_t i = 0; i < msg->bounding_boxes.size(); i++)//循环遍历每一个框，
  { 
    if(msg->bounding_boxes[i].distancex > 0 && msg->bounding_boxes[i].ymax > 298 && X > 0)//当在直线时，分左右
    {     
          r_x = (msg->bounding_boxes[i].distancey)/100.0-dd;//将每次来的值从相机坐标系转化为车身坐标系，并且将距离单位转化为m
          r_y = -(msg->bounding_boxes[i].distancex)/100.0;
          gr_x = X + r_x*cos(theta*D2R) - r_y*sin(theta*D2R);//将进来的值，转化为绝对坐标系
          gr_y = Y + r_y*cos(theta*D2R) + r_x*sin(theta*D2R);
          // right11_.x = gr_x;
          // right11_.y = gr_y;
          // right11.push_back(right11_);
      if (r_flag == 0 )//将来的第一帧，近的框的坐标直接放入，vector里面
      { 
        right_.x =  X + r_x*cos(theta*D2R) - r_y*sin(theta*D2R);//将识别的坐标点转换到绝对坐标系
        right_.y =  Y + r_y*cos(theta*D2R) + r_x*sin(theta*D2R);
        right.push_back(right_);
        count2 = 1;
      }
      if (r_flag ==1 )//走第二帧开始，来的的每一个点，都去与vector数组里面的每一个值比较，只要有一个距离小于2，将存入标志位值1，并退出循环且这个点不放入ｖｅｃｔｏｒ
      { 
        for (std::vector<Position>::iterator it = right.begin();it!= right.end();it++)//循环遍历比较
          {
            if (pow(((*it).x - gr_x),2) + pow(((*it).y - gr_y),2) < 1 )
            {
              (*it).x = ((*it).x + gr_x)/2;//对每次最后的一个值，进行均值的求解
              (*it).y = ((*it).y + gr_y)/2;
              rflag = 1;
              break;
            }            
          }
          if(rflag == 0)//当来的点，都不满足上面的条件时．rflag = 0,将此点存入
          {
            right_.x = gr_x;//将识别的坐标点转换到绝对坐标系
            right_.y = gr_y;
             right.push_back(right_);
          }
      }
    } 
    ///右边改  结束************************************************************/////////////////////////////////
    if (msg->bounding_boxes[i].distancex < 0 && msg->bounding_boxes[i].ymax > 298 && X > 0)
    {
          l_x = (msg->bounding_boxes[i].distancey)/100.0-dd;//将坐标值赴给车身坐标系并转化为ｍ为单位
          l_y = -(msg->bounding_boxes[i].distancex)/100.0;
          gl_x = X + l_x*cos(theta*D2R) - l_y*sin(theta*D2R);//将识别的坐标点转换到绝对坐标系
          gl_y = Y + l_y*cos(theta*D2R) + l_x*sin(theta*D2R);
          // left11_.x = gl_x;
          // left11_.y = gl_y;
          // left11.push_back(left11_);
     if (l_flag == 0)
      {
        left_.x = X + l_x*cos(theta*D2R) - l_y*sin(theta*D2R);//将识别的坐标点转换到绝对坐标系
        left_.y = Y + l_y*cos(theta*D2R) + l_x*sin(theta*D2R);
        left.push_back(left_);
        count1 = 1;  
      } 
      if (l_flag ==1)
      { 
          for (std::vector<Position>::iterator it = left.begin();it!= left.end();it++)
          {
            if (pow(((*it).x - gl_x),2) + pow(((*it).y - gl_y),2) < 1 )
            {
            (*it).x = ((*it).x + gl_x)/2;
            (*it).y = ((*it).y + gl_y)/2;
              lflag = 1;
              break;
            }
          }
          if(lflag == 0)
          {
            left_.x = gl_x;//将识别的坐标点转换到绝对坐标系
            left_.y = gl_y;
            left.push_back(left_);
          }
      } 
    }  
  } 
        float th = 0.0;
        double c_x = 0.0;
        double c_y = 0.0;
      if (right.size() == 1)// 当识别距离的范围就只能看到一个锥桶时
      {
        if(c_flag == 0)
        {
          c_x = X;
          c_y = Y;
        if(X != 0)
        {   
          p.position.x = X;
          p.position.y = Y;
          center.poses.push_back(p);
        }
        p.position.x = right[0].x - 1.5*sin(theta*D2R);
        p.position.y = right[0].y  + 1.5*cos(theta*D2R) ;
        center.poses.push_back(p);
        count3 = 1;
        }
        if (c_flag ==1)
        { 
            c_x = X;
            c_y = Y;
          for (auto it = center.poses.begin();it!= center.poses.end();it++)
          {
            if (pow(((*it).position.x - c_x),2) + pow(((*it).position.y - c_y),2) < 2 )
            {
              (*it).position.x = ((*it).position.x + c_x)/2;
              (*it).position.y = ((*it).position.y + c_y)/2;
              cflag = 1;
              break;
            }
          }
          if(cflag == 0)
          {
            p.position.x = c_x;
            p.position.y = c_y;
            center.poses.push_back(p);
          }
       }
      }  
    if(right.size() >= 2)//偏移算法 //////////////////////////////// start
    {
      
      for (uint8_t j = right.size()-2;j < right.size()-1;++j)
      {
        float th = 0.0;
        double c_x = 0.0;
        double c_y = 0.0;
        th = atan((right[j+1].y-right[j].y)/(right[j+1].x-right[j].x));
        if(th < 0)
        {
          if(right[j+1].x > right[j].x && right[j+1].y < right[j].y)// 4 xiangxian
          {
            c_x = right[j+1].x - 1.5*sin(th);
            c_y = right[j+1].y + 1.5*cos(th);
          }
          if(right[j+1].x < right[j].x && right[j+1].y > right[j].y) //2 xiangxian
          {
            c_x = right[j+1].x + 1.5*sin(th);
            c_y = right[j+1].y - 1.5*cos(th);
          }
        }
        if(th >= 0)
        {
          if(right[j+1].x > right[j].x && right[j+1].y > right[j].y)//1  xiangxian
          {
            c_x = right[j+1].x - 1.5*sin(th);
            c_y = right[j+1].y + 1.5*cos(th);
          }
          if(right[j+1].x < right[j].x && right[j+1].y < right[j].y)//3 xiangxian 
          {
            c_x = right[j+1].x + 1.5*sin(th);
            c_y = right[j+1].y - 1.5*cos(th);
          }
        }
        if(c_flag == 0)
        {
        p.position.x = c_x;
        p.position.y = c_y;
        center.poses.push_back(p);
        count3 = 1;

        }
        if (c_flag ==1)
        { 
          for (auto it = center.poses.begin();it!= center.poses.end();it++)
          {
            if (pow(((*it).position.x - c_x),2) + pow(((*it).position.y - c_y),2) < 2 )
            {
              (*it).position.x = ((*it).position.x + c_x)/2;
              (*it).position.y = ((*it).position.y + c_y)/2;
              cflag = 1;
              break;
            }
          }
          if(cflag == 0)
          {
            p.position.x = c_x;
            p.position.y = c_y;
            center.poses.push_back(p);
          }
        } 
      }
    }  ////// end ////
  FPS = 1;
  lflag = 0;
  rflag = 0;
  cflag = 0;//循环完了，之后将标志位清零
  // for (auto it = center.poses.begin();it!= center.poses.end();it++)
  //     {
  //       std::cout<<center.poses.size()<<" ";
  //       std::cout<<"center_x = "<<std::setprecision(8)<<(*it).position.x<<" ";
  //       std::cout<<"center_y = "<<std::setprecision(9)<<(*it).position.y<<std::endl;
  //     }
for (std::vector<Position>::iterator it = right.begin();it!= right.end();it++)
      {
        std::cout<<right.size()<<" ";
        std::cout<<"right_x = "<<std::setprecision(8)<<(*it).x<<" ";
        std::cout<<"right_y = "<<std::setprecision(9)<<(*it).y<<std::endl;
      }
      for (std::vector<Position>::iterator it = left.begin();it!= left.end();it++)
      {
        std::cout<<left.size()<<" ";
        std::cout<<"left_x = "<<std::setprecision(8)<<(*it).x<<" ";
        std::cout<<"left_y = "<<std::setprecision(9)<<(*it).y<<std::endl;
      }
  std::cout<<"一帧结束 = "<<std::endl;
   Pub_point.publish(center);//发布规划的点的坐标
}
void CallBack_GPS(const geometry_msgs::Pose2D::ConstPtr &msg)//gps回调函数，订阅gps信息
{
     Y = msg->y;
     X = msg->x;
     theta = msg->theta;
}
 private:
    ros::NodeHandle nh;
    ros::Publisher Pub_point;
    ros::Subscriber Sub_imu;
    ros::Subscriber Sub_BX; 
    geometry_msgs::PoseArray  center;
    geometry_msgs::Pose p;
    //申明句炳，发布者，订阅者和储存偏移点的坐标
};
int main(int argc, char *argv[])
{
  ros::init(argc,argv,"RxNode");//初始化节点
  p_and_s SAPObject;//调用该类
  ros::spin();//一直在此处循环
  return 0;
}
