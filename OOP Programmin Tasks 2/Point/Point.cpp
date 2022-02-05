
#include "Point.h"
#include<iostream>
#include<cmath>

using namespace std;

Point::Point ( double x , double y ){
    this -> x = x;
    this -> y = y;
}

void Point::print() const {
    cout << '(' << x << ", " << y << ')';
}

double Point::distance(Point p) const{
    return sqrt( (x - p.x ) * (x - p.y) + (y - p.y) * ( y - p.y));
}

void Point::offset ( double offsetX , double offsetY){
    x += offsetX;
    y += offsetY;
}
