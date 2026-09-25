/*
    需求：订阅学生信息并且打印在终端；
    流程：
        1.包含头文件；
        2.初始化ROS2客户端；
        3.创建节点对象；
            3.1.创建订阅方；
            3.2.回调函数解析并输出数据；
        4.调用spin()函数；
        5.释放资源。
*/

//1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "base_demo/msg/student.hpp"

using base_demo::msg::Student;
//3.创建节点对象；
class Listener : public rclcpp::Node
{
public:
    Listener() : Node("listener")
    {
        // 3.1.创建订阅方；
        subscription_ = this->create_subscription<base_demo::msg::Student>(
            "student", 10, std::bind(&Listener::do_cb, this, std::placeholders::_1));
    }
private:
    void do_cb(const Student &student)
    {
        // 3.2.回调函数解析并输出数据；
        RCLCPP_INFO(this->get_logger(), "订阅的学生信息：name=%s, age=%d, height=%.2f", student.name.c_str(), student.age, student.height);
    }
    rclcpp::Subscription<Student>::SharedPtr subscription_;
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
