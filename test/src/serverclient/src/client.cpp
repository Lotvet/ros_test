#include "ros/ros.h"
#include "serverclient/addints.h"
/*
    the accomplishment of client:
        1,include
        2,initialize ROS node
        3,build node handle
        4,build client object
        5,post request and handle the response

    dynamic accomplishment
        1,format: rosrun *** *** num1 num2

*/
int main(int argc, char * argv[])
{
    // 2,initialize ROS node
    ros::init(argc, argv, "clientobj");
    // 3,build node handle
    ros::NodeHandle nh;
    // 4,build client object
    ros::ServiceClient client = nh.serviceClient<serverclient::addints>("machine");
    // 5,post request and handle the response
    serverclient::addints addi;
    //5.1,request
    addi.request.num1 = atoi(argv[1]);
    addi.request.num2 = atoi(argv[2]);
    // addi.request.num1 = 1;
    // addi.request.num2 = 2;
    //5.2, response
    client.waitForExistence();//hang on
    bool flag = client.call(addi);
    if(flag)
    {
        ROS_INFO("the response successful!!!");
        //print result
        ROS_INFO("response result sum = %d",addi.response.sum);
    }else{
        ROS_INFO("the response failed!!!");
    }

    return 0;
}
