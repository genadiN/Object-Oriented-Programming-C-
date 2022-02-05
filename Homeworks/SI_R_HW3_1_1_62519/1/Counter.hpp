#pragma once

class Counter{
protected:
    int init;
    unsigned steps;
public:
    Counter();
    Counter(int init);
    Counter(int init , unsigned steps);
    void increment();
    int getTotal() const;
    unsigned getStep() const;

};
