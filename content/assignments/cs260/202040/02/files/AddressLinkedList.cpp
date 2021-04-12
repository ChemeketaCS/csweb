//----------------------------------------------------------
// CS260 Assignment 2 Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#include "AddressLinkedList.h"

AddressListNode::AddressListNode() {
    next = nullptr;
    //data will be default initialized
}

AddressListNode::AddressListNode(const Address& value)
    : data(value)
{
    next = nullptr;
}
