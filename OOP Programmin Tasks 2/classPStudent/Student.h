#pragma once
#include "Person.h"

class Student : public Person{
public:
    void readStudent( char * , char * , long , double);
    void printStudent() const;
protected:
    long facnom;
    double usp;

};
