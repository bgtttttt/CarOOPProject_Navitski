#include "Crocodile.h"
#include "Giraffe.h"
#include "Tiger.h"
#include "Cat.h"

int main() {
	Crocodile crocodile("Croc", 133, 7, 13, 70, "dark-green");
	Giraffe giraffe("Giro", 172, 23, 16, 8, 42);
	Tiger tiger("Tig", 103, 50, 15, 32, true);
	Cat cat("Cato", 3, 15, 3, "Siam", 4);

	cout << crocodile.getInfo() << "\n";
	cout << giraffe.getInfo() << "\n";
	cout << tiger.getInfo() << "\n";
	cout << cat.getInfo() << "\n";
}