#include "ros/ros.h"
#include "serverclient/addints.h"
/*
    the accomplishment of server:
        1,include
        2,initialize ROS node
        3,build node handle
        4,build server object
        5,handle the request and response
        6,spin()

*/

bool donums(serverclient::addints::Request& request,
serverclient::addints::Response& response){
    // 1,handle request
    int num1 = request.num1;
    int num2 = request.num2;
    ROS_INFO("the nums will be computed are :%d %d",num1,num2);
    //2,handle response
    int sum = num1 + num2;
    response.sum = sum;
    ROS_INFO("the sum is : %d",sum);

    return true;
}

int main(int argc, char * argv[])
{
    // 2,initialize ROS node
    ros::init(argc,argv,"serverobj");
    // 3,build node handle
    ros::NodeHandle nh;
    // 4,build server object
    ros::ServiceServer server = nh.advertiseService("machine",donums);
    // 5,handle the request and response
    ROS_INFO("this is server");
    // 6,spin()
    ros::spin();

    return 0;
}
