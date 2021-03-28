//----------------------------------------------------------
// CS260 Assignment 1 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#include "Person.h"

using namespace std;

bool operator==(const Person& p1, const Person& p2){
	if(p1.kNum == p2.kNum)
		return true;
	else
		return false;
}

bool operator<(const Person& p1, const Person& p2) {
	if(p1.last < p2.last || 
	   p1.last == p2.last && p1.first < p2.first)
		return true;
	else
		return false;
}

void partialZipSort(Person* array, int start, int end) {
	//TODO
}


void nameSort(Person* array, int size) {
	//TODO
}


int countLastName(const std::string& lastName, const Person* array, int size) {
	//TODO
	return 0;
}

int binaryFindFirstByLastName(const std::string& value, const Person* array, int size) {
	//TODO
	return -1;
}


int binaryFindLastByLastName(const std::string& value, const Person* array, int size) {
	//TODO
	return -1;
}


int countLastNameInSorted(std::string lastName, const Person* array, int size) {
	//TODO
	return 0;
}
