#pragma once
#include "eventDate.hpp;

const char* EventDate::getMonth() const{
        if ( month == 1){
            return "January";
        }else if ( month == 2){
            return "February";
        }else if ( month == 3){
            return "March";
        }else {
            return "Error";
        }
    }

void EventDate::setMonth ( int month_){
        if ( month < 0 || month > 12 ){
            return;
        }
        this -> month = month_;
    }
