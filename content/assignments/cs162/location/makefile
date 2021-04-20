all: test.exe play.exe

play.exe: Location.cpp Location.h main.cpp
	g++ -std=c++11 -Wall -g Location.cpp main.cpp -o $@

test.exe: Location.cpp Location.h LocationTester.cpp
	g++ -std=c++11 -Wall -g Location.cpp LocationTester.cpp -o $@
