#include <iostream>

class Foo{
public:
    void pretty_print(const int& number){
        std::cout << "the number is: ";
        this->print_just_number(number);
        std::cout<< "!\n";
    }

// Fault
// mut be : void print_just_number( const int & number){}
    void print_just_number( int& number){
        std::cout << number;
    }
};


int main(){
    Foo a;
    a.pretty_print(5);
}
