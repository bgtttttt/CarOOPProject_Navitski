#include "CarCollection.h"

int main() {
	CarCollection collection1;
	Truck car1("BMW", "x5", 5, 15250, 10000, 10);
	PassengerCar car2("Toyota", "Highlander", 1, 39270, 5, false);
	Car car3("Citroen", "c4", 10, 24851);
	Truck car4("BMW", "x5", 6, 42532, 52542, 265);

	collection1.add(car1);
	collection1.add(car2);
	
	cout << "Before:(" << collection1.getSize() << " items)\n";
	cout << collection1.convertToString();

	collection1.add(car3);

	cout << "After1:(" << collection1.getSize() << " items)\n";
	cout << collection1.convertToString();

	collection1.remove(car2);

	cout << "After2:(" << collection1.getSize() << " items)\n";
	cout << collection1.convertToString();

	Car car5 = car1 + car2;
	bool isSame = (car1 == car4);
	cout << "\n\n" << car5.getInfo() << "\n";
	cout << "Car 1 and Car 4 " << (isSame ? "are" : "aren't") << " same\n";
	return 0;
}