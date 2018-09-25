CXX=g++
CXXFLAGS=-std=c++11

individual: main.o System_Info.o OsInfo.o Processor.o Memory.o NetworkInterfaceList.o NetworkInterface.o ProcessesList.o
	g++ -std=c++11 -o $@ $^

main.o: main.cpp
	g++ -c main.cpp

System_Info.o: System_Info.cpp System_Info.h
	g++ -c System_Info.cpp

SsInfo.o: OsInfo.cpp OsInfo.h
	g++ -c OsInfo.cpp

Processor.o: Processor.cpp Processor.h
	g++ -c Processor.cpp

Memory.o: Memory.cpp Memory.h
	g++ -c Memory.cpp

NetworkInterfaceList.o: NetworkInterfaceList.cpp NetworkInterfaceList.h
	g++ -c NetworkInterfaceList.cpp

NetworkInterface.o: NetworkInterface.cpp NetworkInterface.h
	g++ -c NetworkInterface.cpp
ProcessesList.o: ProcessesList.cpp ProcessesList.h
	g++ -c ProcessesList.cpp

clean:
	rm *.o
