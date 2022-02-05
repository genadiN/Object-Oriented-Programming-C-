#include<iostream>
#include "Error.hpp"

using namespace std;

Error::Error(const std::string& message){
    error = message;
}

string Error::get_message() const {
    return error;
}

