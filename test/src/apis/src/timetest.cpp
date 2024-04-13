#include"ros/ros.h"

void callbackf(const ros::TimerEvent& event){
    ROS_INFO("-------test for timer----");
    ROS_INFO("the time used is : %.2f",event.current_real.toSec() );
}

int main(int argc, char * argv[])
{
    //1,init
    ros::init(argc,argv,"timetester");
    ros::NodeHandle nh;
    //2,get the real time 
    ros::Time time_right = ros::Time::now();
    ROS_INFO("the real time is : %.2f" , time_right.toSec());
    ROS_INFO("the real time in interger is : %d" , time_right.sec);

    //3,set the designed time
    //The reference time is 1970/1/1 00.00
    ros::Time des_time(100,123456789);
    ros::Time des_time2(200.789);
    ROS_INFO("the time will be geted is : %.2f",des_time.toSec());
    ROS_INFO("the time number 2 will be geted is : %.2f",des_time2.toSec());

    //4,puase the time by duration
    // ROS_INFO("--------------the puase test---------------");
    // ros::Time start = ros::Time::now();
    // ROS_INFO("start :: %d",start.sec);
    // ros::Duration duration_time(4);
    // duration_time.sleep();
    // ros::Time end = ros::Time::now();
    // ROS_INFO("end :: %d",end.sec);

    //5,the calculation of time    
    // ROS_INFO("--------------the calculation test---------------");
    // ros::Time start = ros::Time::now();
    // ROS_INFO("start :: %d",start.sec);

    // ros::Duration dura1(2);
    // ros::Duration dura2(5);
    // ros::Duration dura3_sub = dura2 - dura1;
    // ros::Duration dura4_add = dura2 + dura1;
    // dura4_add.sleep();

    // ros::Time end = ros::Time::now();
    // ROS_INFO("end :: %d",end.sec);
    // ros::Time calone_rightnow = ros::Time::now();
    //5,output a text to the screen while one second
    // createTimer(duration,callback_function,oneshot,autostart)
    ROS_INFO("--------------the timer test---------------");
    // ros::Timer timer = nh.createTimer(ros::Duration(1),callbackf);
    ros::Timer timer = nh.createTimer(ros::Duration(1),callbackf,false,false);
    timer.start();//start by oneself

    ros::spin();
    return 0;
}