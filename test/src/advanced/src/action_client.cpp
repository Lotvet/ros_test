#include "ros/ros.h"
#include "actionlib/client/simple_action_client.h"
#include "advanced/first_actionAction.h"
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
        4.创建action客户端对象;
        5.发送目标，处理反馈以及最终结果;
            5.1 处理反馈
            5.2 最终结果
        6.spin().

*/
typedef actionlib::SimpleActionClient<advanced::first_actionAction> Clients;
void done_callback(const actionlib::SimpleClientGoalState &state,const advanced::first_actionResultConstPtr &result)
{
    if(state.state_ == state.SUCCEEDED)
    {
        ROS_INFO("response successed ! the result is %d",result->result);
    }else{
        ROS_INFO("response defeat!!!!!!!!!!!");
    }
}
void active_callback()
{
    ROS_INFO("The link between service and client is successful bulit");
}
void feedback_callback(const advanced::first_actionFeedbackConstPtr &feedback)
{
    ROS_INFO("the current feedback is : %.2f", feedback->progress_bar);
}
int main(int argc, char * argv[])
{
    ros::init(argc, argv, "action_client");
    ros::NodeHandle nh;
    Clients client(nh,"first_action");
    client.waitForServer();
    /*
    void sendGoal(const advanced::first_actionGoal &goal,
        boost::function<void (const actionlib::SimpleClientGoalState &state,const advanced::first_actionResultConstPtr &result)> done_cb, 
        boost::function<void ()> active_cb, 
        boost::function<void (const advanced::first_actionFeedbackConstPtr &feedback)> feedback_cb)
    */
    advanced::first_actionGoal goal;
    goal.num = 100;
    client.sendGoal(goal,done_callback,active_callback,feedback_callback);

    ros::spin();
    return 0;
}
