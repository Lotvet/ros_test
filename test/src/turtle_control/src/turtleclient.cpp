#include"ros/ros.h"
#include"turtlesim/Spawn.h"

int main(int argc , char *argv[])
{
    ros::init(argc , argv, "turtleclient");
    ros::NodeHandle nh;
    ros::ServiceClient client = nh.serviceClient<turtlesim::Spawn>("/spawn");
    turtlesim::Spawn spawn;
    spawn.request.x = 2.0;
    spawn.request.y = 5.0;
    spawn.request.theta = 2.0;
    spawn.request.name = "turtle2";

    //ensure the service well
    client.waitForExistence();
    bool flag  = client.call(spawn);
    if(flag){
        ROS_INFO("success build new turtle:%s",spawn.request.name.c_str());
    }
    else{
        ROS_INFO("build new turtle wrong");
    }
    ros::spinOnce();
    return 0;
}