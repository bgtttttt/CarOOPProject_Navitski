#include "Building.h"

void Building::addFlat(Flat flat) {
	if (numOfFlats < 6) {
		flats[numOfFlats] = flat;
		numOfFlats++;
	}
};

int Building::getNumOfFlats() {
	return numOfFlats;
};
int Building::getNumOfHumans() {
	int count = 0;
	for (int i = 0; i < numOfFlats; i++) {
		count += flats[i].getNumOfHumans();
	}
	return count;
};
double Building::getFullSpace() {
	double count = 0;
	for (int i = 0; i < numOfFlats; i++) {
		count += flats[i].getSpace();
	}
	return count;
};
double Building::getFullPrice() {
	double count = 0;
	for (int i = 0; i < numOfFlats; i++) {
		count += flats[i].getPrice();
	}
	return count;
};
double Building::getAvgPricePerSqMeter() {
	return getFullPrice()/getFullSpace();
};
double Building::getAvgOccupDensity() {
	return getNumOfHumans() / getFullSpace();
};
int Building::getNumOfFlatsWithZeroHumans() {
	int count = 0;
	for (int i = 0; i < numOfFlats; i++) {
		if (flats[i].getNumOfHumans() == 0) {
			count++;
		}
	}
	return count;
};
int Building::getNumOfFlatsWithOneHuman() {
	int count = 0;
	for (int i = 0; i < numOfFlats; i++) {
		if (flats[i].getNumOfHumans() == 1) {
			count++;
		}
	}
	return count;
};
int Building::getNumOfFlatsWithMoreTwoHumans() {
	int count = 0;
	for (int i = 0; i < numOfFlats; i++) {
		if (flats[i].getNumOfHumans() >= 2) {
			count++;
		}
	}
	return count;
};