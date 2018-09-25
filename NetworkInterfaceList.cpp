#include "NetworkInterfaceList.h"

class NetworkInterface;

NetworkInterfaceList::NetworkInterfaceList() {
	DIR *pDir = opendir("/sys/class/net");
	struct dirent *entry = nullptr;
	
	while ((entry=readdir(pDir))) {
		std::string current(entry->d_name);
		if(current.find(".") == std::string::npos) {
			NetworkInterface *net = new NetworkInterface(current);
			this->in.push_back(*net);
		}
	}
}

std::vector<NetworkInterface> NetworkInterfaceList::get_in() {
	return this->in;
}

void NetworkInterfaceList::to_string() {
	auto x = this->get_in();
	for (NetworkInterface &net : x) {
		net.to_string();
	}
}

