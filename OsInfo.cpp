#include "OsInfo.h"

/**
 * constructor uses uname and sysinfo methods to gather information
 */
OsInfo::OsInfo() {
    struct utsname data;
    struct sysinfo uptime;
    
    uname(&data);
    sysinfo(&uptime);
    this->operating_system = data.sysname;
    this->release = data.release;
    this->version = data.version;
    this->machine_data = data.machine;
    this->up = uptime.uptime;
    this->uptime = timer(this->up);
}

/**
 * converts a long into a string using to_string method
 */
std::string OsInfo::timer(long time) {
    auto days = std::to_string(((time / 60) / 60) / 24);
    auto hours = std::to_string(((time/60)/60) % 24);
    auto minutes = std::to_string((time / 60) % 60);
    auto seconds = std::to_string(time % 60);
    return days + ":" + hours + ":" + minutes + ":" + seconds;
}

/**
 * Special to_string method for osinfo
 */
void OsInfo::to_string() {
    std::cout << "Operating system: " << this->operating_system << std::endl;
    std::cout << "Release: " << this->release << std::endl;
    std::cout << "Version: " << this->version << std::endl;
    std::cout << "Machine data: " << this->machine_data << std::endl;
    std::cout << "Uptime: " << this->uptime << " D:h:m:s" << std::endl;
}

std::string OsInfo::get_os() {
    return this->operating_system;
}

std::string OsInfo::get_release() {
    return this->release;
}

std::string OsInfo::get_version() {
    return this->version;
}

std::string OsInfo::get_data() {
    return this->machine_data;
}

std::string OsInfo::get_up() {
    return this->uptime;
}
