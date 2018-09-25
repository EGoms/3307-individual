#include "Memory.h"

Memory::Memory() {
	struct sysinfo ram;
	sysinfo(&ram);
	
	this->total = ram.totalram;
	this->free = ram.freeram;
}

long Memory::get_total() {
	return this->total;
}

long Memory::get_free() {
	return this->free;
}

void Memory::to_string() {
	std::cout << "Total RAM: " << this->get_total() << " KB" << std::endl;
	std::cout << "Free RAM: " << this->get_free() << " KB" << std::endl;
}
