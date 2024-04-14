#include "Car.h"

Car::Car() {
	brand = "no brand";
	model = "no model";
	age = 0;
	price = 0;
}
Car::Car(string initBrand, string initModel, int initAge, double initPrice) {
	brand = initBrand;
	model = initModel;
	age = initAge;
	price = initPrice;
}

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
int Car::setAge(int nAge) {
	age = nAge;
}
int Car::getAge() {
	return age;
}
int Car::setPrice(int nPrice) {
	price = nPrice;
}
int Car::getPrice() {
	return price;
}

Car::~Car() {};