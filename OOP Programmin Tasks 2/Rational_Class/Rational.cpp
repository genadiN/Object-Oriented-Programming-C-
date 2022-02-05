#include "Rational.h"

#include<iostream>

using namespace std;

Rational::Rational(){
    numer = 0;
    denom = 1;
}
int Rational::absolute(int number){
   return number > 0 ? number : ( -number );

}
Rational::Rational( int n , int d){
    if( n == 0 || d == 0){
        numer = 0;
        denom = 1;
    }else {
        int g = gcd ( absolute(n) , absolute(d));
        if( (n > 0 && d > 0) || (n < 0 && d < 0) ){
            numer = absolute( n ) / g;
            denom = absolute( d ) / g;
        }
        else {
            numer = -absolute( n ) / g;
            denom = absolute( d ) / g;
        }
    }
}

int Rational::getNumerator() const{
    return numer;
}

int Rational::getDenominator() const {
    return denom;
}

void Rational::print() const{
    cout << getNumerator() << '/' << getDenominator() ;
}

void Rational::read(){
    cin >> numer ;
    cin.ignore();
    cin >> denom;
    /// Example 2/5
}

int Rational::gcd( int a , int b){
    return b == 0 ? a : gcd ( b , a % b);
}

Rational add( Rational p , Rational q){
    return Rational( p.getNumerator() * q.getDenominator()
                    +  p.getDenominator() * q.getNumerator() ,
                    p.getDenominator() * q.getDenominator() ) ;
}

Rational subtract ( Rational p , Rational q){
    return Rational(p.getNumerator() * q.getDenominator()
                    - p.getDenominator() * q.getNumerator() ,
                    p.getDenominator() * q.getDenominator());
}

Rational multiply(Rational p , Rational q ){
    return Rational( p.getNumerator() * q.getNumerator() ,
                    p.getDenominator() * q.getDenominator());
}

Rational Divide( Rational p , Rational q){
    return Rational(p.getNumerator() * q.getDenominator(),
                    p.getDenominator() * q.getNumerator());
}
