#include"ros/ros.h"

/*
    参数服务器操作之查询_C++实现:
    在 roscpp 中提供了两套 API 实现参数操作
    ros::NodeHandle

        param(键,默认值) 
            存在，返回对应结果，否则返回默认值

        getParam(键,存储结果的变量)
            存在,返回 true,且将值赋值给参数2
            若果键不存在，那么返回值为 false，且不为参数2赋值

        getParamCached键,存储结果的变量)--提高变量获取效率
            存在,返回 true,且将值赋值给参数2
            若果键不存在，那么返回值为 false，且不为参数2赋值

        getParamNames(std::vector<std::string>)
            获取所有的键,并存储在参数 vector 中 

        hasParam(键)
            是否包含某个键，存在返回 true，否则返回 false

        searchParam(参数1，参数2)
            搜索键，参数1是被搜索的键，参数2存储搜索结果的变量

    ros::param ----- 与 NodeHandle 类似
*/

int main(int argc,char* argv[])
{
    setlocale(LC_ALL,"");
    // ros::init(argc,argv,"parameterget");
    // ros::NodeHandle nh;
    // //by ros::Nodehanle
    // //1.get by param
    // double radius = nh.param("radius",0.5);
    // ROS_INFO("get parameter1 succussful");
    // ROS_INFO("radius1 == %.2f",radius);
    // //2.get by getParam()
    // double radius2 = 0.1;
    // bool flag2 = nh.getParam("radius",radius2);
    // if(flag2){
    //     ROS_INFO("get parameter2 succussful");
    //     ROS_INFO("radius2 == %.2f",radius2);
    // }else{
    //     ROS_INFO("get parameter2 unsuccussful");
    // }
    // //3.get by geParamCached() ,like getparam()
    // double radius3 = 0.1;
    // bool flag3 = nh.getParamCached("radius",radius3);
    // if(flag3){
    //     ROS_INFO("get parameter3 succussful");
    //     ROS_INFO("radius3 == %.2f",radius3);
    // }else{
    //     ROS_INFO("get parameter3 unsuccussful");
    // }
    // //4.get by getParamNames()
    // // std::vector<std::string> names;
    // // nh.getParamNames(names);
    // // for(auto &&name : names)
    // // {
    // //     ROS_INFO("the params4 are : %s", name.c_str() );
    // // }
    // //5.get by hasParam()
    // bool flag5 = nh.hasParam("radius");
    // if(flag5){
    //     ROS_INFO("get parameter5 succussful");
    // }else{
    //     ROS_INFO("get parameter5 unsuccussful");
    // }
    // //6.get by searchParam(param1, param2)
    // std::string key;
    // nh.searchParam("radius",key);
    // ROS_INFO("get parameter6 succussful");
    // ROS_INFO("search result6 is:%s",key.c_str() );

    //by ros::param
    double radius = ros::param::param("radius",0.5);
    ROS_INFO("get parameter11 succussful");
    ROS_INFO("radius11 == %.2f",radius);

    return 0;
}