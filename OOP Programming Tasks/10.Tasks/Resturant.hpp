#pragma once
#include<vector>
#include "ResturantItem.hpp"
#include "Drink.hpp"
#include "Food.hpp"

class Resturant{
private:
    std::vector<ResturantItem*> items;
public:
    Resturant() = default;
    ~Resturant();
    Resturant( const Resturant& rhs);
    Resturant& operator=(const Resturant& rhs);

    void add(ResturantItem*);
    void remove(size_t);
    void changePrice(size_t index, double price);
    void changeName(size_t index, std::string name);
    void print() const;
    void printNonAlcoholic() const;

};
