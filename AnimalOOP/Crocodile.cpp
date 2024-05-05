#include "Crocodile.h"

double Crocodile::getLength() {
	return length;
};
void Crocodile::setLength(double length) {
	if (length > 0) {
		this->length = length;
	}
};
string Crocodile::getColor() {
	return color;
};
void Crocodile::setColor(string color) {
	this->color = color;
};

string Crocodile::getInfo() {
	return getGeneralInfo() + ", length = " + to_string(length) +
		", color = " + color;
};