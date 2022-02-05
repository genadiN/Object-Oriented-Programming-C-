#pragma once

#include "Drink.hpp"
#include "Food.hpp"

#include<iostream>
#include<vector>

class Shop : public Drink , public Food{
    std::vector<Items*> items;
public:
    Shop() = default;
    Shop(const Shop& rhs);
    ~Shop();
    Shop& operator=(const Shop& rhs);

    void add(Items* x);

    Items* operator[]( size_t index);

    void print()const;
};
