//----------------------------------------------------------
// CS260 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may not be republished without approval.
//----------------------------------------------------------

#ifndef INDEXRECORD_H
#define INDEXRECORD_H


#include <vector>
#include <iostream>
#include <string>


//Location in a book - word number on a given page
struct IndexLocation {
    int pageNum; //1 = first page
    int wordNum; //1 = first word on page

    IndexLocation(int pageNumber, int wordNumber);
};

//define some operators for locations
bool operator<(const IndexLocation& loc1, const IndexLocation& loc2);
bool operator==(const IndexLocation& loc1, const IndexLocation& loc2);

//Prints out location in "page-word" format like:
// 1-5
std::ostream& operator<<(std::ostream& theStream, const IndexLocation& loc);



//Record for a book index consisting of the word and a list
// of locations where that word appears
struct IndexRecord {
    //indexed word
    std::string word;
    //list of locations it appears
    std::vector<IndexLocation> locations;

    IndexRecord();

    //Constructor - make a new index record with no locations
    explicit IndexRecord(const std::string& wordVal);

    //Add an IndexLocation to the record
    // Does NOT check for duplicate records
    void addLocation(const IndexLocation& loc);

    //Returns true if the record contains the indicated location
    bool hasLocation(const IndexLocation& loc) const;
};

//Prints out record in "word: page-word page-word..." format:
// Apple: 1-1 4-6
std::ostream& operator<<(std::ostream& theStream, const IndexRecord& loc);

#endif // INDEXRECORD_H
