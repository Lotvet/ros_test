#include"ros/ros.h"
#include"tf2_ros/buffer.h"
#include"tf2_ros/transform_listener.h"
#include"geometry_msgs/TransformStamped.h"
#include"geometry_msgs/PointStamped.h"
#include"tf2_geometry_msgs/tf2_geometry_msgs.h"
#include"geometry_msgs/Twist.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv , "turtles_turtle1_control");
    ros::NodeHandle nh;
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener suber(buffer);

    ros::Publisher pub=nh.advertise<geometry_msgs::Twist>("/turtle2/cmd_vel",100);

    ros::Rate rate(1);
    while(ros::ok())
    {
        try
        {
            // 解析 son1 中的点相对于 son2 的坐标
            // son1 相对于 world，以及 son2 相对于 world 的关系是已知的，turtle2
                        // ROS_INFO("hellowrold");
            geometry_msgs::TransformStamped turtle2Toturtle1 = buffer.lookupTransform("turtle2","turtle1", ros::Time(0));
            // ROS_INFO("the system turtle2 to system turtle1::: the senior level name is: %s,the junior level name is : %s,the quaternion are(%.2f,%.2f,%.2f)",
            //     turtle2Toturtle1.header.frame_id.c_str(), //turtle2
            //     turtle2Toturtle1.child_frame_id.c_str(), //turtle1
            //     turtle2Toturtle1.transform.translation.x,
            //     turtle2Toturtle1.transform.translation.y,
            //     turtle2Toturtle1.transform.translation.z
            // );
            // ROS_INFO("hellowrold");

            geometry_msgs::Twist twist;        

            // now: get the linear speed and angle speed
            twist.linear.x = 1 * sqrt(pow(turtle2Toturtle1.transform.translation.x,2) + pow(turtle2Toturtle1.transform.translation.y,2));
            twist.angular.z = 1 * atan2(turtle2Toturtle1.transform.translation.y,turtle2Toturtle1.transform.translation.x);
            pub.publish(twist);
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
