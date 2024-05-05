#include "Giraffe.h"

double Giraffe::getHeight() {
	return height;
};
void Giraffe::setHeight(double height) {
	if (height > 0) {
		this->height = height;
	}
};
int Giraffe::getNumOfSpots() {
	return numOfSpots;
};
void Giraffe::setNumOfSpots(int numOfSpots) {
	this->numOfSpots = numOfSpots;
};

string Giraffe::getInfo() {
	return getGeneralInfo() + ", height = " + to_string(height) +
		", number of spots = " + to_string(numOfSpots);
};