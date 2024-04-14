#include "CarDealer.h"

double CarDealer::getMaxPrice(Car* list, int length) {
	double max = list[0].getPrice();
	for (int i = 1; i < length; i++) {
		if (list[i].getPrice() > max) {
			max = list[i].getPrice();
		}
	}
	return max;
}
double CarDealer::getMinPrice(Car* list, int length) {
	double min = list[0].getPrice();
	for (int i = 1; i < length; i++) {
		if (list[i].getPrice() < min) {
			min = list[i].getPrice();
		}
	}
	return min;
}
double CarDealer::getAvgPrice(Car* list, int length) {
	double avg = 0;
	for (int i = 0; i < length; i++) {
		avg += list[i].getPrice();
	}
	return avg / length;
}

Car CarDealer::getCheapestCar(Car* list, int length) {
	double mark = getMinPrice(list, length);
	Car st;

	for (int i = 0; i < length; i++) {
		if (list[i].getPrice() == mark) {
			st = list[i];
			break;
		}
	}
	return st;
}
Car CarDealer::getMostExpenciveCar(Car* list, int length) {
	double mark = getMaxPrice(list, length);
	Car st;

	for (int i = 0; i < length; i++) {
		if (list[i].getPrice() == mark) {
			st = list[i];
			break;
		}
	}
	return st;
}