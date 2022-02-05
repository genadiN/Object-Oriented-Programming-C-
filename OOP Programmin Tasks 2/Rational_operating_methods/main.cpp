

#include <iostream>

#include "Rational.cpp"

using namespace std;

int main(){

	Rational p(1, 3), q(2, 5), r(p + q);
	r.print();
	cout << endl;
	r = p - q - q;
	r.print();
	cout << endl;

	return 0;
}
