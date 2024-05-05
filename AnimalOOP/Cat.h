#pragma once
#include "Animal.h"
class Cat : public Animal
{
private:
	string breed;
	int size;
public:
	Cat() {};
	Cat(string name, int weight, double speed, int age,
		string breed, int size) :
		Animal(name, weight, speed, age), breed(breed), size(size) {};
	~Cat() {};
	string getBreed();
	int getSize();
	void setSize(int size);

	string getInfo();
};

