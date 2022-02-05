#include "Shop.hpp"



Shop::Shop(const Shop& rhs){
    for ( auto x : rhs.items){
            items.push_back(x->clone());
    }
}

Shop::~Shop(){
    for (auto x : items){
        delete x;
    }
    items.clear();
}

Shop& Shop::operator=(const Shop& rhs){
    if( this != &rhs){
        for( auto x : items){
            delete x;
        }
        items.clear();
        for( auto x : items){
            items.push_back(x->clone());
        }
    }
    return *this;
}

void Shop::add(Items* x){
    items.push_back(x);
}

Items* Items::operator[]( size_t index){
    if ( index > 0 && index < items.size()){
        return items[index];
    }
    return nullptr;
}

void print()const{
    for( auto x : items){
        x->print();
    }
}
