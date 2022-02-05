#include<iostream>
#include<cstring>

using namespace std;

class Person{
public:
    Person( char * = "" , char * = "");
    Person( const Person &);
    Person& operator=( const Person& p);
    void printPerson() const;
    ~Person();
private:
    char * name;
    char * egn;
};
Person::Person( char *str , char *num){
    name = new char[strlen(str) + 1];
    strcpy( name , str);
    egn = new char [11];
    strcpy( egn , num);
}

Person::Person( const Person &p){
    name = new char [strlen(p.name) + 1];
    strcpy( name , p.name);
    egn = new char [11];
    strcpy(egn , p.egn);
}

Person& Person:: operator= (const Person& p){
    if ( this != &p){
        delete []name;
        delete []egn;
        name = new char[strlen(p.name) + 1];
        strcpy( name , p.name);
        egn = new char[11];
        strcpy( egn , p.egn);
    }
    return *this;
}

Person::~Person(){
    cout << "~Person()" << endl;
    delete []name;
    delete []egn;
}

void Person::printPerson() const{
    cout <<"Ime : " << name << endl;
    cout << "EGN: " << egn << endl;
}

class Student : Person{
public:
    Student( char * = "" , char * = "" , long = 0, double = 0);
    Student( const Student &p);
    void printStudent() const;
    Student& operator=(const Student& st);
    ~Student(){
        cout << "~Student()" << endl;
    }
private:
    long facnom;
    double usp;
};

Student::Student( char *str , char *num ,
long facn, double u):Person( str , num ){
    facnom = facn;
    usp = u;
}

Student::Student( const Student &st): Person(st){
    facnom = st.facnom;
    usp = st.usp;
}

Student& Student::operator=( const Student& st){
    if ( this != &st){
        Person::operator=(st);
        facnom = st.facnom;
        usp = st.usp;
    }
    return *this;
}

void Student::printStudent()const{
    printPerson();
    cout << "Fac.nomer: " << facnom << endl;
    cout << "Uspeh: " << usp << endl;
}

class PStudent : public Student{
public:
    PStudent( char * = "" , char * = "" , long = 0,
    double = 0, double = 0);
    PStudent& operator=( const PStudent& st);
    ~PStudent(){
        cout << "~PStudent()"<< endl;
    }
    void printPStudent() const;
protected:
    double tax;
};

PStudent::PStudent( char *str , char *num , long facn,
double u , double t):Student( str , num , facn , u){
    tax = t;
}

PStudent& PStudent::operator=( const PStudent& st){
    if(this != &st){
        Student::operator=(Student(st));
        tax = st.tax;
    }
    return *this;
}

void PStudent::printPStudent() const{
    printStudent();
    cout <<"Fee: " << tax << endl;
}

int main(){
    PStudent s1("Ivan Ivanov" , "8206123422" , 42444 , 6.0 , 4444);
    s1.printPStudent();
    PStudent s2("Jonko Dimov" , "9012074442" , 43344 , 5 , 3434);
    s2.printPStudent();
    s2 = s1;
    s2.printPStudent();

return 0;
}
