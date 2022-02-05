#pragma once

#include<iostream>
#include<string>
#include "Figure.hpp"

class Circle : public Figure{
private:
    double radius;
public:
    Circle(double radius = 0 , std::string color = "");

    double getRadius() const;
    double calculateArea() const;

    Figure* clone() override;

};
