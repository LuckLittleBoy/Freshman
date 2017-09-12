#pragma once
#include <iostream>
#include"complex.h"
using namespace std;

class add
{
public:
	add(void);
	~add(void);
	void setValue(double, double);
	double getReal(){return real;}
	double getImag(){return imag;}
	void display();
	friend void Add(double,double);
private:
	double real,imag;
};