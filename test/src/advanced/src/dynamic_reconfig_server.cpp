#include "ros/ros.h"
#include "dynamic_reconfigure/server.h"
#include "advanced/dyanmic_reconfigConfig.h"
 /*  
    动态参数服务端: 参数被修改时直接打印
    实现流程:
        1.包含头文件
        2.初始化 ros 节点
        3.创建服务器对象
        4.创建回调对象(使用回调函数，打印修改后的参数)
        5.服务器对象调用回调对象
        6.spin()
*/

void dr_callback(const advanced::dyanmic_reconfigConfig &dr_con,uint32_t level)
{
    ROS_INFO("int_param:  %d ",dr_con.int_param);
    ROS_INFO("double_param:  %.2f ",dr_con.double_param);
    ROS_INFO("bool_param:  %d ",dr_con.bool_param);
    ROS_INFO("string_param:  %s ",dr_con.string_param.c_str());  
    ROS_INFO("list_param:  %d ",dr_con.list_param); 
    ROS_INFO("-----------------line---------------------");     
}
int main(int argc, char * argv[])
{
    ros::init(argc, argv, "dynamic_reconfig_server");
    dynamic_reconfigure::Server<advanced::dyanmic_reconfigConfig> server;
    /*void setCallback(const boost::function<void (advanced::dyanmic_reconfigConfig &,
     uint32_t level)> &callback)
    */
    server.setCallback(boost::bind(&dr_callback,_1,_2));

    ros::spin();
    ros::shutdown();
    return 0;
}
