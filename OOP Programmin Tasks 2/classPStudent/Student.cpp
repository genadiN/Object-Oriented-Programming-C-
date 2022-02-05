#include "Student.h"

#include<iostream>

#include<cstring>

using namespace std;

void Student :: readStudent( char *str , char *num , long facn , double u){
    name = new char [strlen( str ) + 1];
    strcpy( name , str );
    egn = new char[11];
    strcpy( egn , num);
    facnom = facn;
    usp = u;
}

void Student :: printStudent()const{
    cout << "Name : " << name << endl;
    cout <<"EGN : " << egn << endl;
    cout << "fac.nomer = " << facnom << endl;
    cout << "uspeh = " << usp << endl << endl;
}
