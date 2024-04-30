#include "Building.h"

int main() {
	Building building;
	Flat flat1(123000, 50, 4);
	Flat flat2(146326, 55, 4);
	Flat flat3(247316, 70, 6);
	Flat flat4(123632, 50, 0);
	Flat flat5(162246, 60, 1);
	Flat flat6(145262, 55, 1);
	building.addFlat(flat1);
	building.addFlat(flat2);
	building.addFlat(flat3);
	building.addFlat(flat4);
	building.addFlat(flat5);
	building.addFlat(flat6);

	cout << "Num of humans in building: " << building.getNumOfHumans() << "\n";
	cout << "Num of humans in 4th flat: " << flat4.getNumOfHumans() << "\n";
	cout << "Full space of building: " << building.getFullSpace() << "\n";
	cout << "Full price of building: " << building.getFullPrice() << "\n";
	cout << "Avg price of sq meter: " << building.getAvgPricePerSqMeter() << "\n";
	cout << "Price of sq meter in 2nd flat: " << flat2.getPricePerSqMeter() << "\n";
	cout << "Avg occupation density: " << building.getAvgOccupDensity() << "\n";
	cout << "Num of flats with zero humans: " 
		<< building.getNumOfFlatsWithZeroHumans() << "\n";
	cout << "Num of flats with one human: "
		<< building.getNumOfFlatsWithOneHuman() << "\n";
	cout << "Num of flats with more than two humans: "
		<< building.getNumOfFlatsWithMoreTwoHumans() << "\n";

	return 0;
}