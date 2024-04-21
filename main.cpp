#include "CarDealer.h"

int main() {
	Car car1("BMW", "x5", 5, 15250);
	Car car2("Toyota", "Highlander", 1, 39270);
	Car car3("Citroen", "c4", 10, 24851);
	cout << car1.getInfo();

	return 0;
}