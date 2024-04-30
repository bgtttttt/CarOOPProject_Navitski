#pragma once
#include "Human.h"
class Flat
{
private:
	Human* humans;
	double price;
	double space;
	int numOfHumans;
public:
	Flat() {};
	Flat(double price, double space, int numOfHumans) :
		price(price), space(space), numOfHumans(numOfHumans) {};
	~Flat() {};

	double getPrice();
	double getSpace();
	int getNumOfHumans();
	void addHuman(Human human);
	void removeHumanByIndex(int index);
	void setPrice(double price);
	double getPricePerSqMeter();
};

