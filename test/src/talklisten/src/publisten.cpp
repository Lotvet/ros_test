#include "ros/ros.h"
#include "std_msgs/String.h"

/*
    the accomplishment of taler:
        1,including
        2,initialization
        3,build node handle
        4,build subscriber object
        5,process subscribed data
        6,spin()
*/

void domsg(const std_msgs::String::ConstPtr &msg){
    ROS_INFO("the data of subcriber subcribered is : %s" ,msg->data.c_str() );
}

int main(int argc, char * argv[])
{
    //initializtion
    ros::init(argc, argv, "listener");
    //3 node handle
    ros::NodeHandle nh;
    //4,build subcriber object 
    ros::Subscriber sub = nh.subscribe("fang",10,domsg);
    //5,process subscribed data
    ros::spin();
    
    return 0;
}
