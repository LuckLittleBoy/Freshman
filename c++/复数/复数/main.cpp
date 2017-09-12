#include<iostream>
#include"complex.h"
using namespace std;

complex operator +(complex A,complex B)	
{
	return complex(A.real + B.real,  B.image + B.image); 
}
complex operator -(complex A,complex B)	
{
	return complex(A.real + B.real,  B.image + B.image); 
}

void main()
{
	complex A(1.0,2.0),B(3.0,4.0),C,D,E,F;
	C=A-B;
	D=A+B;
}