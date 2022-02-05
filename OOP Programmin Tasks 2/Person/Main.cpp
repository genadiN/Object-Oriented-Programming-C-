#include "Student.h"
#include<iostream>

using namespace std;

int main(){
    Student stud;
    stud.readStudent("Ivan Ivanov" , "8206123422" ,
                     42444 , 6.0);
    stud.printStudent();
}
