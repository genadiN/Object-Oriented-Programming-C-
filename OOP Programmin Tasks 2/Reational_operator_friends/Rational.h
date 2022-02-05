#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private :
    int numer , denom ;
    int gcd ( int , int );

public:
    ///constructors
    Rational ( int = 0 , int = 1);

    /// Function for acceptance
    int getNumerator()const;
    int getDenominator()const;
    void print () const ;

    ///mutators
    void read();
    friend Rational operator+( Rational , Rational );
    friend Rational operator-(Rational , Rational );
    friend Rational operator*( Rational , Rational );
    friend Rational operator/ ( Rational , Rational);

};

#endif // RATIONAL_H
