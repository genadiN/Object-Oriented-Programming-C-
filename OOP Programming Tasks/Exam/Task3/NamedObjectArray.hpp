#pragma once
#include "NamedObject.hpp"

template<class T>
class NamedObjectArray{
    NamedObject<T>& namedObjects;
    int size = 0;

public:
    NamedObjectArray() = default;
    NamedObjectArray(const NamedObjectArray& rhs);
    ~NamedObjectArray();
    NamedObjectArray& operator=(const NamedObjectArray& rhs);

    void add(const NamedObject<T>& rhs);

    int getSize() const;

    NamedObject<T>& operator[]( size_t index );

};

template<class T>
NamedObjectArray<T> :: NamedObjectArray(const NamedObjectArray<T>& rhs){
    size = rhs.size;
    namedObjects = new NamedObjectArray<T>[size];
    for ( int i = 0 ; i < size ; i++){
        namedObjects[i] = rhs.namedObjects[i];
    }
}

template<class T>
NamedObjectArray<T>::~NamedObjectArray(){
    delete[] namedObjects;
}

template<class T>
NamedObjectArray<T>&NamedObjectArray<T>::operator=(const NamedObjectArray& rhs){
    if(this != &rhs){
        delete[] namedObjects;
        size = rhs.size;
        namedObjects = new NamedObjectArray<T>[size];
        for ( int i = 0 ; i < size ; i++){
            namedObjects[i] = rhs.namedObjects[i];
        }
    }
    return *this;
}

template<class T>
void NamedObjectArray<T>::add(const NamedObject<T>& rhs){
    NamedObject<T>* temp = new NamedObject<T>[size + 1];
    if ( size > 0){

        for ( int i = 0 ; i < size; i++){
            temp[i] = namedObjects[i];
        }
        temp[size] = rhs;
        size++;
         delete[] namedObjects;
         namedObjects = temp;
    }else{
        namedObjects = new NamedObject<T>[1];
        namedObjects[0] = rhs;
        size++;
    }
}

template<class T>
int NamedObjectArray<T>::getSize() const{
    return size;
}

template<class T>
NamedObject<T>& NamedObjectArray<T>::operator[](size_t index){
    if ( index < size){
        return namedObjects[index];
    }else {
        throw std::out_of_range("Out of range!");
    }
}

