#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string name;
	int age{ 0 };
public:
	Human() {};
	~Human() {};

	string getName();
	int getAge();
};

