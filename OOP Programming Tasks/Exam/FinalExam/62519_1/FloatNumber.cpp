#include "FloatNumber.hpp"
#include <iostream>

FloatNumber::FloatNumber(){
    number = 0.0;
}
int FloatNumber::get_Float_Number()const{
    return number;
}

void floatNumber::set_Float_Number( float newNumber){
    this->number = newNumber;
}

bool FloatNumber::operator==( const FloatNumber& rhs) const{
    return number == rhs.number;
}

bool FlaotNumber::operator!=( const FloatNumber& rhs) const{
    return !(number == rhs.number);
}

bool operator< ( const FloatNumber& rhs) const{
    return number < rhs.number;
}

bool operator>( const FloatNumber& rhs) const {
        return number > rhs.number;
}

void FloatNumber::print(){
    std::cout << number;
}

