#pragma once
#include "Animal.h"
class Giraffe : public Animal
{
private:
	double height;
	int numOfSpots;
public:
	Giraffe() {};
	Giraffe(string name, int weight, double speed, int age,
		double height, int numOfSpots) :
		Animal(name, weight, speed, age), height(height), numOfSpots(numOfSpots) {};
	~Giraffe() {};
	double getHeight();
	void setHeight(double height);
	int getNumOfSpots();
	void setNumOfSpots(int numOfSpots);

	string getInfo();
};

