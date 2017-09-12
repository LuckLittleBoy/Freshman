#include "matrix.h"


matrix::matrix(void)
{
	p=NULL;
	n=0;
}
matrix::matrix(int m)
{
	n=m;
	int i;
	p=new double*[n];
	for(i=0;i<n;i++)
		*(p+i)=new double[n];
}
matrix::matrix(matrix &C)
{
	n=C.n;
	int i,j;
	p=new double*[n];
	for(i=0;i<n;i++)
		*(p+i)=new double[n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			p[i][j]=C.p[i][j];
}


matrix::~matrix(void)
{
}
void matrix::setjz()
{
	int i,j;
	cout<<"输入方阵的行数：";
	cin>>n;
	p=new double*[n];
	for(i=0;i<n;i++)
		*(p+i)=new double[n];
	cout<<"请输入方阵各元素值："<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>p[i][j];
}
double matrix::ji()
{
	int i;
	double m=0;
	for(i=0;i<n;i++)
		m+=p[i][i];
	return m;
}
double matrix::hls()
{
	int i,j,k,sign=0;
	double t,s=1.0;
	for(i=0;i<n;i++)
	{
		if(fabs(p[i][i])<1e-10)
		{
			for(j=i+1;j<n;j++)
				if(p[j][i]!=0)
					break;
			if(j==n)
			{
				s=0;
				return s;
			}
			for(k=i;k<n;k++)
			{
				t=p[i][k];
				p[i][k]=p[j][k];
				p[j][k]=t;
			}
			sign++;
		}
		s*=p[i][i];
		for(k=i+1;k<n;k++)
			p[i][k]/=p[i][i];
		for(j=i+1;j<n;j++)
			for(k=i+1;k<n;k++)
				p[j][k]-=p[j][i]*p[i][k];
	}
	if(sign%2!=0)
		s=-s;
	return s;
}

bool matrix::is_keni()
{
	if(s==0)
		return true;
	else
		return false;
}

matrix matrix::operator=(matrix C)
{
	n=C.n;
	int i,j;
	p=new double*[n];
	for(i=0;i<n;i++)
		*(p+i)=new double[n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			p[i][j]=C.p[i][j];
	return *this;
	
}
void matrix::display()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout << p[i][j] << " ";
		cout << endl;
	}
	for(int i=0;i<n;i++) 
	{  delete [] p[i]; }   
	delete [] p;
}