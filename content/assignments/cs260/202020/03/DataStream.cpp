//----------------------------------------------------------
// CS260 Assignment 3 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#include <random>
#include "DataStream.h"

using namespace std;


bool Packet::operator<(const Packet& other) const {
    return priority < other.priority;
}

bool Packet::operator>(const Packet& other) const {
    return priority > other.priority;
}


char randomHex(std::mt19937& gen) {
    static std::uniform_int_distribution<> dis(0, 16);
    unsigned int val = dis(gen);
    char c = (val < 10) ? static_cast<char>('0' + val)
                        : static_cast<char>('A' + (val - 10));
    return c;
}

string randomHexString(std::mt19937& gen, int len) {
    string s;
    //s.reserve(len);
    for (auto i = 0; i < len; i++) {
        s += randomHex(gen);
    }
    return s;
}

uint16_t randomPriority(std::mt19937& gen) {
    static std::uniform_int_distribution<> dis(0, UINT16_MAX);
    uint16_t val = static_cast<uint16_t>(dis(gen));
    return val;
}

Packet DataStream::getPacket() {
    Packet p;
    p.priority = randomPriority(gen);
    p.data = randomHexString(gen, 16) + "-" + 
            randomHexString(gen, 16) + "-" + 
            randomHexString(gen, 16) + "-" + 
            randomHexString(gen, 16);
    return p;
}


DataStream::DataStream(unsigned int sourceSeed) 
: gen(sourceSeed)
{}
