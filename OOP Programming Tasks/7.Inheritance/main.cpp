#include<string>
#include "User.hpp"
#include "Student.hpp"
#include "User.hpp"
#include "Lecturer.hpp"

int main(){
    User user;
    user.setName( "User 1");
    user.info();

    Student student;
    student.fn = 60000;
    student.setName("Student 1");
    student.info();

    Lecturer Lecturer ;
    Lecturer.title = " Dr. ";
    Lecturer.setName("Lecturer");
    Lecturer.info();
}

