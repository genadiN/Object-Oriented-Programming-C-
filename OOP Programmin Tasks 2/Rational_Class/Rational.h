
#pragma once

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
private:
    int numer , denom;
    int gcd( int m , int );
    int absolute(int number);
public:
    Rational();
    Rational(int , int );

    int getNumerator() const;
    int getDenominator() const;
    void print() const;
    void read();

};

Rational add( Rational , Rational );
Rational subtract ( Rational , Rational);
Rational multiply ( Rational , Rational );
Rational Divide( Rational , Rational);

#endif // RATIONAL_H
