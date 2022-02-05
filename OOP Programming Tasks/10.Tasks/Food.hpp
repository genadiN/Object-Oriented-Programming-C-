#pragma once
#include<string>
#include "ResturantItem.hpp"

class Food : public ResturantItem{
protected:
    std::string name = "";
    double wieght = 0.0;
public:
    Food(int stock = 0, double price = 0.0 , std::string name = "", double weight = 0.0);

    std::string getName() const;

    void setName( std::string name);
    void setWeight ( double weight);

    bool operator>( const Food& rhs) const;

    void print() const;

    ResturantItem* clone() const;
};
