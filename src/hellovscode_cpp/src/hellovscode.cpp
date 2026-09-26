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

//方式一
// int main(int argc,char **argv){
//     //初始化客户端
//     rclcpp::init(argc,argv);
//     //创建节点对象指针
//     auto node = rclcpp::Node::make_shared("hello_vscode_cpp");
//     //输出日志
//     RCLCPP_INFO(node->get_logger(),"hello vscode!");
//     //释放资源
//     rclcpp::shutdown();
//     return 0;
// }

//方式二：使用宏定义的方式输出日志

class MyNode : public rclcpp::Node{
public:
    MyNode():Node("hello_vscode_cpp"){
        RCLCPP_INFO(this->get_logger(),"hello vscode!");
    }
};
#include "rclcpp/rclcpp.hpp"

int main(int argc,char const *argv[]){
    //初始化客户端
    rclcpp::init(argc,argv);
    //自定义类
    auto node = std::make_shared<MyNode>();
    //......

    //释放资源
    rclcpp::shutdown();
    return 0;
}