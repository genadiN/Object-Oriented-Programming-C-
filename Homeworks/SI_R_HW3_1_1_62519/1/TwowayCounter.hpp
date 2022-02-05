#pragma once

#include "Counter.hpp"

class TwowayCounter : public Counter{
public:
    Twowaycounter();
    TwowayCounter(int init);
    TwowayCounteR( int init , unsigned steps);
    void increment();
    void decrement;
    unsigned getSteps() const;
};
