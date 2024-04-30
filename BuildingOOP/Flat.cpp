#include "Flat.h"
double Flat::getPrice() {
	return price;
};
double Flat::getSpace() {
	return space;
};
int Flat::getNumOfHumans() {
	return numOfHumans;
};
void Flat::addHuman(Human human) {
	if (getNumOfHumans() == 0) {
		humans = new Human[1];
		humans[0] = human;
	}
	else {
		Human* temp = new Human[numOfHumans];
		for (int i = 0; i < numOfHumans; i++) {
			temp[i] = humans[i];
		}
		delete[] humans;
		humans = temp;
	}
	numOfHumans++;
};
void Flat::removeHumanByIndex(int index) {
	if (getNumOfHumans() > 0) {
		Human* temp = new Human[numOfHumans];
		for (int i = 0, j = 0; i < numOfHumans; i++) {
			if (i != index) {
				temp[j] = humans[i];
				j++;
			}
		}
		delete[] humans;
		humans = temp;
	}
};
void Flat::setPrice(double price) {
	if (price > 0) {
		this->price = price;
	}
};
double Flat::getPricePerSqMeter() {
	return getPrice() / getSpace();
};