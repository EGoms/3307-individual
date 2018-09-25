#include "NetworkInterface.h"

NetworkInterface::NetworkInterface(std::string key) {
	this->name = key;
	std::ifstream f("/sys/class/net/"+key+"/address");
	std::string line;
	std::getline(f, line);
	this->mac_address = line;
}

std::string NetworkInterface::get_mac() {
	return this->mac_address;
}

std::string NetworkInterface::get_name() {
	return this->name;
}

void NetworkInterface::to_string() {
	std::cout << "MAC address: " << this->get_mac() << " For: " << this->get_name() << std::endl;
}

