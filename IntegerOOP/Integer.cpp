#include "Integer.h"

Integer::Integer(int number) : number(number) {
	cout << "Integer object created with value: " << number << endl;
};
Integer::Integer() : Integer(0) {};
Integer::~Integer() {};

int Integer::getNumber() {
	return number;
};
void Integer::setNumber(int number) {
	this->number = number;
};
void Integer::printNumber() {
	cout << "Value of Integer: " << number << endl;
};

Integer Integer::add(Integer other) {
	return Integer(number + other.number);
};
Integer Integer::subtract(Integer other) {
	return Integer(number - other.number);
};
Integer Integer::multiply(Integer other) {
	return Integer(number * other.number);
};
Integer Integer::divide(Integer other) {
	if (other.number != 0) {
		return Integer(number / other.number);
	}
	else {
		throw std::runtime_error("Cannot divide by zero");
	}
};