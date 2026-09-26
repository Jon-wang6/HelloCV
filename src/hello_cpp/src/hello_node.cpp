/*
需求：在终端输出文本hello world。
流程：
    1.包含头文件；
    2.初始化ROS2客户端；
    3.创建节点指针；
    4.输出日志；
    5.释放资源。
*/

#include "rclcpp/rclcpp.hpp"

int main(int argc,char **argv){
    //初始化客户端
    rclcpp::init(argc,argv);
    //创建节点对象指针
    auto node = rclcpp::Node::make_shared("hello_node");
    //输出日志
    RCLCPP_INFO(node->get_logger(),"hello world!");
    //释放资源
    rclcpp::shutdown();
    return 0;
}
