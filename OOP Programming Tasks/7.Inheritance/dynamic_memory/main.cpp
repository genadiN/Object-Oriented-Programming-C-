#include<iostream>
#include<cstring>

class User {
protected:
    char* name = nullptr;
public:
    User(const char* newName = ""){
        std::cout << "Constructor User\n";
        setName(newName);
    }
    ~User(){
        std::cout << "Destructor User\n";
        delete[] this-> name;

    }
    User(const User& rhs){
        setName(rhs.name);
    }
    User& operator=(const User& rhs ){
        if ( this != &rhs){
            setName(rhs.name);
        }
        return *this;
    }

    void setName(const char* name_){
        delete[] this-> name;
        this->name = new char[strlen(name_) ];
        strcpy(this-> name , name_);
    }
    const char* getName() const{
        return this-> name;
    }
};

class Student : public User{
public :
    int fn;
    Student(const char* name, int fn) : fn( fn ) , User(name){
        std::cout << "Constructor Student\n";
    }
    ~Student(){
        std::cout << "Destructor Student\n";
    }
/*
    Student& operator=( const Student& rhs){
        User::operator=(rhs);
    }
*/
};

int main(){
    Student s("Ivan" , 42);
}
