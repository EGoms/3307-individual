#include "Processor.h"

/**
 * Constructor. uses sysinfo to get load averages and stores in long[]
 * read in /proc/cpuinfo to get the rest of the info
 * break on token : and find specific keys for the info we want
 */ 
Processor::Processor() {
	struct sysinfo avg;
	sysinfo(&avg);
	for (int i = 0; i < 3; i++) {
		this->load[i] = avg.loads[i];
	}
	
    std::ifstream f("/proc/cpuinfo");
    std::string line;
	
    const std::string VENDOR("vendor_id");
    const std::string MODEL("model name");
    const std::string MHZ("cpu MHz");
    const std::string DELIM(":");

    while(std::getline(f, line)) {
        if(line.find(VENDOR) != std::string::npos)
            this->vendor = line.substr(line.find(DELIM) + 2, line.length());
        else if(line.find(MODEL) != std::string::npos)
            this->model_name = line.substr(line.find(DELIM) + 2, line.length());
        else if(line.find(MHZ) != std::string::npos)
            this->clock_speed = line.substr(line.find(DELIM) + 2, line.length());
    }
}

std::string Processor::get_vendor() {
    return this->vendor;
}

std::string Processor::get_model() {
    return this->model_name;
}

std::string Processor::get_speed() {
    return this->clock_speed;
}

std::vector<long> Processor::get_loads() {
	std::vector<long> l(std::begin(this->load), std::end(this->load));
	return l;
}

/**
 * print method using getter methods 
 */

void Processor::to_string() {
    std::cout << "Vendor: " << this->get_vendor() << std::endl;
    std::cout << "Model name: " << this->get_model() << std::endl;
    std::cout << "Clock speed: " << this->get_speed() << " MHz" <<std::endl;
    std::cout << "Load average: ";
    for (int i = 0; i < 3; i++) {
		std::cout << this->load[i] << ' ';
	}
	std::cout << std::endl;
	
}
