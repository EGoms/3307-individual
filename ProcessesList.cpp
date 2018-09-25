#include "ProcessesList.h"

ProcessesList::ProcessesList() {
	DIR *pDir = opendir("/proc/");
	struct dirent *entry = nullptr;
	
	while ((entry=readdir(pDir))) {
		std::string current = entry->d_name;
		if(current.find_first_not_of("0123456789") == std::string::npos) {
			//std::cout << current << std::endl;
		}
	}
}
