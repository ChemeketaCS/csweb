all: program.exe test.exe

program.exe: main.cpp LittlePersonComputer.h LittlePersonComputer.cpp
	g++ -std=c++11 -Wall -g main.cpp LittlePersonComputer.cpp -o $@

test.exe: test.cpp LittlePersonComputer.h LittlePersonComputer.cpp
	g++ -std=c++11 -Wall -g test.cpp LittlePersonComputer.cpp -o $@
