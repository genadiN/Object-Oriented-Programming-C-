#pragma once

#include<iostream>

template<class T>
class IdObject{
protected:
    unsigned id;
    T object;
public:
    IdObject(unsigned id = 0, T& object);

     unsigned get_Id() const;

     unsigned get_Object() const;

     bool operator==( const IdObject<T>& rhs);
     bool operator!=( const IdObject<T>& rhs);

     bool operator>( const IdObject<T>& rhs);
     bool operator<( const IdObject<T>& rhs);

};

template<class T>
IdObject<T>::IdObject(unsigned id , T& object)
: id(id) , object(object){}

template<class T>
unsigned IdObject::get_Id() const{
    return id;
}

template<class T>
unsigned IdObject<T>::get_Object() const{
    return object;
}

template<class T>
bool IdObject<T>::operator==( const IdObject<T>& rhs){
    return this->object == rhs.object && this->id == rhs.id;
}

template<class T>
bool IdObject<T>::operator!=( const IdObject<T>& rhs){
    return !(this->object == rhs.object && this->id == rhs.id);
}

template<class T>
bool IdObject<T>::operator>( const IdObject<T>& rhs){
    return this->id > rhs.id;
}

template<class T>
bool IdObject::operator<( const IdObject<T>& rhs){
    return this->id > rhs.id;
}

