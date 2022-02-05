
#include<iostream>
#include<cstring>
class Person{
public:
// dynamic memory  = no "" but only nullptr ;
    Person(): name("") , age(0){}
    Person( const char* name , const unsigned age):
// dynamic memory should be done ;
    //    name(name) , age( age ){}
    Person(const Person& rhs){
        this->operator=(rhs);
    }

    Person& operator=(const Person& from){
        if(this != &from){
            delete[] this-> name;
// don't allocate needed memory in the stack strlen needed
            strcpy[this->name , from.name];

            this-> age = from.age;
        }
        return *this;
    }

    ~Person(){
        delete[] this ->name;

// don't need to delete information from age it is not a dynamic memory;
        delete this-> age;
    }

    char* get_name()const{
        return this-> name;
    }

    unsigned get_age()const{
        return this-> age;
    }

    void set_name(const char* new_name){
// it should have allocate dynamic memory ;
        this->name = new name;
    }
private:
    char* name;
    unsigned age;
};

int main(){
    Perosn p ;
}
