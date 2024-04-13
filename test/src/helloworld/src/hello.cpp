#include"ros/ros.h"
#include"helloworld/hello.h"

namespace hello_node{

    void HelloPub::run(){
        ROS_INFO("hello first include files :");
    }
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv ,"hello_node");
    hello_node::HelloPub hellopub;
    hellopub.run();
    return 0;
}
