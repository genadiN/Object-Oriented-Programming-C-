#include "ResturantItem.hpp"
#include<iostream>

ResturantItem::ResturantItem(ProductType type , int stock , double price )
: type(type) , stock(stock) , price(price){}

ProductType ResturantItem::getType() const{
    return type;
}

int ResturantItem::getPrice() const{
    return price;
}

int ResturantItem::getStock() const{
    return stock;
}


void ResturantItem::setPrice(double price){
    if ( price >= 0){
        this->price = price;
    }
}

void ResturantItem::setStock(int stock){
   if ( stock >=0){
     this->stock = stock;
   }
}


