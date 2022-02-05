#include<iostream>

class Parent{
public:
    virtual void print(){
        std::cout << "Parent\n";
    }

    virtual Parent& operator=(const Parent& rhs){
        return *this;
    }

    virtual ~Parent(){
        std::cout << "~Parent()\n";
    }
};

class Child : public Parent{
public:
    std :: string name = "Genadi";
    void print()override{
        std::cout <<"Child with name " << this->name << "\n";
        printName();
    }

    void printName(){
        std::cout << " with name " << this -> name << "\n";
    }

    ~Child(){
        std::cout << "~Child()\n";
    }
};


int main(){
    Parent *p = new Parent();
    p -> print();

    Parent *c = new Child();
    c -> print();
    Child c2 = *c;

    delete p;
    delete c;
}
