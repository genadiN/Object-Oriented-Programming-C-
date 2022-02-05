#pragma once

#include <iostream>
#include <string>

class Items{
protected:
    std::string name;
    double price;
public:
    Items() = default;
    Items( const std::string& name = "" , double price = 0)};

    virtual ~Items() = default;
    virtual Items* clone() = 0;

    std::string get_Name()const;

    double get_Price()const;
};
