#pragma once
#include "Flat.h"
class Building
{
	Flat flats[6];
	int numOfFlats{ 0 };
public:
	Building() {};
	~Building() {};

	void addFlat(Flat flat);

	int getNumOfFlats();
	int getNumOfHumans();
	double getFullSpace();
	double getFullPrice();
	double getAvgPricePerSqMeter();
	double getAvgOccupDensity();
	int getNumOfFlatsWithZeroHumans();
	int getNumOfFlatsWithOneHuman();
	int getNumOfFlatsWithMoreTwoHumans();
};

