#pragma once
#include "Animal.h"
class Crocodile : public Animal
{
private:
	double length;
	string color;
public:
	Crocodile() {};
	Crocodile(string name, int weight, double speed, int age, 
		double length, string color) :
		Animal(name, weight, speed, age), length(length), color(color) {};
	~Crocodile() {};
	double getLength();
	void setLength(double length);
	string getColor();
	void setColor(string color);

	string getInfo();
};

