#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string brand;
	string model;
	int age;
	double price;
public:
	Car();
	Car(string initBrand, string initModel, int initAge, double initPrice);

	string getInfo();

	string getBrand();
	string getModel();
	int setAge(int nAge);
	int getAge();
	int setPrice(int nPrice);
	int getPrice();

	~Car() {};
};

