CXX=g++
CXXFLAGS=-std=c++11
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.c=.o)
TARGET=individual

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -std=c++11 -o $@ $^
%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $<
%.o: %.cpp
	$(CXX) ($CXXFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)
