/*  
  需求：编写服务端，解析提交的请求数据，将解析的数据相加并响应
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建服务端；
      3-2.处理请求数据并响应结果。
    4.调用spin函数，并传入节点对象指针；
    5.释放资源。
*/

//1.包含头文件
#include "rclcpp/rclcpp.hpp"
#include "base_demo/srv/addints.hpp"

using base_demo::srv::Addints;
using std::placeholders::_1;
using std::placeholders::_2;

//3.自定义节点类
class AddintsServer : public rclcpp::Node
{
public:
  AddintsServer() : Node("addints_server")
  {
    RCLCPP_INFO(this->get_logger(), "addints_server节点启动！");
    // 3-1.创建服务端；
    /*
      模板：服务接口类型；
      参数：
        1.服务名称；
        2.回调函数；
      返回值：服务器对象指针。
    */
    service_ = this->create_service<Addints>(
      "addints", std::bind(&AddintsServer::addints_callback, this, _1,_2));
  }
  void addints_callback(const Addints::Request::SharedPtr request,
                        Addints::Response::SharedPtr response)
  {
    response->sum = request->num1 + request->num2;
    RCLCPP_INFO(this->get_logger(), "请求数据：%d + %d = %d", request->num1, request->num2, response->sum);
  }
  // 3-2.处理请求数据并响应结果。
private:
  rclcpp::Service<Addints>::SharedPtr service_;
};

int main(int argc, char *argv[])
{
  //2.初始化ros客户端
  rclcpp::init(argc, argv);

  //4.调用spin函数，并传入自定义类的节点对象指针
  rclcpp::spin(std::make_shared<AddintsServer>());

  //5.释放资源
  rclcpp::shutdown();
  return 0;
}

