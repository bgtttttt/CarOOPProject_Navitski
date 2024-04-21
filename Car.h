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
	Car(string, string, int, double);

	string getInfo();

	string getBrand();
	string getModel();
	void setAge(int nAge);
	int getAge();
	void setPrice(int nPrice);
	int getPrice();

	~Car() {};
};

