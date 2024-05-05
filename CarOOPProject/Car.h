#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string brand;
	string model;
	int age;
	double price;
public:
	Car(string brand, string model, int age, double price) :
		brand(brand), model(model), age(age), price(price) {}
	Car() : Car("None", "None", 0, 0) {}

	string getInfo();

	string getBrand();
	string getModel();
	void setAge(int nAge);
	int getAge();
	void setPrice(int nPrice);
	int getPrice();

	~Car() {};
};

