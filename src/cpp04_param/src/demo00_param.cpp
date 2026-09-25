/*
    需求：
    流程：
        1. 包含头文件；
        2. 初始化 ROS 2 客户端；
        3. 自定义节点类；
          3.1参数对象的创建；
          3.2参数对象的解析（获取键/值/将值转换成字符串。。。）。
        4. 调用 spin 函数，并传入节点对象指针；
        5. 释放资源。
*/

// 1. 包含头文件
#include "rclcpp/rclcpp.hpp"

// 3. 自定义节点类
class MyParam : public rclcpp::Node
{
public:
    MyParam(): Node("mynode_node_cpp"){
        RCLCPP_INFO(this->get_logger(), "参数API使用！");
        // 3.1参数对象的创建；
        rclcpp::Parameter p1("car_name","tiger");
        rclcpp::Parameter p2("height",1.68);
        rclcpp::Parameter p3("wheels",4);
        // 3.2参数对象的解析（获取键/值/将值转换成字符串。。。）。
        //解析值
        RCLCPP_INFO(this->get_logger(),"car_name      = %s",p1.as_string().c_str());
        RCLCPP_INFO(this->get_logger(),"height        = %.2f",p2.as_double());
        RCLCPP_INFO(this->get_logger(),"wheels        = %ld" ,p3.as_int());
        //获取参数键
        RCLCPP_INFO(this->get_logger(),"name          = %s",p1.get_name().c_str());
        RCLCPP_INFO(this->get_logger(),"type          = %s",p1.get_type_name().c_str());
        RCLCPP_INFO(this->get_logger(),"value2string  = %s",p2.value_to_string().c_str());

        //rclcpp::ParameterValue value(,);
    }
};

int main(int argc, char *argv[])
{
    // 2. 初始化 ROS 2 客户端
    rclcpp::init(argc, argv);

    // 4. 创建节点并进入循环
    rclcpp::spin(std::make_shared<MyParam>());

    // 5. 释放资源
    rclcpp::shutdown();

    return 0;
}