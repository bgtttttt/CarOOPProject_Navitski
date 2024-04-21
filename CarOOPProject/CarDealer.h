#include "Car.h"

class CarDealer {
	double getMaxPrice(Car* list, int length);
	double getMinPrice(Car* list, int length);
	double getAvgPrice(Car* list, int length);

	Car getCheapestCar(Car* list, int length);
	Car getMostExpenciveCar(Car* list, int length);
};
