//----------------------------------------------------------
// CS260 Assignment 3 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <iostream>


template<typename T>
class PriorityQueue
{
private:
    T* data;        //array containing the heap
    int capacity;   //maximum size
    int queueSize;   //current logical size

    //Double the size of the underlying array
    void grow();

public:
    //Get a copy of the top item
    T getMax();

    //Rmove the top item and return it
    T removeMax();

    //Add the given value to the heap
    void add(const T& value);

    //Construct a max heap with initial space for 32 items
    PriorityQueue();

    //Destroy the max heap and release memory
    ~PriorityQueue();

    //You do not need to implement copy ctor and assignment operator
    // Declared to prevent accidental use of defaults
    PriorityQueue(const PriorityQueue& other);
    PriorityQueue& operator=(const PriorityQueue& other);
};







#endif // PRIORITYQUEUE_H
