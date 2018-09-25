#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>
#include <sys/sysinfo.h>
#include <string>

class Memory{
public:
	Memory();
	~Memory() {};
	long get_total();
	long get_free();
	void to_string();
private:
	long total;
	long free;
};

#endif //MEMORY_H

