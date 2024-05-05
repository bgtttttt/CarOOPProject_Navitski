#pragma once
#include "Car.h"
class Truck : public Car
{
private:
	double liftingÑapacity;
	double volume;
public:
	Truck() {};
	Truck(string brand, string model, int age,
		double price, double liftingÑapacity, double volume) :
		Car(brand, model, age, price), liftingÑapacity(liftingÑapacity), volume(volume) {};
	~Truck() {};
	double getLiftingCapacity();
	double getVolume();
};

