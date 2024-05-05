#pragma once
#include "Car.h"
class PassengerCar : public Car {
private:
	int numberOfSeats;
	bool isElectric;
public:
	PassengerCar() {};
	PassengerCar(string brand, string model, int age,
		double price, int numberOfSeats, bool isElectric) :
		Car(brand, model, age, price), numberOfSeats(numberOfSeats), isElectric(isElectric) {};

	int getNumberOfSeats();
	bool getIsElectric();
};

