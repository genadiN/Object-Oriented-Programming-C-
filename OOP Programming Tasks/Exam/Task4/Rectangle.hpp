#pragma once
#include<string>
#include "Figure.hpp"

class Rectangle : public Figure{
    double length;
    double width;
public:
    Rectangle(double length , double width , std::string color);

    double get_Length()const;
    double get_width() const;
    double calculateArea();

    Figure* clone() const;
};
