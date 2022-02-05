#include "LimitedCounter.hpp"

LimitedCounter::LimitedCounter( int max):Counter(){
    this->max = max;
}

LimitedCounter::LimitedCounter(int max , int init) : Counter( init ){
    this->max = max;
}

LimitedCounter::LimitedCounter( int max , int init , unsigned steps) : Counter( init , steps){
    this->max = max;
}

void LimitedCounter::increment(){
    int newValue;
    newValue = this->init + this->steps;
    if( newValue <= this->max){
        this->init +=this->steps;
    }
}

int LimitedCounter::getMax() const{
    return this->max;
}

int LimitedCounter::getTotal() const{
    return Counter::getTotal();
}

unsigned LimitedCounter::getStep() const{
    return Counter::getStep();
}
