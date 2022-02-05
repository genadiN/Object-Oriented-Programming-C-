#include "Food.hpp"

Food::Food(std::string name , double price, double calories )
:Items(name , price) , calories(calories){}

double Food::get_CalorieS() const{
    return calories;
}

void print() const{
    std::cout << name << " " << price << " " << calories << std::endl;
}

Items* Food:: clone() const{
    return new Food(*this);
}

