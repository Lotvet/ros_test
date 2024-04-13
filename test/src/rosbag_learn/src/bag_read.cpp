#include <ros/ros.h>
#include "rosbag/bag.h"
#include"rosbag/view.h"
#include "std_msgs/String.h"
#include "std_msgs/Int32.h"

int main(int argc, char * argv[])
{
    ros::init(argc, argv, "bagread");
    ros::NodeHandle nh;
    rosbag::Bag bag;
    bag.open("firstbag.bag",rosbag::BagMode::Read);
    //start reading
    //first get the set of msgs the get every segment
    for(auto &&n : rosbag::View(bag))
    {
        std::string topic = n.getTopic();
        ros::Time time = n.getTime();
        std_msgs::String::ConstPtr ptr = n.instantiate<std_msgs::String>();

        ROS_INFO("the data form firstbag.bag are: topicname== %s, time == %.2f, msg== %s",
            topic.c_str(),
            time.toSec(),
            ptr->data.c_str()
            );
    }


    bag.close();
    ros::spin();
    ros::shutdown();
    return 0;
}
