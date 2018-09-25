#ifndef NINTER_H
#define NINTER_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <iterator>


class NetworkInterface {
public:
	NetworkInterface(std::string);
	~NetworkInterface() {};
	void to_string();
	std::string get_mac();
	std::string get_name();
private:
	std::string name;
	std::string mac_address;
};

#endif //NINTER_H
