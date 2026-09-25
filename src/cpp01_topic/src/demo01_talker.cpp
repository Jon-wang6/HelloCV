/*
  需求：以某个固定的频率发布文本“hello world” ，文件后缀编号，每发送一条消息，编号递增1.
  步骤：
    1.包含头文件；
    2.初始化ros客户端；
    3.定义节点类；
      3.1.创建发布方；
      3.2.创建定时器；
      3.3.组织消息并发布；
    4.调用spin函数，并传入自定义类的节点对象指针；
    5.释放资源。
*/

//1.包含头文件；
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

//3.定义节点类；
class Talker : public rclcpp::Node
{
public:
  Talker() : Node("talker"), count_(0)
  {
    //3.1.创建发布方；
    /*
      模板：被发布的消息名称；
      参数：
        1.话题名称；
        2.队列长度；
      返回值：发布方对象指针。
    */
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    //3.2.创建定时器；
    timer_ = this->create_wall_timer(
        1s, std::bind(&Talker::timer_callback, this));
  }
private:
  void timer_callback()
  {
    //3.3.组织消息并发布；
    auto message = std_msgs::msg::String();
    message.data = "hello world " + std::to_string(count_++);
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    publisher_->publish(message);
  }
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  size_t count_;
};

int main(int argc, char *argv[])
{
  //2.初始化ros客户端；
  rclcpp::init(argc, argv);
  //4.调用spin函数，并传入节点对象指针；
  rclcpp::spin(std::make_shared<Talker>());
  //5.释放资源。
  rclcpp::shutdown();
  return 0;
}
