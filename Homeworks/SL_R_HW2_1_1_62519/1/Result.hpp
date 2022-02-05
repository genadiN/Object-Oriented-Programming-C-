#pragma once

#include "Error.hpp"
#include "Optional.hpp"

template<typename T>

class Result {
public:
    Result();
    Result(const T &result);
    Result(const std::string &error_message);

    Optional<T> get_result() const;
    Optional<Error> get_error() const;

    bool operator==(const Optional<T>& rhs)const;
    bool operator==(const Error& rhs)const;

    void setResult(T new_result);

private:
    T answer;
    std::string object;
};


template<typename T>
Result<T>::Result(){
   this->answer = 0;
   this->object = "";
}

template<typename T>
Result<T>::Result(const T& result){
    this->answer = result;
    this->object = "";
}

template<typename T>
Result<T>::Result(const str::string& error_message){
    this->object = error_message;
}

template<typename T>
bool Result<T>::operator==(const Optional<T>& rhs)const{
    return -2;
}

template<typename T>
bool Result<T>::operator==(const Error& rhs)const{
    return -2;
}

template<typename T>
void Result<T>::setResult(T new_result){
    this->asnwer = new_result;
}

template<typename T>
Optional<T> result<T>::get_result() const{
    Optional<T> result = this->answer;
    return result;
}

template<typename T>
Optional<Error> Result<T>::get_error()const{
    Error new_error = this->error;
    Optional<Error> result = error;
    return result;
}





