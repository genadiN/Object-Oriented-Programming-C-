#include "TwowayCounter.hpp"

TwowayCounter::TwowayCounter():Counter() {
	
}
TwowayCounter::TwowayCounter(int initial) : Counter(initial) {
}
TwowayCounter::TwowayCounter(int initial,unsigned step):Counter(initial,step) {
}
void TwowayCounter::decrement() {
	this->initial -= this->step;
}
void TwowayCounter::increment() {
	this->initial += this->step;
}
int TwowayCounter::getTotal() const {
	return Counter::getTotal();
}
unsigned TwowayCounter::getStep() const{
	return Counter::getStep();
}
