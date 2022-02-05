#include "Drink.hpp"

Drink::Drink(std::string name, double price , capacity)
:   Items( name, price) , capacity(capacity){}

double Drink:: get_Capacity() const{
    return capacity;
}

void Drink::print()const{
    std::cout << name << " " << price << " " << capacity << std::endl;
}

Items* Drink::clone()const{
    return new Drink(*this);
}
