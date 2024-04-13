#include"ros/ros.h"
#include"turtlesim/Pose.h"

void dopose(const turtlesim::Pose::ConstPtr& p){
    ROS_INFO("the pose of turtle-travel: x==%.2f y==%.2f theta==%.2f linear_velocity==%.2f angular_velocity==%.2f",
    p->x,p->y,p->theta,p->linear_velocity,p->angular_velocity);
    // ros::Rate rate(1);
    // rate.sleep();
}

int main(int argc, char *argv[]){
    ros::init(argc, argv, "controlsub");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<turtlesim::Pose>("/turtle1/pose",100,dopose);

    ros::spin();

    return 0;
}