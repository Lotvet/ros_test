#include"ros/ros.h"
#include"rosbag/bag.h"
#include"std_msgs/String.h"

int main(int argc , char *argv[])
{
    ros::init(argc, argv , "bagwrite");
    ros::NodeHandle nh;
    rosbag::Bag bag;
    bag.open("firstbag.bag",rosbag::BagMode::Write);
    std_msgs::String msg;
    msg.data = "hello world!";
    // bag.write(topic_name,time_stamp,data);
    bag.write("/chatter",ros::Time::now(),msg);
    bag.close();

    return 0;
}