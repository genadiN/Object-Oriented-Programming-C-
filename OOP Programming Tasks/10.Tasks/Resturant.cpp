#pragma once
#include "Resturant.hpp"
#include<string>
#include<vector>

#include "Drink.hpp"
#include "Food.hpp"
#include "RsturantItem.hpp"

void Resturant::add(ResturantItem* x){
    items.push_back(x);
}
/*
void Resturant::add(Drink& item){
    item.push_back(&item);
}

void Resturant::add(Food& item){
    items.push_back(&item);
}
*/
void Resturant::remove(size_t){
    delete items[index];
    items.erase(items.begin() + index);
}

void Resturant::changePrice(size_t index, double newPrice){
    items[index]->setPrice(newPrice);
}

void Resturant::changeName(size_t , std::string newName){
    auto foodPtr = dynamic_cast<Food*> (items[index]);
    if ( foodPtr){
        foodPtr->setName(newName);
    }

    auto drinkPtr = dynamic_cast<Drink*>(items[index]);
    if(drinkPtr){
        drinkPtr->setName(newName);
    }
}

void Resturant::print() const{
    for (auto x : items){
        x ->print();
    }
}

void Resturant::printNonAlcoholic() const{
    for (auto x : items){
        auto drinkPtr = dynamic_cast<Drink*>(items[index]);
        if(drinkPtr){
            auto zero = Drink(0 , 0 , "" , 0.001);
            if(zero > *drinkPtr){
                drinkPtr->print();
            }
        }
    }
}

Resturant::~Resturant(){
    for ( auto x : items){
        delete x;
    }
}

Resturant::Resturant( const Resturant& rhs){
    for ( auto x : items){
        items.push_back(x->clone());
    }
}

Resturant&::Resurant operator=(const Resturant& rhs){
    if( this != &rhs){
        for(auto x : items){
            delete x;
        }
        items.clear();

        for( auto x : rhs.items){
            items.push_back(x->clone());
        }
    }
    return *this;
}

