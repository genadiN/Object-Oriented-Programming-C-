#include "Food.hpp"
#include <iostream>

Food::Food(int stock, double price , std::string name, double weight)
: ResturantItem(ProductType::Food , stock , price) ,name(name) , weight(weight){}

std::string Food::getName() const{
    return name;
}

void Food::setName(std::string name){
    this-> name = name;
}

void Food::setWeight(double weight){
    if( weight > 0){
        this->weight = weight;
    }í

}

bool Food::operator>( const Food& rhs) const{
    return weight > rhs.weight;
}

void Food::print()const{
    std::cout << stock << " " << name << " " << weight << std::endl;
}

ResturantItem* Food::clone()const{
    return new Food(*this);
}
