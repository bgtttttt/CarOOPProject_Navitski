#pragma once
#include "Car.h"
#include "PassengerCar.h"
#include "Truck.h"

class CarCollection
{
private:
	Car* collection;
	int size{ 0 };
public:
	CarCollection() : size(0) {}

	void add(Car car);
	void remove(int index);
	void remove(Car car);

	int getFirstIndex(Car car);
	int getLastIndex(Car car);

	int getSize();
	Car get(int index);

	string convertToString();
};

