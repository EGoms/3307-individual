#ifndef NETWORK_INTERFACE_LIST_H
#define NETWORK_INTERFACE_LIST_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <iterator>
#include "NetworkInterface.h"


class NetworkInterfaceList {
public:
	NetworkInterfaceList();
	~NetworkInterfaceList() {};
	std::vector<NetworkInterface> get_in();
	void to_string();
private:
	std::vector<NetworkInterface> in;
};

#endif //NETWORK_INTERFACE_LIST_H
