/*
    需求：创建参数服务端，并操作参数。
    流程：
        1. 包含头文件；
        2. 初始化 ROS 2 客户端；
        3. 自定义节点类；
            3.1增
            3.2查
            3.3改
            3.4删
        4. 调用 spin 函数，并传入节点对象指针；
        5. 释放资源。
*/

// 1. 包含头文件
#include "rclcpp/rclcpp.hpp"

// 3. 自定义节点类
class MyParamServer : public rclcpp::Node{
public:
    //如果允许参数删除，那么需要通过NodeOptions声明
    MyParamServer():Node("param_server_node_cpp",rclcpp::NodeOptions().allow_undeclared_parameters(true)){
        RCLCPP_INFO(this->get_logger(), "参数服务端创建了！");
    }
    // 3.1增
    void declare_param(){
        RCLCPP_INFO(this->get_logger(), "---------------增---------------");
        this->declare_parameter("car_name"  ,"tiger");
        this->declare_parameter("width"     ,1.55);
        this->declare_parameter("wheels"    ,5);
        //也可以用于声明新参数，但是要保证："param_server_node_cpp",rclcpp::NodeOptions().allow_undeclared_parameters(true)被调用
        this->set_parameter(rclcpp::Parameter("height",2.00));
    }
    // 3.2查
    void get_param(){
        RCLCPP_INFO(this->get_logger(), "---------------查---------------");
        //this->get_parameter()
        //this->get_parameters()
        //this->has_parameters()
        //获取指定参数
        auto car = this->get_parameter("car_name");
        RCLCPP_INFO(this->get_logger(),"key = %s, value = %s",car.get_name().c_str(),car.as_string().c_str());
        //获取一些参数
        auto params = this->get_parameters({"car_name","width","wheels"});
        for (auto &&param : params)
        {
            RCLCPP_INFO(this->get_logger(),"{%s = %s}",param.get_name().c_str(),param.value_to_string().c_str());
        }
        
        //判断是否包含
        RCLCPP_INFO(this->get_logger(),"是否包含car_name?%d",this->has_parameter("car_name"));
        RCLCPP_INFO(this->get_logger(),"是否包含height  ?%d",this->has_parameter("height"));
    }
    // 3.3改
    void update_param(){
        RCLCPP_INFO(this->get_logger(), "---------------改---------------");
        this->set_parameter(rclcpp::Parameter("width",1.75));
        RCLCPP_INFO(this->get_logger(),"width = %.2f",this->get_parameter("width").as_double());
    }
    // 3.4删
    void delete_param(){
        RCLCPP_INFO(this->get_logger(), "---------------删---------------");
        //只能删除未声明的参数
        // this->undeclare_parameter("car_name");
        // RCLCPP_INFO(this->get_logger(),"删除后还包含car_name吗？%d",this->has_parameter("car_name"));
        this->undeclare_parameter("height");
        RCLCPP_INFO(this->get_logger(),"删除后还包含height吗？%d",this->has_parameter("height"));
    }
};

int main(int argc, char *argv[])
{
    // 2. 初始化 ROS 2 客户端
    rclcpp::init(argc, argv);

    // 4. 创建节点并进入循环
    auto node = std::make_shared<MyParamServer>();
    node->declare_param();
    node->get_param();
    node->update_param();
    node->delete_param();

    rclcpp::spin(node);

    // 5. 释放资源
    rclcpp::shutdown();

    return 0;
}