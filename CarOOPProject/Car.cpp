#include "Car.h"




string Car::getInfo() {
	return "Car: brand: " + brand
		+ "; model: " + model
		+ "; age: " + to_string(age)
		+ "; price: " + to_string(price);
}

string Car::getBrand() {
	return brand;
}
string Car::getModel() {
	return model;
}
void Car::setAge(int nAge) {
	if (age > 0) {
		this->age = age;
	}
}
int Car::getAge() {
	return age;
}
void Car::setPrice(int nPrice) {
	if (price > 0) {
		this->price = price;
	}
}
int Car::getPrice() {
	return price;
}
