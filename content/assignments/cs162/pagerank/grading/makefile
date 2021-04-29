CFLAGS =  -Wall -Wextra -I. -g -std=c++11

CFLAGS += -pedantic

CFLAGS += -Wmissing-include-dirs
CFLAGS += -Wfloat-equal
CFLAGS += -Wredundant-decls
CFLAGS += -Winit-self
CFLAGS += -Wshadow
CFLAGS += -Wconversion

all:
	-g++ $(CFLAGS) -o tests.exe *age.cpp PageTester.cpp -I../..
	-g++ $(CFLAGS) -o program.exe *age.cpp main.cpp -I../..