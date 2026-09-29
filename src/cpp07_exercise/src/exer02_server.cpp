/*
    需求：解析客户端提交的目标点坐标，获取原生乌龟的坐标，计算二者距离，并响应会客户端
    流程：
        1. 包含头文件；
        2. 初始化 ROS 2 客户端；
        3. 自定义节点类；
            3.1创建一个订阅方（原生乌龟位姿/turtle1/pose）
            3.2创建一个服务端
            3.3回调函数需要解析客户端并响应结果到客户端
        4. 调用 spin 函数，并传入节点对象指针；
        5. 释放资源。
*/

// 1. 包含头文件
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
#include "base_demo/srv/distance.hpp"

using std::placeholders::_1;
using std::placeholders::_2;
using base_demo::srv::Distance;
// 3. 自定义节点类
class Exer02Server : public rclcpp::Node{
public:
    Exer02Server():Node("exer02_server_node_cpp"),x(0.0),y(0.0){
        RCLCPP_INFO(this->get_logger(), "案例2服务端节点已启动！");
        // 3.1创建一个订阅方（原生乌龟位姿/turtle1/pose）
        sub_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose",10,std::bind(&Exer02Server::pose_cb,this,_1));
        // 3.2创建一个服务端
        server_ = this->create_service<Distance>("distance",std::bind(&Exer02Server::distance_cb,this,_1,_2));
        // 3.3回调函数需要解析客户端并响应结果到客户端
    }
private:
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_;
    rclcpp::Service<Distance>::SharedPtr server_;
    float x,y;
    void pose_cb(const turtlesim::msg::Pose::SharedPtr pose){
        x = pose->x;
        y = pose->y;
    }
    void distance_cb(const Distance::Request::SharedPtr request,Distance::Response::SharedPtr response){
        //1.解析出目标点坐标
        float goal_x  = request->x;
        float goal_y  = request->y;
        //2.计算距离
        float distance_x = goal_x - x;
        float distance_y = goal_y - y;
        float distance = std::sqrt(distance_x * distance_x + distance_y * distance_y);
        //3.设置进响应
        response->distance = distance;
        RCLCPP_INFO(this->get_logger(),
            "目标点坐标：（%.2f,%.2f），原生乌龟坐标：（%.2f，%.2f），二者距离：%.2f",
            goal_x,goal_y,x,y,distance
        );
    }
};

int main(int argc, char *argv[])
{
    // 2. 初始化 ROS 2 客户端
    rclcpp::init(argc, argv);

    // 4. 创建节点并进入循环
    rclcpp::spin(std::make_shared<Exer02Server>());

    // 5. 释放资源
    rclcpp::shutdown();

    return 0;
}
