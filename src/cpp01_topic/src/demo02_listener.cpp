/*
    需求：订阅发布方发布的消息，并在终端输出。
    流程：
        1.包含头文件；
        2.初始化ROS2客户端；
        3.创建节点对象；
            3.1.创建订阅方；
            3.2.解析并输出数据；
        4.调用spin()函数；
        5.释放资源。
*/

//1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
//3.创建节点对象；
class Listener : public rclcpp::Node
{
public:
    Listener() : Node("listener")
    {
        RCLCPP_INFO(this->get_logger(), "Listener node has been started.");
        //3.1.创建订阅方；
        /*
            模板：被订阅的消息名称；
            参数：
                1.话题名称；
                2.队列长度；
                3.回调函数；
            返回值：订阅方对象指针。
        */
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "topic", 10, std::bind(&Listener::topic_callback, this, std::placeholders::_1)
        );
    }
private:
    void topic_callback(const std_msgs::msg::String &msg)
    {
        //3.2.解析并输出数据；
        RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg.data.c_str());
    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
    //2.初始化ROS2客户端；
    rclcpp::init(argc, argv);
    //4.调用spin()函数；
    rclcpp::spin(std::make_shared<Listener>());
    //5.释放资源。
    rclcpp::shutdown();
    return 0;
}