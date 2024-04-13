#include"ros/ros.h"
#include"helloworld/orghead.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"orgheader");
    orghead_node::orgheadpub pubobject;
    
    pubobject.run();
    return 0;
}
