#include<iostream>

using namespace std;

class ZooAnimal{
public:
    void print()const{
        cout << "ZooAnimal\n";
        cout << "Address:\n"
            << "Sofia , Bulgaria \n";
    }
private:

};

class Cat : public ZooAnimal{
public:
    void print() const{
        cout << "ZooAnimal\n";
        cout << "Mouse\n";
    }
};

class Mouse : public ZooAnimal{
public:
    void print()const{
        cout << "ZooAnimal\n";
        cout << "Mouse\n";
    }
};

class Bear : public ZooAnimal{
public:
    void print() const{
        cout << "ZooAnimal\n";
        cout << "Bear\n";
    }
};

int main(){

    ZooAnimal zoo;
    zoo.print();
    Cat c;
    c.print();
    Mouse m;
    m.print();
    Bear b;
    b.print();
return 0;
}
