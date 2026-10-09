# ROS 2中常用的C++知识补充

本节整理ROS 2 C++程序中经常出现的语法：

+ 时间字面量；
+ 智能指针；
+ `auto`类型推导；
+ 占位符；
+ `std::bind`绑定器；
+ 回调函数；
+ 范围`for`循环。

这些内容不是ROS 2独有的功能，而是现代C++提供的语言和标准库功能。ROS 2大量使用了它们。

---

# 一、时间字面量`std::chrono_literals`
## 1.1 基本作用
在ROS 2中，经常需要设置定时器周期、等待时间和超时时间。

引入时间字面量命名空间：

```cpp
using namespace std::chrono_literals;
```

之后可以直接写：

```cpp
1s
500ms
100us
```

而不需要手动构造时间对象。

> `std::chrono`在C++11中加入；`std::chrono_literals`中的时间字面量从C++14开始提供。
>

---

## 1.2 ROS 2定时器示例
```cpp
using namespace std::chrono_literals;

timer_ = this->create_wall_timer(
    1s,
    std::bind(&Talker::on_timer, this));
```

其中：

```cpp
1s
```

表示定时器每隔1秒调用一次：

```cpp
Talker::on_timer()
```

---

## 1.3 常见时间单位
| 写法 | 含义 |
| --- | --- |
| `1h` | 1小时 |
| `1min` | 1分钟 |
| `1s` | 1秒 |
| `1ms` | 1毫秒 |
| `1us` | 1微秒 |
| `1ns` | 1纳秒 |


例如：

```cpp
using namespace std::chrono_literals;

auto first_time = 2s;
auto second_time = 500ms;
```

---

# 二、智能指针`SharedPtr`与`make_shared`
## 2.1 裸指针的问题
传统的动态内存分配可以写成：

```cpp
MyNode * node = new MyNode();
```

使用结束后需要手动释放：

```cpp
delete node;
```

如果忘记执行`delete`，就可能产生内存泄漏。

如果重复执行`delete`，还可能造成程序崩溃。

---

## 2.2 `std::shared_ptr`
`std::shared_ptr`是共享所有权智能指针。

多个`shared_ptr`可以共同管理同一个对象。它的内部会记录当前有多少个智能指针正在管理该对象，这个数字称为引用计数。

```latex
创建新的shared_ptr
        ↓
引用计数增加

shared_ptr销毁或重置
        ↓
引用计数减少

引用计数变成0
        ↓
自动销毁对象并释放内存
```

示例：

```cpp
std::shared_ptr<MyNode> node;
```

---

## 2.3 `std::make_shared`
推荐使用`std::make_shared`创建对象：

```cpp
auto node = std::make_shared<MyNode>();
```

它会：

1. 创建`MyNode`对象；
2. 创建对应的智能指针；
3. 管理对象的生命周期；
4. 在没有智能指针使用该对象时自动释放内存。

它与直接使用`new`的目标类似，但不是简单的语法替换。`make_shared`通常更安全，并且通常只需要进行一次内存分配。

---

## 2.4 ROS 2示例
```cpp
int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<MyNode>();

    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
```

其中：

```cpp
auto node = std::make_shared<MyNode>();
```

创建节点对象并使用智能指针管理它。

ROS 2中的许多对象也提供`SharedPtr`类型：

```cpp
rclcpp::Publisher<MessageType>::SharedPtr publisher_;

rclcpp::Subscription<MessageType>::SharedPtr subscription_;

rclcpp::TimerBase::SharedPtr timer_;
```

这里的`SharedPtr`通常是ROS 2定义的类型别名，其底层仍然是`std::shared_ptr`。

---

## 2.5 循环引用问题
`shared_ptr`也不是任何情况下都能自动释放。

如果两个对象使用`shared_ptr`互相保存：

```latex
对象A拥有对象B
对象B又拥有对象A
```

它们的引用计数可能永远无法变为0。

这种情况称为循环引用，一般需要配合：

```cpp
std::weak_ptr
```

解决。

---

# 三、`auto`自动类型推导
## 3.1 基本作用
`auto`是C++11引入的关键字。

编译器会根据变量右侧的初始化表达式推导变量类型。

普通写法：

```cpp
std::shared_ptr<MyNode> node =
    std::make_shared<MyNode>();
```

使用`auto`：

```cpp
auto node = std::make_shared<MyNode>();
```

这两种写法中，`node`的类型相同。

---

## 3.2 ROS 2中的常见写法
```cpp
auto request =
    std::make_shared<AddInts::Request>();
```

编译器会推导出：

```cpp
std::shared_ptr<AddInts::Request>
```

遍历参数时也经常写成：

```cpp
for (const auto & param : params)
{
    // 使用param
}
```

---

## 3.3 `auto`的特点
优点：

