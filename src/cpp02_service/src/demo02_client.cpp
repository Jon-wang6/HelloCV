/*
    需求：创建客户端，组织数据并提交，然后处理响应结果（关注业务流程）
    流程：
        前提：main函数中判断提交参数是否正确额
        1.包含头文件；
        2.初始化ROS2客户端；
        3.创建节点对象；
            3.1.创建客户端；
            3.2.连接服务器（对于服务通信，如果客户端连接不到服务器，则不能发送请求）；
            3.3.发送请求；
        4.创建对象指针；
          需要调用连接服务的函数 ，根据连接结果做下一步处理；
        5.释放资源。
*/

//1.包含头文件
#include <chrono>
#include <cstdlib>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "base_demo/srv/addints.hpp"

using base_demo::srv::Addints;
using namespace std::chrono_literals;

//3.创建节点类
class AddintsClient : public rclcpp::Node
{
public:
  AddintsClient() : Node("addints_client")
  {
    RCLCPP_INFO(this->get_logger(), "addints_client节点启动！");
    // 3.1.创建客户端；
    /*
      模板：服务接口类型；
      参数：服务名称；
      返回值：客户端对象指针。
    */
    client_ = this->create_client<Addints>("addints");
  }
  // 3.2.连接服务器（对于服务通信，如果客户端连接不到服务器，则不能发送请求）；
  /*
    连接服务器实现，如果成功返回True，失败返回False
  */
  bool connect_server()
  {
    //在指定超时时间内连接服务器，如果连接成功返回True，失败返回False
    //client_->wait_for_service(1s);
    while(!client_->wait_for_service(std::chrono::seconds(1)))//循环以1s为超时时间，连接服务器，直到连接到服务器退出循环
    {
      //对ctrl+c中断信号进行处理，判断是否退出程序
      //1.如何判断ctrl+c按下
      //2.如何处理
      //3.按下ctrl+c后结束ROS2程序，需要释放资源，比如contest
      //rclcpp：：get_logger不依赖contest
      if(!rclcpp::ok())
      {
        RCLCPP_ERROR(this->get_logger(), "客户端节点被中断，退出！");
        return false;
      }
      RCLCPP_INFO(this->get_logger(), "服务器连接中...");
    }
    return true;
  }
  // 3.3.发送请求；
  //编写发送请求函数--参数为两个整形数据，返回值为提交请求后服务端的返回结果。
  rclcpp::Client<Addints>::FutureAndRequestId send_request(int num1, int num2)
  {
    //组织请求数据
    auto request = std::make_shared<Addints::Request>();
    request->num1 = num1;
    request->num2 = num2;
    return client_ ->async_send_request(request);
  }

private:
  rclcpp::Client<Addints>::SharedPtr client_;
};

int main(int argc, char *argv[])
{
  if(argc != 3)
  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "参数不正确，请输入两个整数！");
    return 1;
  }
  //2.初始化ROS2客户端
  rclcpp::init(argc, argv);

  //3.创建客户端对象
  auto client = std::make_shared<AddintsClient>();
  //调用客户端对象的连接服务器功能
  bool flag = client->connect_server();
  //根据连接进一步处理
  if(!flag)
  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "连接服务器失败！client节点退出！");
    return 0;
  }
  //执行后操作。。。
  //调用请求提交函数，处理相应结果
  auto future = client->send_request(atoi(argv[1]), atoi(argv[2]));
  //处理响应结果
  if(rclcpp::spin_until_future_complete(client, future) == rclcpp::FutureReturnCode::SUCCESS)//成功
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "响应成功！sum = %d",future.get()->sum);

  }
  else//失败
  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "响应失败！");
  }

  //5.释放资源
  rclcpp::shutdown();
  return 0;
}
