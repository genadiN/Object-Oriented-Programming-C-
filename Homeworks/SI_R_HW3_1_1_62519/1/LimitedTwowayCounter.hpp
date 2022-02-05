#pragma once

#include "Counter.hpp"
#include "LimitedCounter.hpp"

class LimitedTwowayCounter : public Counter{
protected:
    int max;
    int min;
public:
    LimitedTwowayCounter( int min , int max);
    LimitedTwowayCounter( int min , int max , int init);
    LimitedTwowayCounter( int min , int max , int init , unsigned steps);
    void increment();
    void decrement();
    int getMax() const;
    int getMin() const;
    int getTotal() const;
    unsigned getStep() const;
};
