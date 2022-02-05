
#include "Date.h"
#include<iostream>

using namespace std;

Date::Date(){
    date  = 01;
    month = 01;
    year = 2000;
}

int Date::getDate() const{
    return date;
}

int Date::getMonth() const{
    return month;
}

int Date::getYear() const{
    return year;
}

void Date::print() const {
    cout << getDate() << '.' << getMonth() << '.' << getYear();
}

void Date::read(){
    cin >> date;
    cin.ignore();
    cin >> month;
    cin.ignore();
    cin >> year;
    ///Example 01.01.2000
}

int Date::change_date(int d){
  Date p = Date;
}


