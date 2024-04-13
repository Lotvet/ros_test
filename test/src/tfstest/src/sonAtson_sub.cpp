#include"ros/ros.h"
#include"tf2_ros/buffer.h"
#include"tf2_ros/transform_listener.h"
#include"geometry_msgs/TransformStamped.h"
#include"geometry_msgs/PointStamped.h"
#include"tf2_geometry_msgs/tf2_geometry_msgs.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv , "sons_sub");
    ros::NodeHandle nh;
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener sub(buffer);

    ros::Rate rate(1);
    while(ros::ok())
    {
        try
        {
            // 解析 son1 中的点相对于 son2 的坐标
            // son1 相对于 world，以及 son2 相对于 world 的关系是已知的，
            geometry_msgs::TransformStamped son1Toson2 = buffer.lookupTransform("son2","son1", ros::Time::now());
            ROS_INFO("the system son1 to system son2::: the senior level name is: %s,the junior level name is : %s,the quaternion are(%.2f,%.2f,%.2f)",
                son1Toson2.header.frame_id.c_str(),
                son1Toson2.child_frame_id.c_str(),
                son1Toson2.transform.translation.x,
                son1Toson2.transform.translation.y,
                son1Toson2.transform.translation.z
                );

            //坐标点解析
            // 求 son1 与 son2中的坐标关系，又已知在 son1中一点的坐标，要求求出该点在 son2 中的坐标
            geometry_msgs::PointStamped psAtson1;
            psAtson1.header.stamp = ros::Time::now();
            psAtson1.header.frame_id = "son1";
            psAtson1.point.x = 1;
            psAtson1.point.y = 2;
            psAtson1.point.z = 3;

            geometry_msgs::PointStamped psAtson2 ;
            psAtson2 = buffer.transform(psAtson1,"son2");
            ROS_INFO("the site of son1 infect in son2 are :(%.2f,%.2f,%.2f,)",
                        psAtson2.point.x,
                        psAtson2.point.y,
                        psAtson2.point.z
                    ); 
        }
        catch(const std::exception& e)
        {
            ROS_INFO("---------something wrong--------");
        }
        rate.sleep();
        ros::spinOnce();
    }


    return 0;
}
