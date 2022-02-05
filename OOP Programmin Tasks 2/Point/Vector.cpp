#include<iostream>

#include "Vector.h"

using namespace std;

Vector::Vector( Point a , Point b){
    Start = a;
    End = b ;
}

void Vector::print() const {
    Start.print();
    cout << " -> ";
    End.print();
}

double Vector::length() const{
    return Start.distance( End);
}

void Vector::offset( double offsetX , double offsetY){
    Start.offset( offsetX , offsetY);
    End.offset( offsetX , offsetY);
}
