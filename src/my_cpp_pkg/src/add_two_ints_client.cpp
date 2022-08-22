#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"


 
class AddTwoIntsClientNode : public rclcpp::Node // MODIFY NAME
{
public:
    AddTwoIntsClientNode() : Node("add_two_ints_client") // MODIFY NAME
    {
        //thread1_ = std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 1, 4));
        //when the program starts, a new thread thread1_ is started 
        //to call more than 1 thread:
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 1, 4)));
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 3, 7))); 

    }

    void callAddTwoIntsService (int a, int b)
    {
        //function to call the service from server
        auto client = this -> create_client<example_interfaces::srv::AddTwoInts>("add_two_ints"); //args type, in brackets add service name 
        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up...");    
        }

        //create request
        auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b;

        //call client and receive a shared future object
        auto future = client->async_send_request(request);


        //we wait for future, block the thread, call callAddTwoIntsService function, and then create a new thread
        //we have to call this function in a new thread
        try 
        {
        auto response = future.get(); //waits until we get a response for the future
        RCLCPP_INFO(this->get_logger(), "%d + %d = %d", a,b, response->sum);

        }
        catch(const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
        }
    

    }
 
private:
    //std::thread thread1_;
    std::vector<std::thread> threads_;
};
 
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddTwoIntsClientNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

//problem with no oop: we have to spin unil future complete, but when the node is spinning, you cant spin the node again, so we have to find a way to replace the spin until future while the node is already spinning