+ 减少冗长的类型名称；
+ 适合智能指针和迭代器；
+ 类型变化时减少重复修改；
+ 可以提高复杂类型代码的可读性。

需要注意：

+ `auto`必须通过初始化表达式推导类型；
+ `auto`不是“没有类型”；
+ 类型仍然在编译阶段确定；
+ 不应在类型含义不清楚时滥用`auto`。

下面的写法无法推导：

```cpp
auto value;
```

因为没有初始化表达式。

---

# 四、占位符
## 4.1 基本作用
占位符用于表示：

> 这个参数现在暂时不确定，等新函数对象真正被调用时再传入。
>

使用前可以声明：

```cpp
using std::placeholders::_1;
using std::placeholders::_2;
```

也可以写完整名称：

```cpp
std::placeholders::_1
std::placeholders::_2
```

---

## 4.2 参数顺序
占位符编号表示调用新函数对象时的参数位置。

```latex
_1：调用时传入的第1个参数
_2：调用时传入的第2个参数
_3：调用时传入的第3个参数
```

例如：

```cpp
void print_value(int first, int second);
```

绑定：

```cpp
auto function = std::bind(
    print_value,
    std::placeholders::_1,
    10);
```

调用：

```cpp
function(5);
```

相当于：

```cpp
print_value(5, 10);
```

---

## 4.3 ROS 2中的占位符
订阅回调函数通常需要接收一条消息，因此常用一个占位符：

```cpp
using std::placeholders::_1;

subscription_ = this->create_subscription<MessageType>(
    "topic_name",
    10,
    std::bind(
        &MyNode::message_callback,
        this,
        _1));
```

当消息到达时，ROS 2会把收到的消息放到`_1`的位置。

---

# 五、`std::bind`绑定器
## 5.1 基本作用
`std::bind`位于：

```cpp
#include <functional>
```

它可以把：

+ 普通函数；
+ 类的成员函数；
+ 函数对象；
+ 一部分已经确定的参数；

组合成一个新的可调用对象。

基本写法：

```cpp
auto new_callable =
    std::bind(function, argument_1, argument_2);
```

---

## 5.2 绑定普通函数
原函数：

```cpp
#include <functional>
#include <iostream>

void print_sum(int a, int b)
{
    std::cout << a + b << std::endl;
}
```

绑定第一个参数：

```cpp
auto bound_function = std::bind(
    print_sum,
    5,
    std::placeholders::_1);
```

调用：

```cpp
bound_function(10);
```

相当于：

```cpp
print_sum(5, 10);
```

输出：

```latex
15
```

---

## 5.3 绑定成员函数
假设类中存在成员函数：

```cpp
class MyClass
{
public:
    void display(int a, int b)
    {
        std::cout << a * b << std::endl;
    }
};
```

创建对象并绑定成员函数：

```cpp
MyClass object;

auto bound_function = std::bind(
    &MyClass::display,
    &object,
    std::placeholders::_1,
    2);
```

调用：

```cpp
bound_function(5);
```

相当于：

```cpp
object.display(5, 2);
```

输出：

```latex
10
```

---

## 5.4 ROS 2成员函数绑定
在ROS 2节点类内部，常见写法为：

```cpp
std::bind(
    &MyNode::message_callback,
    this,
    std::placeholders::_1)
```

各部分含义：

| 内容 | 含义 |
| --- | --- |
| `&MyNode::message_callback` | 要调用的成员函数 |
| `this` | 当前节点对象 |
| `_1` | 调用时再传入的第一个参数 |


定时器回调没有消息参数，因此可以写成：

```cpp
std::bind(
    &MyNode::timer_callback,
    this)
```

订阅回调需要接收消息，因此可以写成：

```cpp
std::bind(
    &MyNode::message_callback,
    this,
    std::placeholders::_1)
```

---

# 六、回调函数
> 原PDF的这一小节只有标题，没有具体正文。这里补充ROS 2中使用回调函数所需的基础内容。
>

## 6.1 什么是回调函数
回调函数是：

> 预先交给系统保存，在指定事件发生时由系统自动调用的函数。
>

普通函数是程序主动调用：

```cpp
do_something();
```

回调函数通常由事件触发：

```latex
收到消息
    ↓
系统调用订阅回调

定时器到期
    ↓
系统调用定时器回调

收到服务请求
    ↓
系统调用服务回调
```

---

## 6.2 定时器回调
```cpp
void timer_callback()
{
    RCLCPP_INFO(
        this->get_logger(),
        "定时器触发");
}
```

注册定时器：

```cpp
using namespace std::chrono_literals;

timer_ = this->create_wall_timer(
    1s,
    std::bind(
        &MyNode::timer_callback,
        this));
```

程序不会在创建定时器时立即执行回调，而是在定时周期到达时调用它。

