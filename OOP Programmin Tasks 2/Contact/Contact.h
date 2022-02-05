
#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>

using namespace std;

class Contact{
public:
    friend istream operator >> ( istream& a , Contact& e);
    friend istream operator << ( ostream &a , const Contact& e);

    // constructor
    Contact();
    //function for acceptance
    const char* getName() const; // return the contactName

private:
    char name[20];  // name with 20 symbols
    char phoneNumber[20];   //tel number with 20 symbols
    char address[20];   //address with 20 symbols
};
#endif // CONTACT_H
