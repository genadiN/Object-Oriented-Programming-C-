#pragma once

#include "IdObject.hpp"

template<class T>
class IdObjectContainer : public IdObject{
   IdObject<T>& idObjects;
   int size = 0;

public:
    IdObjectContainer() = default;
    IdObjectContainer(const IdObjectContainer& rhs);
    ~IdObjectContainer();
    IdObjectContainer& operator=(const IdObjectContainer& rhs);

    void add(const IdObjectContainer<T>& rhs);

    int getSize() const;

    IdObjectContainer<T>& operator[]( size_t index );

    bool operator==( const IdObjectContainer<T>& rhs)const;

    int get_Different() const;

};

template<class T>
IdObjectContainer<T>::IdObjectContainer(const IdObjectContainer<T>& rhs){
    size = rhs.size;
    idObjects = new IdObjectContainer<T>[size];
    for ( int i = 0 ; i < size ; i++){
        idObjects[i] = rhs.idObjects[i];
    }
}

template<class T>
IdObjectContainer<T>::~IdObjectContainer(){
    delete[] idObjects;
}

template<class T>
IdObjectContainer<T>& IdObjectContainer<T>::operator=(const IdObjectContainer& rhs){
    if(this != &rhs){
        delete[] IdObjectContainer;
        size = rhs.size;
        idObjects = new IdObjectContainer<T>[size];
        for ( int i = 0 ; i < size ; i++){
            IdObjectContainer[i] = rhs.IdObjectContainer[i];
        }
    }
    return *this;
}

template<class T>
void IdObjectContainer<T>::add(const IdObject<T>& rhs){
    IdObject<T>* temp = new IdObject<T>[size + 1];
    if ( size > 0){

        for ( int i = 0 ; i < size; i++){
            temp[i] = idObjects[i];
        }
        temp[size] = rhs;
        size++;
         delete[] idObjects;
         idObjects = temp;
    }else{
        idObjects = new IdObject<T>[1];
        idObjects[0] = rhs;
        size++;
    }
}

template<class T>
int IdObjectContainer<T>::getSize() const{
    return size;
}

template<class T>
IdObject<T>& IdObjectContainer<T>::operator[](size_t index){
    if ( index < size){
        return idObjects[index];
    }else {
        throw std::out_of_range("Out of range!");
    }
}

template<class T>
bool IdObjectContainer<T>:: operator==(const IdObjectContainer<T>& rhs )const{
    return this-> size == rhs.size && idObjects == rhs.idObejcts;
}

template<class T>
int IdObjectContainer<T>:: get_Different()const{
    int counter = 0;
    for ( int i = 0 ; i < size ; i++){
        for ( int j = 0 ; j < size ; j++){
            if ( idObjects[i] == idObjects[j]){
                break;
            }
        }
        if ( i == j){
            counter++;
        }
    }
    return counter;
}
