#include "LimitedTwowayCounter.hpp"

LimitedTwowayCounter::LimitedTwowayCounter(int min, int max) :Counter() {
	this->max = max;
	this->min = min;
}
LimitedTwowayCounter::LimitedTwowayCounter(int min, int max, int initial) : Counter(initial) {
	this->max = max;
	this->min = min;
}
LimitedTwowayCounter::LimitedTwowayCounter(int min, int max, int initial, unsigned step) : Counter(initial, step) {
	this->max = max;
	this->min = min;
}
void LimitedTwowayCounter::increment() {
	int ans;
	ans = this->initial + this->step;
	if (ans <= this->max) {
		this->initial += this->step;
	}
}
void LimitedTwowayCounter::decrement() {
	int ans;
	ans = this->initial - this->step;
	if (ans >= this->min) {
		this->initial -= this->step;
	}
}
int LimitedTwowayCounter::getMax() const {
	return this->max;
}
int LimitedTwowayCounter::getMin() const {
	return this->min;
}
int LimitedTwowayCounter::getTotal() const {
	return Counter::getTotal();
}
unsigned LimitedTwowayCounter::getStep() const {
	return Counter::getStep();
}