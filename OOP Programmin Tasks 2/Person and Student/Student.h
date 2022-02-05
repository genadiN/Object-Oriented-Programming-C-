#pragma once

#include "Person.h"

class Student : Person {
public:
    void readStudent ( char * , char * , long , double );
    void printStudent() const;
private:
    long facnom;
    double usp;
};
