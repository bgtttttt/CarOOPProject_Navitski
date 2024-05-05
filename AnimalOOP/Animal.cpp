#include "Animal.h"

string Animal::getName() {
	return name;
};
void Animal::setWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
};
int Animal::getWeight() {
	return weight;
};
void Animal::setSpeed(double speed) {
	if (speed > 0) {
		this->speed = speed;
	}
};
double Animal::getSpeed() {
	return speed;
};
void Animal::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
};
int Animal::getAge() {
	return age;
};

string Animal::getGeneralInfo() {
	return name + ": weight = " + to_string(weight) + ", speed = "
		+ to_string(speed) + ", age = " + to_string(age);
}