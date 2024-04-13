#include"ros/ros.h"
/*
    ros::NodeHandle delParam()
    ros::param del()
*/

int main(int argc,char*argv[])
{
    ros::init(argc,argv,"parameterdel");
    ros::NodeHandle nh;
    //ros::NodeHandle
    bool falg1 = nh.deleteParam("radius");
    if(falg1){
        ROS_INFO("delete one succussful");
    }else{
        ROS_INFO("delete one unsuccussful");
    }
    //by ros::param
    bool falg2 = ros::param::del("radius_two");
    if(falg2){
        ROS_INFO("delete two succussful");
    }else{
        ROS_INFO("delete two unsuccussful");
    }

    return 0;
}