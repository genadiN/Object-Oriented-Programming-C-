#include<iostream>
#include<string>
#include "eventDate.hpp"

using namespace std;

int main(){
    Event event1;
    event1.date.setMonth(42);
    event1.date.setMonth(5);
    event1.date++;
    event1.date += 5;

return 0;
}

