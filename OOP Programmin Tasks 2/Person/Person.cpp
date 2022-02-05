#include "Person.h"
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

void Person::readPerson(char *str , char *num){
    name = new char[strlen(str) + 1];
    strcpy(name , str);
    egn = new char[11];
    strcpy(egn , num);
}

void Person::printPerson() const{
    cout << "Ime: " << name << endl;
    cout << "EGN: " << egn << endl;
}

int main(){
    Person p;
    p.readPerson("Ivan" , "123456789");
    p.printPerson();
return 0;
}
