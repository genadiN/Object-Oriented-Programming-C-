#include<iostream>

class Grandparent{
public:
    std::string name;
    std::string getName(){
        return this-> name;
    }

    void setName( const std::string newName){
        this-> name = newName;
    }
};

class Parent1 : virtual public Grandparent{

};

class Parent2 :virtual public Grandparent{

};

class Child : public Parent1 , public Parent2{

};


int main(){
    Grandparent g;
    Parent1 p1;
    Parent2 p2;
    Child c;

    g.setName("Grand");
    std::cout << g.getName() << std::endl;
    p1.setName("Parent1");
    std::cout << p1.getName() << std::endl;
    p2.setName("Parent2");
    std::cout << p2.getName()<< std::endl;

    c.setName("Child");
    std::cout <<c.getName();
}
