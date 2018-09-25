#include "System_Info.h"

using namespace std;

/**
 * @brief system_info::system_info
 * gethostname linux command needs a char *buffer
 * set the hostname to be equal to the result of the buffer after
 * the method
 */
System_Info::System_Info() {
    char *p = (char *)malloc(64*sizeof(char));
    gethostname(p, 64*sizeof(char));
    this->hostname = p;
}

/**
 * @brief system_info::get_host
 * @return  -   Return the hostname
 */
string System_Info::get_host() {
    return this->hostname;
}

/**
 * to_string method to print relevant information
 */
void System_Info::to_string() {
	std::cout << "Hostname: " << this->get_host() << std::endl;
}



