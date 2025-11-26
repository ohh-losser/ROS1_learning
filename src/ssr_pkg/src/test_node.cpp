#include <ros/ros.h>

int main(int argc, char *argv[])
{
    /* code */
    ros::init(argc, argv, "chao_node");
    printf("hello world\n");

    while(ros::ok()) {
        printf("not stop\n");
    }

    return 0;
}