---

## 6.3 订阅回调
```cpp
void message_callback(
    const MessageType::SharedPtr message)
{
    RCLCPP_INFO(
        this->get_logger(),
        "收到消息");
}
```

注册订阅：

```cpp
using std::placeholders::_1;

subscription_ =
    this->create_subscription<MessageType>(
        "topic_name",
        10,
        std::bind(
            &MyNode::message_callback,
            this,
            _1));
```

当新消息到达时：

1. ROS 2接收消息；
2. 把消息放在`_1`的位置；
3. 调用`message_callback`；
4. 回调函数处理消息。

---

## 6.4 `spin`与回调函数
```cpp
rclcpp::spin(node);
```

`spin`会让节点持续等待并处理事件。

例如：

+ 定时器到期；
+ 收到话题消息；
+ 收到服务请求；
+ 动作状态发生变化。

如果没有执行`spin`，许多已经注册的回调函数不会得到正常处理。

---

# 七、范围`for`循环
## 7.1 基本写法
C++11引入了范围`for`循环，用于依次遍历容器中的元素。

```cpp
for (const auto & element : container)
{
    // 使用element
}
```

它可以遍历：

+ 数组；
+ `std::vector`；
+ `std::list`；
+ 其他支持迭代的对象。

---

## 7.2 与普通`for`循环对比
传统写法：

```cpp
for (std::size_t i = 0; i < values.size(); ++i)
{
    std::cout << values[i] << std::endl;
}
```

范围`for`写法：

```cpp
for (const auto & value : values)
{
    std::cout << value << std::endl;
}
```

当不需要元素下标时，范围`for`通常更加简洁。

---

## 7.3 不同变量写法
### 复制元素
```cpp
for (auto value : values)
```

每次循环都会复制当前元素。

修改`value`不会改变容器中的原始元素。

### 引用元素
```cpp
for (auto & value : values)
```

不会复制元素，并且可以修改容器中的原始元素。

### 只读引用
```cpp
for (const auto & value : values)
```

不会复制元素，也不允许修改原始元素。

如果只需要读取，通常优先使用这种写法。

### 通用引用
```cpp
for (auto && value : values)
```

这种写法可以灵活地绑定不同类型的元素，也能够避免不必要的复制。它在泛型代码和一些特殊容器中比较有用。

不能简单地把这里的`auto&&`理解为“只接收右值”，因为结合`auto`类型推导后，它也可以绑定普通左值元素。

---

## 7.4 ROS 2参数遍历示例
```cpp
auto params = this->get_parameters(
    {"car_name", "width", "wheels"});

for (const auto & param : params)
{
    RCLCPP_INFO(
        this->get_logger(),
        "(%s=%s)",
        param.get_name().c_str(),
        param.value_to_string().c_str());
}
```

运行逻辑：

```latex
获取三个参数
    ↓
依次取出每个参数
    ↓
读取参数名称
    ↓
读取参数值
    ↓
输出参数信息
```

如果需要修改容器中的元素，可以写成：

```cpp
for (auto & param : params)
```

如果只读取参数，使用：

```cpp
for (const auto & param : params)
```

更容易表达代码意图。

---

# 八、知识点之间的关系
这些C++语法在ROS 2程序中经常组合使用：

```cpp
using namespace std::chrono_literals;
using std::placeholders::_1;

auto node = std::make_shared<MyNode>();

timer_ = this->create_wall_timer(
    1s,
    std::bind(
        &MyNode::timer_callback,
        this));

subscription_ =
    this->create_subscription<MessageType>(
        "topic_name",
        10,
        std::bind(
            &MyNode::message_callback,
            this,
            _1));
```

对应关系为：

| 知识点 | 在ROS 2中的作用 |
| --- | --- |
| `chrono_literals` | 简洁表示定时器周期和等待时间 |
| `shared_ptr` | 自动管理节点、消息和通信对象的生命周期 |
| `make_shared` | 创建由智能指针管理的对象 |
| `auto` | 简化复杂类型声明 |
| `_1`、`_2` | 表示回调执行时再传入的参数 |
| `std::bind` | 将成员函数和节点对象绑定成回调 |
| 回调函数 | 处理定时器、消息、服务和动作事件 |
| 范围`for` | 依次遍历参数或其他容器 |


---

# 九、总结
本节知识的重点可以概括为：

```latex
chrono_literals
    负责表示时间

shared_ptr和make_shared
    负责管理对象生命周期

auto
    负责自动推导变量类型

占位符
    负责保留以后传入的参数位置

std::bind
    负责生成新的可调用对象

回调函数
    负责处理事件

范围for
    负责遍历容器
```

理解这些内容后，就能更容易阅读ROS 2中话题、服务、动作、定时器和参数相关的C++代码。
