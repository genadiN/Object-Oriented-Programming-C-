#include "LimitedCounter.hpp"
LimitedCounter::LimitedCounter(int max):Counter() {
	this->max = max;
}
LimitedCounter::LimitedCounter(int max, int initial) : Counter(initial) {
	this->max = max;
}
LimitedCounter::LimitedCounter(int max, int initial, unsigned step) : Counter(initial,step) {
	this->max = max;
}
void LimitedCounter::increment() {
	int ans;
	ans = this->initial + this->step;
	if (ans <= this->max) {
		this->initial += this->step;
	}
}
int LimitedCounter::getMax() const {
	return this->max;
}
int LimitedCounter::getTotal() const {
	return Counter::getTotal();
}
unsigned LimitedCounter::getStep() const {
	return Counter::getStep();
}