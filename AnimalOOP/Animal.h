#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	string name;
	int weight;
	double speed;
	int age;
public:
	Animal() {};
	Animal(string name, int weight, double speed, int age) :
		name(name), weight(weight), speed(speed), age(age) {};
	~Animal() {};
	string getName();
	void setWeight(int weight);
	int getWeight();
	void setSpeed(double speed);
	double getSpeed();
	void setAge(int age);
	int getAge();

	string getGeneralInfo();
};

