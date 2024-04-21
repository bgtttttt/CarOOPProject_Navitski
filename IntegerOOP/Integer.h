#pragma once
#include <iostream>
#include <string>

using namespace std;

class Integer
{
private:
	int number;
public:
	Integer(int);
	Integer();
	~Integer();

	int getNumber();
	void setNumber(int num);
    void printNumber();

    Integer add(Integer other);
    Integer subtract(Integer other);
    Integer multiply(Integer other);
	Integer divide(Integer other);
};

