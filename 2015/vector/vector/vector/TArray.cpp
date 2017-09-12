#include "TArray.h"
#include<cmath>

TArray::TArray()
{
	a=NULL;             
	n=0;
}

TArray::TArray(TArray &p)
{
	n=p.n;
	a=new double[n];
	for(int i=0;i<n;i++)
		a[i]=p.a[i];
}

TArray::TArray(int number)
{
	n=number;
	a=new double[n];       //µÃÉêÇëÄÚ´æ
}

TArray TArray::operator=(TArray c)
{
	n=c.n;
	a=new double[c.n];
	for(int  i=0;i<n;i++)
		a[i]=c.a[i];
	return *this;
}

TArray::~TArray()
{
	delete []a;
}

double TArray::length(TArray v)
{
	double d=0.0;
	for(int i=0;i<v.n;i++)
		d+=v.a[i]*v.a[i];
	return sqrt(d);
}
