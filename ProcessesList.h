#ifndef PROCESSES_LIST_H
#define PROCESSES_LIST_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <iterator>

class ProcessesList {
public:
	ProcessesList();
	~ProcessesList() {};
	void to_string();
};

#endif

