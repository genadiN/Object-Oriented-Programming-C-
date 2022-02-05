#pragma once
#include <iostream>

class Number{
protected:
    int number;
public:
    Number();

    int get_Number() const;

    void set_Number(int newNumber);

    void print() const;

    bool operator==( const Number& rhs) const;
    bool operator!=( const Number& rhs) const;
    bool operator< ( const Number& rhs) const;
    bool operator>( const Number& rhs) const ;

};
