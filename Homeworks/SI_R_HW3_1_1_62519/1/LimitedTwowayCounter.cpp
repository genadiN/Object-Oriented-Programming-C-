#include "LimitedTwowayCounter.hpp"

LimitedTwowayCounter::LimitedTwowayCounter( int min , int max) :Counter(){
    this->min = min;
    this->max = max;
}

LimitedTwowayCounter::LimitedTwowayCounter( int min , int max , int init) : Counter( init){
    this->max = max;
    this->min = min;
}

LimitedTwowayCounter::LimitedTwowayCounter( int min , int max , int init , unsigned steps) : Counter( init , steps){
    this->max = max;
    this->min = min;
}

void LimitedTwowayCounter::increment(){
    int newValue;
    newValue = init + steps;
    if ( newValue <= max){
        init += steps;
    }
}

void LimitedTwowayCounter::decrement(){o
    int newValue;
    newValue = init + steps;
    if( newValue <= max){
        init += steps;
    }
}

int LimitedTwowayCounter::getMax() const{
    return max;
}

int LimitedTwowayCounter::getMin() const{
    return min;
}

int LimitedTwowayCounter::getTotal() const{
    return Counter::getTotal();
}

unsigned LimitedTwowayCounter::getStep() const{
    return getStep();
}
