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
#include "base_demo/msg/student.hpp"

using base_demo::msg::Student;
using namespace std::chrono_literals;
//3.定义节点类；
class Talker : public rclcpp::Node
{
public:
  Talker() : Node("talker"),age(0){
    // 3.1.创建发布方；
    publisher_ = this->create_publisher<Student>("student", 10);
    // 3.2.创建定时器；
    timer_ = this->create_wall_timer(500ms,std::bind(&Talker::on_timer, this));
  }
private:
  void on_timer()
  {
    // 3.3.组织消息并发布；
    auto student = Student();
    student.name = "葫芦娃";
    student.age = 8;
    student.height = 2.20;
    age++;
    student.age = age;
    publisher_->publish(student);
    RCLCPP_INFO(this->get_logger(), "发布的消息：name=%s, age=%d, height=%.2f", student.name.c_str(), student.age, student.height);
  }
  rclcpp::Publisher<Student>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  int age;
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
