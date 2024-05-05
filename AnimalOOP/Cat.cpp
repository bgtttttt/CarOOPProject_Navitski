#include "Cat.h"

string Cat::getBreed() {
	return breed;
};
int Cat::getSize() {
	return size;
};
void Cat::setSize(int size) { 
	if (size > 0 && size <= 10) {
		this->size = size;
	}
};

string Cat::getInfo() {
	return getGeneralInfo() + ", breed = "
		+ breed + ", size(1-10) = " + to_string(size);
};