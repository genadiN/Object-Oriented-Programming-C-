#pragma once

#include<iostream>
#include<string>

#include "Items.hpp"

class Food : public Items{
    double calories;
public:
    Food(std::string name = "" , double price = 0, double calories = 0);

    double get_CalorieS() const;

    void print() const;

    Items* clone() const;

};
