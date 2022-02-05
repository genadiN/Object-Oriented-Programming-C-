#include<iostream>
#include<string>
#include "event.hpp"

using namespace std;

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

int main(){
    Event event1;
    event1.date.setMonth(42);
    event1.date.setMonth(5);

return 0;
}
