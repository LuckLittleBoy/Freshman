#include "gaosi.h"


gaosi::gaosi(void)
{
}

void gaosi::set(int m)
{
	int i,j;
	n=m;
	p = new double*[n];
	for(i=0;i<n;i++)
	{
		p[i] = new double[n];
	}
	q = new double[n];
	cout<<"请依次输入每个方程中未知数的系数："<<endl;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>p[i][j];
	cout<<"请依次输入每个方程中的常数项："<<endl;
	for(i=0;i<n;i++)
		cin >> q[i];
}

void gaosi::huasanjiao()
{
	int i,j,flag,k;
	double t,z;
	for(k=0;k<n;k++)
	{
		flag=k;
		for(i=k+1;i<n;i++)
		     if(fabs(p[i][k])>fabs(p[i-1][flag]))
				 flag=i;
	    for(j=0;j<n;j++)
	    {
			t=p[flag][j];
			p[flag][j]=p[k][j];
			p[k][j]=t;
	    }

		t=q[flag];
		q[flag]=q[k];
		q[k]=t;

		for(i=k+1;i<n;i++)
		{
			z=p[i][k]/p[k][k];
			p[i][k]=0;
			q[i]=q[i]-z*q[k];


		    for(j=k+1;j<n;j++)
				   p[i][j]=p[i][j]-z*p[k][j];
		}
	}
}

void gaosi::display()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout << p[i][j] << " ";
		cout << q[i] <<" ";
		cout<<endl;
	}
}
void gaosi::jie()
{
	double *x;
	int i,j;
	x=new double[n];
	x[n-1]=q[n-1]/p[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		double m=0;
		for(j=i+1;j<n;j++)
			m=m+p[i][j]*x[j];
		x[i]=(q[i]-m)/p[i][i];
	}
	cout << "该方程组的解是："<< endl;
	for(i=0;i<n;i++)
		cout << x[i] << " ";

	
	for(int i=0;i<n;i++) 
	{  delete [] p[i]; }  
	delete [] p; 
	delete [] q;
	delete [] x;
}
gaosi::~gaosi(void)
{
}