#pragma once

#include<iostream>
#include<string>


class User{
protected:
    std::string name;
public:

    void info() const{
        std::cout << "Name: " << name << '\n';
    }

    void setName( std::string name){
        this-> name = name;
    }

};
