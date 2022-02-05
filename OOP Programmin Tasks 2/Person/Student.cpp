#include "Student.h"
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

void Student::readStudent(char *str, char *num, long facn, double u){
    readPerson(str , num);
    facnom = facn;
    usp = u;
}

void Student::printStudent() const{
    printPerson();
    cout << "fac. nomer: " << facnom << endl;
    cout << "uspeh: " << usp << endl;
}
