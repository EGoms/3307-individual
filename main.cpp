#include <iostream>
#include <string>
#include "System_Info.h"
#include "OsInfo.h"
#include "Processor.h"
#include "Memory.h"
#include "NetworkInterfaceList.h"
#include "NetworkInterface.h"
#include "ProcessesList.h"

int main() {
	System_Info *sys = new System_Info;
	OsInfo *os = new OsInfo;
	Processor *pr = new Processor;
	Memory *mem = new Memory;
	NetworkInterfaceList *nl = new NetworkInterfaceList;
	ProcessesList *prl = new ProcessesList;
	
	sys->to_string();
	os->to_string();
	pr->to_string();
	mem->to_string();
	nl->to_string();
	
	return 0;
}
