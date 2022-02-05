#include "Person.h"

#include<iostream>
#include<cstring>

using namespace std;

void Person :: readPerson( char *str , char *num){
    name = new char[ strlen( str ) + 1];
    strcpy( name , str);
    egn = new char[11];
    strcpy( egn , num);
}

void Person :: printPerson() const{
    cout << "Ime : " << name << endl;
    cout << "EGN : " << egn << endl << endl;
}
