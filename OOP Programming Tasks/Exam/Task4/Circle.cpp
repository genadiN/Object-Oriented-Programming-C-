
#include "Circle.hpp"
#include<iostream>
#include < string>

Circle::Circle(double radius = 0 , std::string& color = "")
: radius( radius) , color(color){}

double Circle::getRadius() const{
    return radius;
}

double Circle::calculateArea() const{
        return radius * radius * 3.14;
}

Figure* Circle::clone() override;{
    return new Circle(*this);
}
