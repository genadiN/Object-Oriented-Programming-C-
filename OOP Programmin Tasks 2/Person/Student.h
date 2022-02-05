#pragma once
#include "Person.h"

class Student: Person{
public:
    void readStudent( char * , char * , long , double);
    void printStudent() const;
private:
    //char * name;
    //char * egn;
    long facnom;
    double usp;
};
