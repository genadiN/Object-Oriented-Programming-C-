#pragma once
#include "Counter.hpp"
class LimitedCounter : public Counter {
protected:
	int max;
public:
	LimitedCounter(int max);
	LimitedCounter(int max,int initial);
	LimitedCounter(int max,int initial,unsigned step);
	void increment();
	int getMax() const;
	int getTotal() const;
	unsigned getStep() const;


};