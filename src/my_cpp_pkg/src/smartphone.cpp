#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"
 
class SmartphoneNode: public rclcpp::Node // MODIFY NAME
{
public:
    SmartphoneNode() : Node("smartphone") // MODIFY NAME
    {
        subscriber_ = this->create_subscription<example_interfaces::msg::String>(
            "robot_news", 10, 
            std::bind(&SmartphoneNode::callbackRobotNews, this, std::placeholders::_1)); //args: topicName, qSize, callback function
            RCLCPP_INFO(this->get_logger(), "Smartphone has been started");
    }
 
private:
    void callbackRobotNews(const example_interfaces::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());

    }
    //declare subscription called subscriber_
    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};
 
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SmartphoneNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

//need 2 things: subscriber object and callabck 
// for every callback for a subscriber, you use:  const, name of message ::SharedPtr
// for every callback use std::bind(&NodeName::callbackFuncName, this) if callback function takes in parameters, add third argument: std::placeholders::_1