#pragma once

#include<string>

class Figure{
protected:
    std :: string color;
public:
    Figure() = default;
    Figure(const std::string& color){
        this->color = color;
    }

    virtual ~Figure() = default;
    virtual Figure* clone() = 0;

    std::string getColor() const{
        return color;
    }

};
