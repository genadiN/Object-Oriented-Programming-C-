#pragma once
#include<iostream>
#include<cstring>

template<class T>
class NamedObject{
protected:
    unsigned id;
    char* name;
    T object;
public:
    NamedObject();
    NamedObject( char* name, unsigned id , T &object );
    NamedObject(const NamedObject<T>& rhs);
    ~NamedObject();
    NamedObject& operator=(const NamedObject<T>& rhs);

    unsigned get_Id() const;
    char* get_Name() const;
    T get_Object() const;

};

template<class T>
NamedObject<T>::NamedObject(){
    name = nullptr;
    id = 0;
}

template<class T>
NamedObject<T>::NamedObject(char *name , unsigned id , T& object){
    this->name = new char[strlen(name) + 1];
    strcpy( this-> name , name);
    id = id;
    object = object;
}

template<class T>
NamedObject<T>::NamedObject(const NamedObject& rhs){
    this->name = new char[strlen(rhs.name) + 1];
    strcpy(this-> name , rhs.name);
    id = rhs.id;
    object = rhs.object;
}

template<class T>
NamedObject<T>::~NamedObject(){
    delete[] name;
}

template<class T>
NamedObject<T>& NamedObject<T>::operator=(const NamedObject& rhs){
    if(this != &rhs){
        delete[] name;
        this->name = new char[strlen(rhs.name) + 1];
        strcpy(name , rhs.name);
        id = rhs.id;
        object = rhs.object;
    }
    return *this;
}

template<class T>
char* NamedObject<T>::get_Name()const{
    return name;
}

template<class T>
unsigned NamedObject<T>::get_Id() const{
    return id;
}

template<class T>
T NamedObject<T>::get_Object() const{
    return object;
}

