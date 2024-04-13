#include <ros/ros.h>
#include "talklisten/Person.h"
/*
    the accomplishment of listener in diy-way(just like normal way):
        1,including
        2,initialize ROS node
        3,build node handle
        4,build subscriber object
        5,edit subscriber  and handle data
        6,spin()
*/
void dopersonmsg(const talklisten::Person::ConstPtr& person){
    ROS_INFO("the person message is: %s,%d,%.2f,%d ",person->name.c_str(), person->age, person->height,person->accounts);
}

int main(int argc, char * argv[])
{
    //2,initialize ROS node
    ros::init(argc, argv, "thelistener");
    // 3,build node handle
    ROS_INFO("This is person subcriber!!!");
    // 4,build subscriber object
    ros::NodeHandle nh;
    // 5,edit subscriber  and handle data
    ros::Subscriber sub = nh.subscribe<talklisten::Person>("communicate",10,dopersonmsg);
    // 6,spin()
    ros::spin();
    ROS_INFO("the loop spinonce :-------111------");

    return 0;
}
