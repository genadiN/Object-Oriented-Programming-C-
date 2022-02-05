#include "PStudent.h"

#include<iostream>

#include<cstring>

using namespace std;

void PStudent::readPStudent( char *str , char *num ,
                        long facn , double u , double t){
   // Easy access to name , egn , facnom , usp
    name = new char[strlen( str ) + 1];
    strcpy( name , str );
    egn = new char[11];
    strcpy( egn , num);
    facnom = facn;
    usp = u;
    tax = t;
}

void PStudent::printPStudent()const  {
    cout << "Ime: " << name << endl;
    cout << "EGN : " << egn << endl;
    cout << "facnomer: " << facnom << endl;
    cout << "uspeh: " << usp << endl;
    cout << " Tax: " << tax << endl << endl;
}
