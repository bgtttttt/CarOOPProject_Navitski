#pragma once
#include "Car.h"
class Truck : public Car
{
private:
	double lifting�apacity;
	double volume;
public:
	Truck() {};
	Truck(string brand, string model, int age,
		double price, double lifting�apacity, double volume) :
		Car(brand, model, age, price), lifting�apacity(lifting�apacity), volume(volume) {};
	~Truck() {};
	double getLiftingCapacity();
	double getVolume();
};

