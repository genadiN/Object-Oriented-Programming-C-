#pragma once

#include<iostream>
#include<string>

#include "Items.hpp"

class Drink : public Items{
protected:
    double capacity;
public:
    Drink(std::string name = "" , double price  = 0, capacity = 0);

    double get_Capacity() const;

    void print()const;

    Items* clone() const;
};
