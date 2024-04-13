#include"ros/ros.h"

/*
    add and modify parameters:
        requirement:set the common-parameters.type.radius
        accomplishment:
            ros::NodeHandle  setParam("key",value)
            ros::param  set("key",value)
        if want to modify one parameter,just cover it
*/


int main(int argc,char* argv[])
{
    //initionalize
    ros::init(argc, argv, "paramset");
    //bulid ros nodehandle
    ros::NodeHandle nh;
    //add parameters
    //1,accomplished by nh
    nh.setParam("type","paramradius");
    nh.setParam("radius",0.16);
    // ROS_INFO("the one is : %.3f",radius);
    //2,accomplished by ros::param
    ros::param::set("type_param","paramradiustwo");
    ros::param::set("radius_two",0.15);
    // ROS_INFO("the two is : %.3f",radius_two);
    //modify parameters
    // nh.setParam("radius",0.2);

    return 0;
}