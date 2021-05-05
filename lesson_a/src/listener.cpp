#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{

    ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc , char **argv)
{

    ros::init(argc, argv, "node_name_of_subscriber");

    ros::NodeHandle n;
    
    // topic_name : Topic the node is subscribing to

    ros::Subscriber sub = n.subscribe("topic_name", 1000, chatterCallback);

    ros::spin();

    return 0;
}
