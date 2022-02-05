#pragma once

#include "Counter.hpp"

class LimitedCounter : public Counter{
protected:
    int max;
public:
    LimitedCounter( int max);
    LimitedCounter( int max , int init);
    LimitedCounter( int max , int init , unsigned steps);
    void increment();
    int getMax() const;
    int getTotal() const;
    unsigned getStep() const;

};
