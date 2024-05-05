#include "CarCollection.h"

int main() {
	CarCollection collection1;
	Truck car1("BMW", "x5", 5, 15250, 10000, 10);
	PassengerCar car2("Toyota", "Highlander", 1, 39270, 5, false);
	Car car3("Citroen", "c4", 10, 24851);

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

	return 0;
}