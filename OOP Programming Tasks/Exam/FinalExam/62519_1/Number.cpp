#include "Number.hpp"

Number::Number(){
    number = 0;
}

int Number::get_Number() const{
    return number;
}

void Number::set_Number(int newNumber){
    this->number = number;
}

void Number:: print() const{
    std::cout << number <<'\n';
}

bool Number:: operator==( const Number& rhs) const{
    return this->number == rhs.number;
}

bool Number::operator!=( const Number& rhs)const{
    return !(this->number == number );
}

bool Number::operator< ( const Number& rhs)const{
    return this->number < rhs.number;
}

bool Number::operator>( const Number& rhs)const{
        return this->number > rhs.number;
}

