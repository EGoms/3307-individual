#ifndef SYSINFO_H
#define SYSINFO_H

#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>

/**
 * @brief The system_info class
 * Only attribute is hostname
 */
class System_Info {
private:
    std::string hostname;
public:
    System_Info();
    ~System_Info() {};
    void to_string();
    std::string get_host();

};

#endif // SUS_H
