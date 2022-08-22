#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class RobotNewsStationNode : public rclcpp::Node // MODIFY NAME
{
public:
    RobotNewsStationNode() : Node("robot_news_station"), robot_name_("R2D2") // MODIFY NAME
    {   
        //parameters
        this->declare_parameter("name", "C3PO");
        this->robot_name_ = this->get_parameter("name").as_string();
        

        // initialise publisher
        publisher_ = this->create_publisher<example_interfaces::msg::String>("robot_news", 10); // this means its from the Node class and is a ros2 functionality //args: topic_name, qSize
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
                                         std::bind(&RobotNewsStationNode::publishNews, this));
        RCLCPP_INFO(this->get_logger(), "Robot News Statioon has been started.");
    }

private:
    void publishNews() // function to publish news
    {
        auto msg = example_interfaces::msg::String();
        msg.data = std::string("Hi, this is ") + robot_name_ + std::string(" from the robot news station");
        publisher_->publish(msg);
    }

    std::string robot_name_;
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_; // create publisher
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotNewsStationNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}