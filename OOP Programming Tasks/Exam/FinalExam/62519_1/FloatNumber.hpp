#pragma once
#include "Number.hpp"

class FloatNumber : public Number{
float number ;
public:
    FloatNumber();

    int get_Float_Number()const;

    void set_Float_Number( float newNumber);

    bool operator==( const FloatNumber& rhs) const;
    bool operator!=( const FloatNumber& rhs) const;
    bool operator<( const FloatNumber& rhs) const;
    bool operator>( const FloatNumber& rhs) const;

    void print();
};



