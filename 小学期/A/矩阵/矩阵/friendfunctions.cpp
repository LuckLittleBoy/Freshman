#include"matrix.h"

matrix operator+(matrix A,matrix B)
{
	matrix C;
	C.n=A.n;
	int i,j;
	C.p=new double*[C.n];
	for(i=0;i<C.n;i++)
		*(C.p+i)=new double[C.n];
	for(i=0;i<A.n;i++)
		for(j=0;j<B.n;j++)
			C.p[i][j]=A.p[i][j]+B.p[i][j];
	   return C;
}

matrix operator-(matrix A,matrix B)
{
	matrix C;
	C.n=A.n;
	int i,j;
	C.p=new double*[C.n];
	for(i=0;i<C.n;i++)
		*(C.p+i)=new double[C.n];
	for(i=0;i<A.n;i++)
		for(j=0;j<B.n;j++)
			C.p[i][j]=A.p[i][j]-B.p[i][j];
	   return C;
}

matrix operator*(matrix A,matrix B)
{
	matrix C;
	C.n=A.n;
	int i,j;
	C.p=new double*[C.n];
	for(i=0;i<C.n;i++)
		*(C.p+i)=new double[C.n];

	for(i=0;i<C.n;i++)
	{
	    for(int k=0;k<C.n;k++)
		{
			C.p[i][k]=0;
		     for(j=0;j<C.n;j++)
			      C.p[i][k]+=A.p[i][j]*B.p[j][k];
		}
	}
	return C;
}