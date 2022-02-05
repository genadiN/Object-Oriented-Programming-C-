#include<iostream>

class Foo{
public:
    Foo(){
        std::cout << "Foo()\n";
    }

    Foo(const Foo& other ){
        std::cout << "Foo copy()\n";
    }

    ~Foo(){
        std::cout<< "~Foo()\n";
    }
};

class Bar : public Foo{
public:
    Bar(){
        std::cout << "Bar()\n";
    }

    Bar(const Bar& other){
        std::cout << "Bar copy()\n";
    }

    ~Bar(){
        std::cout << "~Bar()\n";
    }
};

void do_something(const Foo object){
    Foo* temp = new Bar();
    delete temp;
}

int main(){
    Bar b ;
    do_something(b);
    return 0;
}
