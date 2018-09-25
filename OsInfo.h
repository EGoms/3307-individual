#ifndef OSINFO_H
#define OSINFO_H

#include <iostream>
#include <string>
#include <sys/utsname.h>
#include <sys/sysinfo.h>

/**
 * osinfo header, getter methods for each attribute and print method
 * private method to convert the long uptime into string d:h:m:s
 */ 
class OsInfo {
public:
    OsInfo();
    ~OsInfo() {};
    void to_string();
    std::string get_os();
    std::string get_release();
    std::string get_version();
    std::string get_data();
    std::string get_up();
private:
    std::string operating_system;
    std::string release;
    std::string version;
    std::string machine_data;
    long up;
    std::string uptime;	//hold uptime after conversion
    std::string timer(long);	//helper method convert long to string
};

#endif // OSINFO_H
