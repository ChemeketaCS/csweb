//----------------------------------------------------------
// CS260 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>

#include "MySet.h"

using namespace std;

//Returns a vector containing all valid IP addresses starting with 192.168
vector<string> getLocalIPs() {
	vector<string> localIPs;
	localIPs.reserve(256 * 256);		//reserve space in advance to minimize grows
	
	char ip[] = "192.166.XXX.XXX";
	for(int i = 0; i < 256; i++) {
		for(int j = 0; j < 256; j++) {
			sprintf(ip, "192.168.%03d.%03d", i, j);
			localIPs.push_back(ip);
		}
	}
		
	return localIPs;
}


int main()
{
	
}
