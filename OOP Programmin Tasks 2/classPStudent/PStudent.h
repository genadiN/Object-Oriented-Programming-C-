#pragma once

#include "Student.h"

class PStudent: public Student
{
public:
    void readPStudent( char * , char * , long , double , double );
    void printPStudent() const;
private:
    double tax;// tax for education
};

