#include"ros/ros.h"
#include"talklisten/Person.h"
/*
    the accomplishment of taler in diy-way(just like normal way):
        1,including
        2,initialize ROS node
        3,build node handle
        4,build publisher object
        5,edit publisher logical and publish data
*/

int main(int agrc,char *argv[])
{
    // 2,initialize ROS node
    ros::init(agrc,argv,"thepublisher");
    ROS_INFO("This is person talker !!!");
    // 3,build node handle
    ros::NodeHandle nh;
    // 4,build publisher object
    ros::Publisher pub = nh.advertise<talklisten::Person>("communicate",10,true);
    // 5,edit publisher logical and publish data
    //5.1,build the data will be published
    talklisten::Person person;
    person.name = "clint";
    person.age = 24;
    person.height = 1.65;
    person.accounts = 200;
    //5.2,set the publish rate
    ros::Rate rate(1);
    ros::Duration(1).sleep();
    //5.3,loop publish data
    while (ros::ok())
    {
        //core: the publishment of data
        if(person.age <= 30){
            pub.publish(person);
            ROS_INFO("the data will be published is : %s, %d ,%.2f,%d",person.name.c_str() , person.age, person.height,person.accounts);
            //edit the data
            person.age += 1;
        }


        rate.sleep();
        ros::spinOnce();
        ROS_INFO("the loop spinonce :-------111------");
    }
    

    return 0;
}