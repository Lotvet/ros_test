#include "ros/ros.h"
#include "pluginlib/class_loader.h"
#include "../include/multi_angles_base.h"

int main(int argc , char* argv[])
{
    //类加载器 -- 参数1:基类功能包名称 参数2:基类全限定名称
    pluginlib::ClassLoader<multiangeles_base_ns::multiangeles_base> loader("advanced","multiangeles_base_ns::multiangeles_base");

    try{
       /*
        boost::shared_ptr<multiangeles_base_ns::multiangeles_base> pluginlib::ClassLoader<multiangeles_base_ns::multiangeles_base>::createInstance(const std::string &lookup_name)
        */    
        //创建插件类实例 -- 参数:插件类全限定名称
        boost::shared_ptr<multiangeles_base_ns::multiangeles_base> triangle = loader.createInstance("multiangeles_plugin_ns::triangle"); 
        triangle->init(10);
        double length = triangle->get_length();
        ROS_INFO("the all length = %.2f" , length);
    }
    catch(pluginlib::PluginlibException &ex){
        ROS_ERROR("It is WRONG, SIR.and the wrong is %s",ex.what());
    }

    return 0;
}