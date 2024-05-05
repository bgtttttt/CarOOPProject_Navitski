#include "Tiger.h"

int Tiger::getNumOfStripes() {
	return numOfStripes;
};
void Tiger::setNumOfStripes(int numOfStripes) {
	if (numOfStripes > 0) {
		this->numOfStripes = numOfStripes;
	}
};
bool Tiger::getIsMale() {
	return isMale;
};
void Tiger::setIsMale(bool isMale) {
	this->isMale = isMale;
};

string Tiger::getInfo() {
	return getGeneralInfo() + ", number of stipes = " 
		+ to_string(numOfStripes) + ", is male = " + to_string(isMale);
};