#include "Drink.hpp"
#include< iostream>

Drink::Drink( int stock, double price , std::string name , double alcohol)
:ResturantItem(ProductType::Drink , stock , price) , name(name) , alcohol(alcohol){}

std::string Drink::getName()const{
    return name;
}

void Drink::setName(std::string name){
    this->name = name;
}

void Drink::setAlcohol( double alcohol){
    if ( alcohol >= 0){
       this-> alcohol = alcohol;
    }
}

bool Drink::operator>(const Drink& rhs) const{
    return alcohol > rhs.alcohol;
}

void print() const{
    std::cout << stock << " " << price << " "
        << name << " " << alcohol << std:: endl;
}

ResturantItem* Drink::clone()const{
    return new Drink(*this);
}
