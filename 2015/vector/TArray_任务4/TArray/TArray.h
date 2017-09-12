#pragma once
#include<iostream>
#include <assert.h>
using namespace std;

class TArray
{
private:
	double *a;
	int n;
public:
	TArray();
	TArray(int number);
	TArray(TArray &p);
	~TArray();

    //operator as member functions
	TArray operator=(TArray);
	double& operator[](int i) {return a[i];}

	//operator as friend functions
   friend ostream& operator << (ostream& output, const TArray& V);
	friend TArray operator + (TArray V1, TArray V2);
};



