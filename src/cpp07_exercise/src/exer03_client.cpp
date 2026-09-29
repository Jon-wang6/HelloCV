/*
    需求：客户端需要提交目标点坐标，并解析响应结果
    流程：
        0. 解析动态传入的数据，作为目标点坐标；
        1. 包含头文件；
        2. 初始化 ROS 2 客户端；
        3. 自定义节点类；
            3.1构造函数创建客户端
            3.2客户端需要连接到服务端
            3.3发送请求数据
        4. 调用节点对象指针的相关函数；
        5. 释放资源。
*/

// 1. 包含头文件
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "base_demo/srv/distance.hpp"

using base_demo::srv::Distance;
using namespace std::chrono_literals;
// 3. 自定义节点类
class Exer03Client : public rclcpp::Node{
public:
    Exer03Client():Node("mynode_node_cpp"){
        RCLCPP_INFO(this->get_logger(), "案例2客户端节点已启动！");
        // 3.1构造函数创建客户端
        client_ = this->create_client<Distance>("distance");
    }
    // 3.2客户端需要连接到服务端
    bool connect_sever(){
        while(!client_->wait_for_service(1s)){
            RCLCPP_INFO(this->get_logger(),"服务连接中······");
            if(!rclcpp::ok()){
                RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),"节点被强制退出！");
                return false;
            }
        }
        return true;
    }
    // 3.3发送请求数据
    rclcpp::Client<Distance>::FutureAndRequestId send_goal(float x , float y , float theta){
        auto request = std::make_shared<Distance::Request>();
        request->x = x;
        request->y = y;
        request->theta = theta;
        return client_->async_send_request(request);
    }
private:
    rclcpp::Client<Distance>::SharedPtr client_;
};

int main(int argc, char *argv[])
{
    // 2. 初始化 ROS 2 客户端，并移除 launch 自动添加的 ROS 参数
    auto args = rclcpp::init_and_remove_ros_arguments(argc, argv);

    // 0. 解析动态传入的数据，作为目标点坐标；
    if(args.size() != 4){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"请提交x坐标，y坐标，theta三个参数");
        rclcpp::shutdown();
        return 1;
    }
    //解析提交的参数
    float goal_x = std::atof(args[1].c_str());
    float goal_y = std::atof(args[2].c_str());
    float goal_theta = std::atof(args[3].c_str());
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"%.2f,%.2f,%.2f",goal_x,goal_y,goal_theta);

    // 4. 调用节点对象指针的相关函数；
    auto client = std::make_shared<Exer03Client>();
    bool flag = client->connect_sever();
    if(!flag){
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),"服务连接失败！");
        return 1;
    }
    //发送请求，并处理响应
    auto future = client->send_goal(goal_x,goal_y,goal_theta);
    //判断响应结果状态
    if(rclcpp::spin_until_future_complete(client,future) == rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(client->get_logger(),"两只乌龟距离%.2f米",future.get()->distance);
    }else{
        RCLCPP_ERROR(client->get_logger(),"服务响应失败！");
    }
    // 5. 释放资源
    rclcpp::shutdown();

    return 0;
}
