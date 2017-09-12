#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(void);
	~Complex(void);
	void setValue(double, double);
	double getReal(){return real;}
	double getImag(){return imag;}
	void display();
    Complex conjugate();
private:
	double real,imag;
};
