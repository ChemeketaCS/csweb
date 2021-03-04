CFLAGS =  -Wall -Wextra -I. -g -std=c++11

CFLAGS += -pedantic


CFLAGS += -Wmissing-include-dirs
CFLAGS += -Wfloat-equal
CFLAGS += -Wredundant-decls
CFLAGS += -Winit-self
CFLAGS += -Wshadow
CFLAGS += -Wconversion

all:
	-g++ $(CFLAGS) -o testA.exe testPrintCount.cpp wordSearch.cpp
	-g++ $(CFLAGS) -o testB.exe testCheckPlaceHorizontal.cpp wordSearch.cpp
	-g++ $(CFLAGS) -o testC.exe testGapCount.cpp wordSearch.cpp
	-g++ $(CFLAGS) -o testD.exe testDiagonalPlace.cpp wordSearch.cpp