#include"PStudent.h"
#include<iostream>

using namespace std;
int main(){
    Person pe ;
    Student stud;
    PStudent pstud;
    pe.readPerson( "Ivan Ivanov" , "5804134986");
    pe.printPerson();
    stud.readStudent( "Pavel Dimov" , "4806193046" , 30100 , 4.50);
    stud.readPerson( "Pavel Dimov" , "4806193046");
    stud.printPerson();
    stud.printStudent();
    pstud.readPStudent( "Pavel Dimov" , "4806193046" , 30100 , 4.50 , 50.0);
    pstud.readStudent("Pavel Dimov" , "4806193046" , 30100 , 4.50);
    pstud.readPerson("Pavel Dimov" , "4806193046");
    pstud.printPerson();
    pstud.printStudent();
    pstud.printPStudent();
return 0;
}
