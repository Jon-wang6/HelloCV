/*
    需求：读取bag文件中的数据，并将数据打印到终端
    流程：
        1. 包含头文件；
        2. 初始化 ROS 2 客户端；
        3. 自定义节点类；
            3.1创建回放对象
            3.2设置被读取的磁盘文件
            3.3读取数据（创建一个速度订阅方，回调函数中执行读取操作）
            3.4关闭文件
        4. 调用 spin 函数，并传入节点对象指针；
        5. 释放资源。
*/

// 1. 包含头文件
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rosbag2_cpp/reader.hpp"

// 3. 自定义节点类
class SimpleBagPlayer : public rclcpp::Node{
public:
    SimpleBagPlayer():Node("simple_bag_player_node_cpp"){
        RCLCPP_INFO(this->get_logger(), "消息回放对象创建！");
        // 3.1创建回放对象
        reader_ = std::make_unique<rosbag2_cpp::Reader>();
        // 3.2设置被读取的磁盘文件
        reader_->open("my_bag");
        // 3.3读取数据
        while (reader_->has_next()) {
            auto twist = reader_->read_next<geometry_msgs::msg::Twist>();
            RCLCPP_INFO(this->get_logger(), "线速度：%.2f, 角速度：%.2f", twist.linear.x, twist.angular.z);
            // 处理读取到的消息
        }
        // 3.4关闭文件
        reader_->close();
    }
private:
    std::unique_ptr<rosbag2_cpp::Reader> reader_;
};

int main(int argc, char *argv[])
{
    // 2. 初始化 ROS 2 客户端
    rclcpp::init(argc, argv);

    // 4. 创建节点并进入循环
    rclcpp::spin(std::make_shared<SimpleBagPlayer>());

    // 5. 释放资源
    rclcpp::shutdown();

    return 0;
}