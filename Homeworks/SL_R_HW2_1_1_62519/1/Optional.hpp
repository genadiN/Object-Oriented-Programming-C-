#pragma once

#include<iostream>
#include "Error.hpp"

using namespace std;

template <typename T>

class Optional{
public:
    Optional();
    Optional(const T& value);

    bool is_none() const;
    T get_value() const;
    void set_element(T);

private :
   T element;
   bool checkEmpty;
};

template< typename T >
Optional<T>::Optional(){
    element = T();
    checkEmpty = true;
}

template<typename T>
bool Optional<T>::is_none() const{
    return (checkEmpty == true);
}

template<typename> T
Optional<T>::Optional(const T& value){
    element = element;
    checkEmpty = false;
}

template<typename T>
T Optional<T>::get_value() const{
    return element;
}

template<typename T>
void Optional<T>::set_element(T new_one){
    return element = new_one;
}
