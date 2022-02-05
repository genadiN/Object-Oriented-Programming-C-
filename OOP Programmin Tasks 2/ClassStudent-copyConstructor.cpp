#include<iostream>
#include<cstring>

using namespace std;

class Person{
public:
    Person(char * = "" , char * = "");
    Person(const Person &);
    void printPerson() const;
    ~Person();
private:
    char * name;
    char * egn;
};

Person::Person( char *str , char *num){
    name = new char[strlen(str) + 1];
    strcpy(name , str);
    egn = new char[11];
    strcpy(egn , num);
}

Person::Person( const Person &p){
    name = new char[strlen(p.name) + 1];
    strcpy( name , p.name);
    egn = new char[11];
    strcpy( egn , p.egn);
}

void Person::printPerson() const{
    cout << "Ime: " << name << endl;
    cout << "EGN: " << egn << endl;
}

Person::~Person(){
    cout <<"destructor Person" << endl;
    delete name;
    delete egn;
}

class Student: public Person {
public:
    Student( char * = "" , char * = "" , long = 0 , double = 0);
    Student( const Student& st);
    void printStudent() const ;
    ~Student(){
    cout << "~Student()" << endl;
    }
private:
    long facnom;
    double usp;

};

Student::Student ( char *str , char *num ,
long facn , double u ): Person( str , num){
            facnom = facn;
            usp = u;
}

Student::Student( const Student &st):Person(st){
    facnom = st.facnom;
    usp = st.usp;
}

void Student:: printStudent() const{
    printPerson();
    cout <<" Fac.nomer = " << facnom << endl;
    cout <<" Uspeh: " << usp << endl;
}

int main(){
    Student s1("Ivan Ivanov" , "8206123422" , 42444 , 6.0);
    s1.printStudent();
    Student s2 =s1;
    s2.printStudent();

return 0;
}
