#include "TArray.h"

TArray operator + (TArray V1, TArray V2)
{
	assert(V1.n == V2.n);

	TArray V3;
	V3.n = V1.n;
	V3.a = new double[V1.n];                       
	for(int  i = 0;i < V1.n;i++)
		V3.a[i] = V1.a[i] + V2.a[i];

	return V3;
}

TArray operator - (TArray V1, TArray V2)
{
	assert(V1.n == V2.n);

	TArray V3;
	V3.n = V1.n;
	V3.a = new double[V1.n];                       
	for(int  i = 0;i < V1.n;i++)
		V3.a[i] = V1.a[i] - V2.a[i];

	return V3;
}

double operator * (TArray V1, TArray V2)
{
	assert(V1.n == V2.n);
	double d=0.0;
	for(int i=0;i<V1.n;i++)
		d+=V1.a[i]*V2.a[i];
	return d;
}

istream& operator >> (istream& input,TArray& V)
{
	for(int i=0;i<V.n-1;i++)
	{
		input>>V.a[i];
	}
	input >> V.a[V.n - 1];

	return input;
}

ostream& operator << (ostream& output, const TArray& V)
{
	output << "(";
	for(int i=0;i<V.n-1;i++)
	{
		output<<V.a[i]<<", ";
	}
	output << V.a[V.n - 1];
	output<<")";  

	return output;
}