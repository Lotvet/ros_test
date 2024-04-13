#include"ros/ros.h"
#include"talklisten/Person.h"

void dolisten(const talklisten::Person::ConstPtr &person){
    ROS_INFO("the personlistentwo is : %s",person->name.c_str() );
}

int main(int argc, char* argv[]){
    ros::init(argc,argv,"personlistentwo");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<talklisten::Person>("communicate",10,dolisten);
    ros::spin();

    return 0;
}