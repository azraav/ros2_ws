#include "rclcpp/rclcpp.hpp" //be sure to edit c_cpp_properties.json with /opt/ros/foxy/include to include this library

// using OOPS recommended
class MyNode : public rclcpp::Node
{
public:
    MyNode() : Node("cpp_test"), counter_(0) // constructor, init Node with node name, counter initialised 
    {
        RCLCPP_INFO(this->get_logger(), "Hello Cpp Node");

        timer_ = this->create_wall_timer(std::chrono::seconds(1),
                                         std::bind(&MyNode::timerCallback, this)); // first arg seconds in int, second arg which function to bind to
    }

private:
    void timerCallback()
    {   
        counter_++;
        RCLCPP_INFO(this->get_logger(), "Hello %d", counter_);
    }

    rclcpp::TimerBase::SharedPtr timer_ ;// shared pointer to timer
    int counter_; //counter declared
};

// main function with OOPS
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>(); // call constructor
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

/* main function without OOPS
int main(int argc, char **argv){
    rclcpp::init(argc,argv);  //initialise ros 2 communication
    auto node = std::make_shared<rclcpp::Node>("cpp_test"); //we used std::make_shared to create a shared pointer named auto, which has a node
    RCLCPP_INFO(node->get_logger(), "Hello Cpp Node"); //logger
    rclcpp::spin(node); //spin function expects to receive a shared pointer to a rclcpp node
    rclcpp::shutdown(); //shutdown down always
    return 0;
}
*/

// we cant directly run cpp code from terminal, we have to compile it then install it, using CMakeLists.txt
// Once installed and compiled, we can use ros2 run to run executable

// 1.cd ros2_ws/ - colcon build --packages-select pkg name
// 2. cd install/pkg_name/lib/pkg_name ./executable name

// After this, can use ros2 tools to run
// 3. source .bashrc
// 4. ros2 run pkg_name executable_name
