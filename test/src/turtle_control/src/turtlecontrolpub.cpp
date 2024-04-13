#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#define PI 3.14159265358979323846

int main(int argc,char*argv[]){
    ros::init(argc,argv,"controlpub");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel",2);
    ros::Rate rate(1);
    // geometry_msgs::Twist msg;
    // msg.linear.x = 1.0;
    // msg.linear.y = 1.0;
    // msg.linear.z = 0.0;
    // msg.angular.x = 0.0;
    // msg.angular.y = 0.0;
    // msg.angular.z = 0.5;
    int idx = 0;
    while(ros::ok()){
        geometry_msgs::Twist twist;
        twist.linear.x=1.0;
        twist.angular.z = 0.0;
        idx ++;


        if(idx == 5){
            idx = 0;
            twist.linear.x = 0.0;
            twist.angular.z = PI / 2;
            // twist.linear.y = 1.0;
            
        }

        pub.publish(twist);
        // ROS_INFO("thelinear x :%.2f the angalar z : %.2f",twist.linear.x,twist.angular.z);
        rate.sleep();
        // ros::spinOnce();
    }
    return 0;
        
}