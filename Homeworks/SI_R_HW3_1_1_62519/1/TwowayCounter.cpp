#include "TwowayCounter.hpp"

TwowayCounter::TwowayCounter() : Counter(){}

TwowayCounter::TwowayCounter( int init) : Counter( init ){}

TwowayCounter::TwowayCounter( int init , unsigned steps) : Counter( init , steps){}

void TwowayCounter::increment(){
    init += steps;
}

void TwowayCounter::decrement(){
    init -= steps;
}

int TwowayCounter::getTotal() cosnt{
    return Counter::getTotal();
}

unsigned TwowayCounter::getStep() const{
    return Counter::getStep();
}
