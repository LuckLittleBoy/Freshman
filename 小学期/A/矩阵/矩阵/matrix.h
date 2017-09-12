#pragma once
#include<iostream>
#include<new>
using namespace std;

class matrix
{
public:
	matrix(void);
	matrix(int m);
	matrix(matrix &p);
	~matrix(void);

	void setjz();
	void display();
	double ji();
	double hls();
	bool is_keni();
	friend matrix operator+(matrix A,matrix B);
	friend matrix operator-(matrix A,matrix B);
	friend matrix operator*(matrix A,matrix B);
	matrix operator=(matrix C);

private:
	int n;
    double **p,s;
};