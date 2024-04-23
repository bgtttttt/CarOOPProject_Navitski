#include "CarCollection.h"

int main() {
	CarCollection collection1;
	Car car1("BMW", "x5", 5, 15250);
	Car car2("Toyota", "Highlander", 1, 39270);
	Car car3("Citroen", "c4", 10, 24851);

	collection1.add(car1);
	collection1.add(car2);
	collection1.add(car3);

	cout << "Before:\n";
	cout << collection1.convertToString();

	collection1.remove(car2);

	cout << "After:\n";
	cout << collection1.convertToString();

	return 0;
}