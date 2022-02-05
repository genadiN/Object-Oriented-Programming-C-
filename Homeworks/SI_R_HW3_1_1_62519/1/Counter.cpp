#include "Counter.hpp"

Counter::Counter(){
    init = 0;
    steps = 1;
}

Counter::Counter(int init){
    this->init = init;
    this->steps = 1;
}

Counter::Counter(int init , unsigned steps){
    this->init = init;
    this->steps = steps;
}
void Counter::increment(){
    this->init +=this->steps;
}

int Counter::getTotal()const{
    return this->init;
}

unsigned Counter::getStep() const{
    return this->steps;
}
