#include"ros/ros.h"
#include"turtlesim/Pose.h"
#include"tf2_ros/transform_broadcaster.h"
#include"geometry_msgs/TransformStamped.h"
#include"tf2/LinearMath/Quaternion.h"

void doPose(const turtlesim::Pose::ConstPtr& pose)
{
    //  5-1.创建 TF 广播器
    static tf2_ros::TransformBroadcaster broadcaster;
    //  5-2.创建 广播的数据(通过 pose 设置)
    geometry_msgs::TransformStamped tsf;
    //  |----头设置
    tsf.header.frame_id = "world";
    tsf.header.stamp = ros::Time::now();
    //  |----坐标系 ID
    tsf.child_frame_id = "turtle1";
    //  |----坐标系相对信息设置
    tsf.transform.translation.x = pose->x;
    tsf.transform.translation.y = pose->y;
    tsf.transform.translation.z = 0.0;
    //  |--------- 四元数设置
    tf2::Quaternion qtn;
    qtn.setRPY(0,0,pose->theta);
    tsf.transform.rotation.x = qtn.getX();
    tsf.transform.rotation.y = qtn.getY();
    tsf.transform.rotation.z = qtn.getZ();
    tsf.transform.rotation.w = qtn.getW();
    //  5-3.广播器发布数据
    broadcaster.sendTransform(tsf);
}

int main(int argc , char *argv[])
{
    ros::init(argc, argv , "dynamic_publisher");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<turtlesim::Pose>("/turtle1/pose",1000,doPose);
    ros::spin();
    return 0;
}