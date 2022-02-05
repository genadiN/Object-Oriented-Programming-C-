#include "Student.h"
#include<iostream>
#include<cstring>

using namespace std;

void Student::readStudent( char *str , char *num , long facn , double u){
    readPerson(str , num);
    facnom = facn;
    usp = u;
}

void Student::printStudent() const{
    printPerson();
    cout << " Fac.nomer = " << facnom << endl;
    cout << " uspeh: " << usp << endl;
}
