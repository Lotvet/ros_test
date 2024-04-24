#include "ros/ros.h"
#include "advanced/first_actionAction.h"
#include "actionlib/server/simple_action_server.h"

/*  
    需求:
        创建两个ROS节点，服务器和客户端，
        客户端可以向服务器发送目标数据N（一个整型数据）
        服务器会计算1到N之间所有整数的和，这是一个循环累加的过程，返回给客户端，
        这是基于请求响应模式的，
        又已知服务器从接收到请求到产生响应是一个耗时操作，每累加一次耗时0.1s，
        为了良好的用户体验，需要服务器在计算过程中，
        每累加一次，就给客户端响应一次百分比格式的执行进度，使用action实现。

    流程:
        1.包含头文件;
        2.初始化ROS节点;
        3.创建NodeHandle;
        4.创建action服务对象;
        5.处理请求,产生反馈与响应;
        6.spin().

*/
// rename
typedef actionlib::SimpleActionServer <advanced::first_actionAction> servers;

void callback(const advanced::first_actionGoalConstPtr &goal, servers* server)
{
    int goalnum = goal->num;
    ROS_INFO("goalnum is : %d" , goalnum);
    int sum = 0;
    ros::Rate rate(10);
    for(int i = 1 ; i <= goalnum ; i++)
    {
        sum += i;
        rate.sleep();
        //continous feedback 
        //void publishFeedback(const advanced::first_actionFeedback &feedback)
        advanced::first_actionFeedback feedback;
        feedback.progress_bar = i / (double)goalnum;
        server->publishFeedback(feedback);
    }
    advanced::first_actionResult res;
    res.result = sum;
    server->setSucceeded(res,"result");
}

int main(int argc, char * argv[])
{
    ros::init(argc, argv, "action_servicer");
    ros::NodeHandle nh;
    /*SimpleActionServer(ros::NodeHandle n, 
        std::string name, //topic name
        boost::function<void (const advanced::first_actionActionGoalConstPtr &)> execute_callback, //callback function
        bool auto_start)  //see whether if need auto start
    */
    servers server(nh,"first_action",boost::bind(&callback,_1,&server),false);
    // if auto_start == false , have to start by hand
    server.start();
    ROS_INFO("-------------this is the action_server-------------");

    ros::spin();
    return 0;
}
