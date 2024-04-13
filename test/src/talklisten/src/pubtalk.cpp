#include "ros/ros.h"
#include "std_msgs/String.h"
#include<sstream>
/*
    the accomplishment of taler:
        1,including
        2,initialization
        3,build node handle
        4,build publisher object
        5,edit publisher logical and publish data
*/
int main(int argc, char * argv[])
{
    // setlocal(LC_ALL,"");
    // 2,initialization
    ros::init(argc,argv,"pubtalker");
    // 3,build node handle
    ros::NodeHandle nh;
    // 4,build publisher object
    ros::Publisher pub = nh.advertise<std_msgs::String>("fang",10);
    // 5,edit publisher logical and publish data
    //the logical complication

    //first ,build published messeges
    std_msgs::String msg;
    //the rate
    ros::Rate rate(10);
    //set numbers
    int count = 0;
    //then loop, publish data
    ros::Duration(3).sleep();
    while(ros::ok() ){
        count++;
        std::stringstream ss;
        ss << "hello pubtalker ---> " << count;

        //converts the data in ss to a string
        msg.data= ss.str() ;

        //publish
        pub.publish(msg);
        //add 
        ROS_INFO("data published is : %s", ss.str().c_str() );

        rate.sleep();
        ros::spinOnce();//official advise,handing callback function
    } 

    return 0;
}
