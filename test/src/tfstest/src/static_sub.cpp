#include"ros/ros.h"
#include"tf2_ros/transform_listener.h"
#include"tf2_ros/buffer.h"
#include"geometry_msgs/PointStamped.h"
#include"tf2_geometry_msgs/tf2_geometry_msgs.h"

/*  
    订阅坐标系信息，生成一个相对于 子级坐标系的坐标点数据，转换成父级坐标系中的坐标点

    实现流程:
        1.包含头文件
        2.初始化 ROS 节点
        3.创建 TF 订阅节点
        4.生成一个坐标点(相对于子级坐标系)
        5.转换坐标点(相对于父级坐标系)
        6.spin()
*/

int main(int argc,char *argv[])
{
    // 2.初始化 ROS 节点
    ros::init(argc, argv , "static_suber");
    ros::NodeHandle nh;
    // 3.创建 TF 订阅节点
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener listener(buffer);

    ros::Rate rate(1);
    while(ros::ok() )
    {
        // 4.生成一个坐标点(相对于子级坐标系)
        geometry_msgs::PointStamped point_laser;
        point_laser.header.frame_id = "turtle1";
        point_laser.header.stamp = ros::Time(0.0);
        point_laser.point.x = 0.1;
        point_laser.point.y = 0.1;
        point_laser.point.z = 0;
        // 5.转换坐标点(相对于父级坐标系)
        //新建一个坐标点，用于接收转换结果 
        //---使用 try 语句或休眠，否则可能由于缓存接收延迟而导致坐标转换失败---
        try{
            geometry_msgs::PointStamped point_base;
            //第一个参数是被转换的坐标点 第二个参数是目标函数
            point_base = buffer.transform(point_laser,"world");
            ROS_INFO("the data after transform is : (%.2f, %.2f , %.2f), the line is : %s",point_base.point.x,point_base.point.y,point_base.point.z,point_base.header.frame_id.c_str());

        }
        catch(const std::exception& e)
        {
            ROS_INFO("--------The program error--------");
        }
        rate.sleep();
        ros::spinOnce();
    }
    
    return 0;
}