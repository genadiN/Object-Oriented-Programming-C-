/*
 Rational.cpp
 */

 #include "Rational.h"

 #include<iostream>

 using namespace std;

 /// Constructor  with 2 parameters
Rational::Rational( int n , int d ){
    if ( n == 0 || d == 0){
        numer = 0;
        denom = 1;
    }
    else{
        int g = gcd ( abs ( n ) , abs ( d ));
        if ( n > 0 && d > 0 || n < 0 && d < 0){
            numer = abs ( n ) ;
            denom = abs ( d );
        }
        else {
            numer = -abs ( n) / g;
            denom = abs ( d ) / g;
        }
    }
}

/// Selector for numerator
int Rational::getNumerator() const {
    return numer ;
}

/// Selector for Denominaotor
int Rational::getDenominator() const {
    return denom;
}

/// Function for printing
void Rational::print () const {
    cout << getNumerator() << '/' << getDenominator();
}

/// mutator ( function for changing ) with input
void Rational:: read () {
    cin >> numer ;
    cin.ignore();
    cin >> denom;
}

/// Greatest common divider
int Rational::gcd ( int a , int b ){
    return b == 0 ? a : gcd ( b , a % b );
}

/// operator +
Rational operator+ ( Rational p , Rational q ){
    return Rational ( p.getNumerator() * q.getDenominator()
                     + p.getDenominator() * q.getNumerator() ,
                     p.getDenominator() * q.getDenominator());

}

/// operator -
Rational operator-( Rational p , Rational q){
    return Rational( p.getNumerator() * q.getDenominator()
                    - p.getDenominator() * q .getNumerator() ,
                    p .getDenominator() * q.getDenominator());
}

/// operator *
Rational operator* ( Rational p , Rational q ){
    return Rational ( p.getNumerator() * q.getNumerator() ,
                     p.getDenominator() * q .getDenominator() );
}

/// operator /
Rational operator/ ( Rational p , Rational q ){
    return Rational( p.getNumerator() * q.getDenominator() ,
                    p.getDenominator() * q.getNumerator());
}
