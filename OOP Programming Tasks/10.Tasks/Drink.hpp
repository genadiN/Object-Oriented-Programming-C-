#pragma once
#include<string>
#include "ResturantItem.hpp"

class Drink : public ResturantItem{
protected:
    std::string name = "";
    double alcohol = 0.0;
public:
    Drink(int stock = 0 , double price = 0, std::string name = 0, double alcohol = 0.0);
    std::string getName()const;

    void setName(std::string name);
    void setAlcohol( double alcohol);

    bool operator>(const Drink& rhs) const;

    void print() const;

    ResturantItem* clone() const;

};
