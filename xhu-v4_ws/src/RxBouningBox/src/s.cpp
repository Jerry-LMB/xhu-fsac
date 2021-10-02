/******************************************************
#功能对坐标系进行转换后存储
＃作者：朱兴建,李美斌
世界坐标系正北为Ｙ，正东为Ｘ，载体坐标系　前进方向为Ｙ，与Ｙ垂直的右边为Ｘ．
航向角是以正东方向（Ｘ），到前进方向的夹角，逆时针方向
车身坐标系是以车头前进方向为x，左边为y，跟摄像头有一个90度的转换
******************************************************/
#include<ros/ros.h>
#include<vector>
#include<iostream>
#include <cmath>
#include "darknet_ros_msgs/BoundingBoxes.h"
#include "darknet_ros_msgs/BoundingBox.h"
#include <geometry_msgs/Pose2D.h>
#include <iomanip>
#include<geometry_msgs/Pose.h>
#include<geometry_msgs/PoseArray.h>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
const float D2R = 3.1415926/180;
const float dd = 0.22;//转换车身坐标
uint8_t count4 = 0;//红蓝锥桶储存比较位 当红蓝都有新的进来时，进行求平均值
uint8_t count5 = 0;
class Position
{
  public:
  double x = 0.0;
  double y = 0.0;
};//申明位置类，用来储存绝对的坐标点
double X = 0.0;//定义的绝对坐标ｘ;
double Y = 0.0;//定义的绝对坐标y;
float  theta = 0.0;//定义航向角;
double  x = 0.0;//定义的车身坐标ｘ;是以车头的前进方向为x,左边为y,
double  y = 0.0;//b_是指蓝色的锥桶，r_是指红色的锥桶
uint8_t r_flag = 0;//定义的比较标志位，置1才执行比较
uint8_t b_flag = 0;
uint8_t c_flag = 0;
std::vector<Position> red;//定义的ｖｅｃｔｏｒ数组类，来储存左边和右边的距离值，不同的值
std::vector<Position> blue;
double g_x = 0.0;
double g_y = 0.0;//设置的一进循环就直接把值转化为绝对坐标系
uint8_t FPS = 0;//计算帧数第一帧
uint8_t count1 = 0;//第一帧标志位
uint8_t count2 = 0;
uint8_t count3 = 0;
uint8_t bflag = 0;//设置的循环遍历的存储标志位
uint8_t rflag = 0;
uint8_t cflag = 0;
Position red_;//申明类的对象left_和right_
Position blue_;
/* 比较函数对检测的锥桶点进行储存*/
class p_and_s
{ 
   private:
    ros::NodeHandle nh;
    ros::Publisher Pub_point;
    ros::Subscriber Sub_imu;
    ros::Subscriber Sub_BX; 
    geometry_msgs::PoseArray  center;
    geometry_msgs::Pose p;
  public:
  p_and_s()
  {
   Pub_point = nh.advertise<geometry_msgs::PoseArray>("/point",50);//modify 50 suoyoude duiliechangdu yao yiyang 
   Sub_imu = nh.subscribe("/canalystii_ros/vehicle_Pose",50,&p_and_s::CallBack_GPS,this);
   Sub_BX = nh.subscribe("/darknet_ros/bounding_boxes",50,&p_and_s::CallBack,this);
  }
  void CallBack_GPS(const geometry_msgs::Pose2D::ConstPtr &msg)
{
     Y = msg->y;
     X = msg->x;
     theta = msg->theta;//jia  ge  bianzhiwei 
}
void CallBack(const darknet_ros_msgs:: BoundingBoxes::ConstPtr & msg)
{
  if(FPS == 1 && count1 !=0 )
  {
    b_flag = 1;
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
  for (uint8_t i = 0; i < msg->bounding_boxes.size(); i++)
  { 
    if((msg->bounding_boxes[i].Class == "red") == 1 && msg->bounding_boxes[i].ymax >=330 && X > 0)//改为订阅颜色来存储
    {     
          x = (msg->bounding_boxes[i].distancey)/100.0-dd;//将每次来的值从相机坐标系转化为车身坐标系，并且将距离单位转化为m
          y = -(msg->bounding_boxes[i].distancex)/100.0;
          g_x = X + x*cos(theta*D2R) - y*sin(theta*D2R);//将进来的值，转化为绝对坐标系
          g_y = Y + y*cos(theta*D2R) + x*sin(theta*D2R);
      if (r_flag == 0 )//将来的第一帧，近的框的坐标直接放入，vector里面
      { 
        red_.x =  X + x*cos(theta*D2R) - y*sin(theta*D2R);//将识别的坐标点转换到绝对坐标系
        red_.y =  Y + y*cos(theta*D2R) + x*sin(theta*D2R);
        red.push_back(red_);
        count2 = 1;
      }
      if (r_flag ==1 )//走第二帧开始，来的的每一个点，都去与vector数组里面的每一个值比较，只要有一个距离小于2，将存入标志位值1，并退出循环且这个点不放入ｖｅｃｔｏｒ
      { 
        for (std::vector<Position>::iterator it = red.begin();it!= red.end();it++)//循环遍历比较
          {
            if (pow(((*it).x - g_x),2) + pow(((*it).y - g_y),2) < 1 )
            {
              (*it).x = ((*it).x + g_x)/2;
              (*it).y = ((*it).y + g_y)/2;//每次对最新的点，取平均值
              rflag = 1;
              break;
            }            
          }
          if(rflag == 0)//当来的点，都不满足上面的条件时．rflag = 0,将此点存入
          {
            red_.x = g_x;//将识别的坐标点转换到绝对坐标系
            red_.y = g_y;
            red.push_back(red_); 
            count4 = 1;
          }
      }
    }   
    ///红色改  结束****************************************//////////////////////////////////////
    if ((msg->bounding_boxes[i].Class == "blue") == 1  && msg->bounding_boxes[i].ymax >= 330 && X > 0 )
    {
          x = (msg->bounding_boxes[i].distancey)/100.0-dd;//将坐标值赴给车身坐标系并转化为ｍ为单位
          y = -(msg->bounding_boxes[i].distancex)/100.0;
          g_x = X + x*cos(theta*D2R) - y*sin(theta*D2R);//将识别的坐标点转换到绝对坐标系
          g_y = Y + y*cos(theta*D2R) + x*sin(theta*D2R);
     if (b_flag == 0)
      {
        blue_.x = g_x;//将识别的坐标点转换到绝对坐标系
        blue_.y = g_y;
        blue.push_back(blue_);
        count1 = 1;  //将来的第一帧存入去
      } 
      if (b_flag ==1)
      { 
          for (std::vector<Position>::iterator it = blue.begin();it!= blue.end();it++)
          {
            if (pow(((*it).x - g_x),2) + pow(((*it).y - g_y),2) < 2 )
            {
            (*it).x = ((*it).x + g_x)/2;//每次将距离小的点，进 行均值求解
            (*it).y = ((*it).y + g_y)/2;
              bflag = 1;
              break;
            }
          }
          if(bflag == 0)
          {
            blue_.x = g_x;//将最新的点，存入vector中
            blue_.y = g_y;
            blue.push_back(blue_);
            count5 = 1;
          }
      } 
    }  
  } 

  ///////////// 下面开始就是存储和偏移的中心点///////////////////////////////////////
    if (blue.size() >=2 && X >0)
    {
       x = (blue[blue.size()-1].x  + blue[blue.size()-2].x + red[red.size()-1].x + red[red.size()-2].x)/4;
       y = (blue[blue.size()-1].y + blue[blue.size()-2].y + red[red.size()-1].y + red[red.size()-2].y)/4;//利用重心法进行点的发布
       //求平均值
       //x = (blue[blue.size()-1].x  + red[red.size()-1].x)/2;
       //y = (blue[blue.size()-1].y  + red[red.size()-1].y)/2;
       if (c_flag == 0)
       {
        p.position.x = X;
        p.position.y = Y;
        center.poses.push_back(p);
        p.position.x = x;
        p.position.y = y;
        center.poses.push_back(p);
        count3 = 1;
       }
    if (c_flag ==1)
        { 
          for (auto it = center.poses.begin();it!= center.poses.end();it++)
          {
            if (pow(((*it).position.x - x),2) + pow(((*it).position.y - y),2) < 2 )
            {
              // (*it).position.x = ((*it).position.x + c_x)/2;
              // (*it).position.y = ((*it).position.y + c_y)/2;
              cflag = 1;
              break;
            }
          }
          if(cflag == 0 && count4 == 1 && count5 == 1)
          {
            p.position.x = x;//将最新的点，存入vector中
            p.position.y = y;
            center.poses.push_back(p);
            count4 = 0;
            count5 = 0;
          }
        } 
    }
    //***************************************///////////////结束  ////////////////
    //经过上面两次判断，直接就能把偏移的中心点，存入center中
    for (std::vector<Position>::iterator it = red.begin();it!= red.end();it++)
      {
        std::cout<<red.size()<<" ";
        std::cout<<"red_x = "<<std::setprecision(8)<<(*it).x<<" ";
        std::cout<<"red_y = "<<std::setprecision(9)<<(*it).y<<std::endl;
      }
    for (std::vector<Position>::iterator it = blue.begin();it!= blue.end();it++)
      {
        std::cout<<blue.size()<<" ";
        std::cout<<"blue_x = "<<std::setprecision(8)<<(*it).x<<" ";
        std::cout<<"blue_y = "<<std::setprecision(9)<<(*it).y<<std::endl;
      }//每次一帧来循环完之后，打印vector数组里面的值,剔除了相同的点
    for (auto it = center.poses.begin();it!= center.poses.end();it++)
      {
        std::cout<<center.poses.size()<<" ";
        std::cout<<"center_x = "<<std::setprecision(8)<<(*it).position.x<<" ";
        std::cout<<"center_y = "<<std::setprecision(9)<<(*it).position.y<<std::endl;
      }
      FPS = 1;
      bflag = 0;
      rflag = 0;
      cflag = 0;//循环完了，之后将标志位清零
      std::cout<<"一帧结束 = "<<std::endl;  
      Pub_point.publish(center);// publish 
}

};
int main(int argc, char **argv)
{
  ros::init(argc,argv,"S_node");//  初始化节点
  ros::NodeHandle nh; //申明句柄节点
  p_and_s SAPObject; //运行整个主函数，接受数据处理后发布出去
  ros::spin(); //循环等待
  return 0;
}
