//----------------------------------------------------------
// CS260 Assignment 1 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------
#ifndef PERSON_H
#define PERSON_H

#include <string>


//OK to add code here


//--------------------------------------------------
//DO NOT MODIFY THIS BLOCK
//--------------------------------------------------

struct Person {
    std::string kNum;
    std::string last;
    std::string first;
    int zipCode;
};

//Two Persons are == if their kNum is ==
bool operator==(const Person& p1, const Person& p2);

//Sort a portion of array of Persons by zicode
//  Range of elements to sort is [start-end) (inclusive or start, exclusive of end)
void partialZipSort(Person* array, int start, int end);

//Counts all the individuals in an array who have a given last name
int countLastName(const std::string& lastName, const Person* array, int size);

//Sort an array of Persons so that they are alphabetized by last name
//  Individuals with the same last name should be ordered by first name
void nameSort(Person* array, int size);

//Returns index of the first Person with a given lastName
//  If there is no one with that last name, return the size to indicate failure
int binaryFindFirstByLastName(const std::string& lastName, const Person* array, int size);

//Returns index of the first Person with a given lastName
//  If there is no one with that last name, return the size to indicate failure
int binaryFindLastByLastName(const std::string& lastName, const Person* array, int size);

//Counts all the individuals in an array who have a given last name.
//  Function ONLY works on arrays sorted by last name.
int countLastNameInSorted(std::string lastName, const Person* array, int size);

//--------------------------------------------------
//END DO NOT MODIFY BLOCK
//--------------------------------------------------


//OK to add code here



#endif // PERSON_H
