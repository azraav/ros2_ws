#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/hardware_status.hpp"

class HardwareStatusPublisherNode: public rclcpp::Node // MODIFY NAME
{
public:
    HardwareStatusPublisherNode() : Node("hw_status_publisher") // MODIFY NAME
    {
        //declare parameters
        //this->declare_parameter("num", 2); declare parameter args: param name, default value 

        //get value of param
        //num_ = this->get_parameter("num").as_int()  - type of param : have to be sure to use correct type at runtime!


        // initialise publisher
        publisher_ = this->create_publisher<my_robot_interfaces::msg::HardwareStatus>("hardware_status", 10); // this means its from the Node class and is a ros2 functionality //args: topic_name, qSize
        timer_ = this->create_wall_timer(std::chrono::seconds(1),
                                         std::bind(&HardwareStatusPublisherNode::publish_hw_status, this));
        RCLCPP_INFO(this->get_logger(), "Hardware Status Publisher has been started.");
    }

private:
    void publish_hw_status() // function to publish news
    {
        auto msg = my_robot_interfaces::msg::HardwareStatus();
        msg.temperature = 57;
        msg.are_motors_ready = false;
        msg.debug_message = "Motors are too hot!";
        publisher_->publish(msg);
    }

    rclcpp::Publisher<my_robot_interfaces::msg::HardwareStatus>::SharedPtr publisher_; // create publisher
    rclcpp::TimerBase::SharedPtr timer_;
};
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<HardwareStatusPublisherNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}