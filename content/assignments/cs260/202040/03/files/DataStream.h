//----------------------------------------------------------
// CS260 Assignment 3 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#ifndef QUEUE_DATA
#define QUEUE_DATA

#include <random>
#include <string>
#include <cstdint>

//A packet of data
struct Packet {
    //16 bit numeric value representing priority. Higher priority = more important
    uint16_t priority;

    //Contents of packet
    std::string data;

    //Compare packets via their priority. 
    // Lower packets are less than higher priority ones
    bool operator<(const Packet& other) const;
    bool operator>(const Packet& other) const;
};

//Class that simulates a stream of data
class DataStream {
public:
    //Get one packet
    Packet getPacket();

    //Initialize DataStream with a seed value
    DataStream(unsigned int sourceSeed);
private:
    std::mt19937 gen;
};


#endif
