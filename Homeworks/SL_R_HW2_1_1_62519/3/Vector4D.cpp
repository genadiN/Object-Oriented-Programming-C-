
#include "Vector4D.hpp"

Vector4D::Vector4D() {
	first = 0.0;
	second = 0.0;
	third = 0.0;
	fourth = 0.0;
}

Vector4D::Vector4D(double a, double b, double c, double d) {
	first = a;
	second = b;
	third = c;
	fourth = d;
}

Vector4D::Vector4D(const Vector4D& rhs) {
	first = rhs.first;
	second = rhs.second;
	third = rhs.third;
	fourth = rhs.fourth;
}

Vector4D& Vector4D::operator=(const Vector4D& rhs) {
	if (this != &rhs) {
		first = rhs.first;
		second = rhs.second;
		third = rhs.third;
		fourth = rhs.fourth;
	}
	return *this;
}

Vector4D Vector4D::operator=(const double number) const {

	Vector4D vec;

	vec.first = number;
	vec.second = number;
	vec.third = number;
	vec.fourth = number;

	return vec;
}

Vector4D Vector4D::add(const Vector4D& rhs) const {

	Vector4D sum;
	sum.first = first + rhs.first;
	sum.second = second + rhs.second;
	sum.third = third + rhs.third;
	sum.fourth = fourth + rhs.fourth;
	return sum;
}

Vector4D Vector4D::difference(const Vector4D& rhs) const {

	Vector4D diff;
	diff.first = first - rhs.first;
	diff.second = second - rhs.second;
	diff.third = third - rhs.third;
	diff.fourth = fourth - rhs.fourth;
	return diff;
}

Vector4D Vector4D::multiply(const Vector4D& rhs) const {

	Vector4D mul;
	mul.first = first * rhs.first;
	mul.second = second * rhs.second;
	mul.third = third * rhs.third;
	mul.fourth = fourth * rhs.fourth;
	return mul;
}

Vector4D Vector4D::divide(const Vector4D& rhs) const {

	Vector4D dividing;
	dividing.first = first / rhs.first;
	dividing.second = second / rhs.second;
	dividing.third = third / rhs.third;
	dividing.fourth = fourth / rhs.fourth;
	return dividing;
}

double& Vector4D::operator[](const int index) {

	if (index == 0 ){
        return first ;
	}
	else if(index == 1){
        return second;
	}
	else if( index == 2 ){
        return third;
	}
	else if(index == 3){
        return fourth;
	}

}

Vector4D Vector4D::operator+(const Vector4D& rhs) const {

	return add(rhs);
}

Vector4D& Vector4D::operator+=(const Vector4D& rhs){
    first += rhs.first;
	second += rhs.second;
	third += rhs.third;
	fourth += rhs.fourth;

	return *this;
}

Vector4D Vector4D::operator-(const Vector4D& rhs) const {

	return difference(rhs);
}

Vector4D& Vector4D::operator-=(const Vector4D& rhs){

	first -= rhs.first;
	second -= rhs.second;
	third -= rhs.third;
	fourth -= rhs.fourth;

	return *this;
}

Vector4D Vector4D::operator*(const Vector4D& rhs) const {

	return multiply(rhs);
}

Vector4D Vector4D::operator*(const double number) const {

	Vector4D sum;
	sum.first = first * number;
	sum.second = second * number;
	sum.third = third * number;
	sum.fourth = fourth * number;
	return sum;
}

Vector4D& Vector4D::operator*=(const Vector4D& rhs){
	first *= rhs.first;
	second *= rhs.second;
	third *= rhs.third;
	fourth *= rhs.fourth;

	return *this;
}

Vector4D& Vector4D::operator*=(const double number) {
	first *= number ;
	second *= number;
	third *= number;
	fourth *= number;

	return *this;
}

Vector4D Vector4D::operator/(const Vector4D& rhs) const {

	return divide(rhs);
}

Vector4D& Vector4D::operator/=(const Vector4D& rhs){

	first /= rhs.first;
	second /= rhs.second;
	third /= rhs.third;
	fourth /= rhs.fourth;

	return *this;
}

bool Vector4D::operator==(const Vector4D& rhs) const {
	if (first == rhs.first &&
		second == rhs.second &&
		third == rhs.third &&
		fourth == rhs.fourth)
	{
		return true;
	}
	return false;
}

bool Vector4D::operator!=(const Vector4D& rhs) const {
	if (first == rhs.first &&
		second ==rhs.second &&
		third == rhs.third &&
		fourth == rhs.fourth)
	{
		return false;
	}
	return true;
}
bool Vector4D::operator<(const Vector4D& rhs) const {
	if (first > rhs.first) {
		return false;
	}
	if (second > rhs.second) {
		return false;
	}
	if (third > rhs.third) {
		return false;
	}
	if (fourth > rhs.fourth) {
		return false;
	}
	return true;
}

bool Vector4D::operator>(const Vector4D& rhs) const {
	if (first < rhs.first) {
		return false;
	}
	if (second < rhs.second) {
		return false;
	}
	if (third < rhs.third) {
		return false;
	}
	if (fourth < rhs.fourth) {
		return false;
	}
	return true;
}

bool Vector4D::operator<=(const Vector4D& rhs) const {
	if (first > rhs.first) {
		return false;
	}
	if (second > rhs.second) {
		return false;
	}
	if (third > rhs.third) {
		return false;
	}
	if (fourth > rhs.fourth) {
		return false;
	}
	return true;
}

bool Vector4D::operator>=(const Vector4D& rhs) const {
	if (first < rhs.first) {
		return false;
	}
	if (second < rhs.second) {
		return false;
	}
	if (third < rhs.third) {
		return false;
	}
	if (fourth < rhs.fourth) {
		return false;
	}
	return true;
}

bool Vector4D::operator!() const {
	if (first == 0 &&
		second == 0 &&
		third == 0 &&
		fourth == 0)
	{
		return true;
	}
	return false;
}

Vector4D Vector4D::operator-() const {
	Vector4D opposite;
	opposite.first = -first;
	opposite.second = -second;
	opposite.third = -third;
	opposite.fourth = -fourth;
	return opposite;
}
