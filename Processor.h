#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sys/sysinfo.h>
#include <iterator>

/**
 * @brief The processor class
 * methods to return each of the private attributes and 1 to print
 */

class Processor
{
public:
    Processor();
    ~Processor() {};
    void to_string();
    std::string get_vendor();
    std::string get_model();
    std::string get_speed();
    std::vector<long> get_loads();
private:
    std::string vendor;
    std::string model_name, clock_speed;
    unsigned long load[3];
};

#endif // PROCESSOR_H
