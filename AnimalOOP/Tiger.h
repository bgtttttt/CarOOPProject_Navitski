#pragma once
#include "Animal.h"
class Tiger : public Animal
{
private:
	int numOfStripes;
	bool isMale;
public:
	Tiger() {};
	Tiger(string name, int weight, double speed, int age,
		int numOfStripes, bool isMale) :
		Animal(name, weight, speed, age), numOfStripes(numOfStripes), isMale(isMale) {};
	~Tiger() {};
	int getNumOfStripes();
	void setNumOfStripes(int numOfStripes);
	bool getIsMale();
	void setIsMale(bool isMale);

	string getInfo();
};

