#pragma once
#include<iostream>
using namespace std;
class complex
{
public:
	complex(double real=0.0,double image=0.0) 
	{
		this->real=real,this->image=image;
	}
	void display();
    friend complex operator + (complex A,complex B);
	friend complex operator-(complex A, complex B);
	friend istream& operator >> (istream&, complex&);
    friend ostream& operator << (ostream&, complex&);
	~complex(void);
private:	
	double real;    	
	double image;	   
};

