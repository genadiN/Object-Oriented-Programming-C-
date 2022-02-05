#include<iostream>
#include<string>

class User{
protected:
    std::string name;
public:

    void info() const{
        std::cout << "Name: " << name << '\n';
    }

    void setName( std::string name){
        this-> name = name;
    }

};

class Student : public User{
public:
    int fn;
    void info()const{
        User::info();
        std::cout << " fn : " << fn << '\n';
    }
};

class Lecturer : public User{
public:
    std::string title;
    void info()const{
        std::cout << title << " ";
        User::info();
    }
};

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
