#include "items.hpp"

Items::Items( const std::string& name = "" , double price = 0)}{
        this->name = name;
        price = price;
    }

std::string Items:: get_Name()const{
        return name;
}

double Items::get_Price()const{
        return price;
}
