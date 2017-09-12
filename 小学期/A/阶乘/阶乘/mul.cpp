#include "mul.h"


mul::mul(void)
{
}

void mul::jsuan()
{
	int a[100000];//用于储存所求阶乘值的大数组
	int w;       //w：指阶乘值的位数
	int k;       //k：指每一位上的进位值
	int s=1;       //s：指当前阶乘值每一位的值乘下一阶乘的阶数，再加上当前进位值
	a[0]=1;      //n!的第一位
	k=0;         //进位初值为0
	w=1;         //w初值为1，阶乘值是个位数1
	int i,j,m;

	for(i=2;i<=2014;i++)
	{
		for(j=1;j<=w;j++)
		{
			s=a[j-1]*i+k;
		    a[j-1]=s%10; 
		    k=s/10;
		}

		//计算当前阶乘值的位数
		while(k)
		{
			w++;        
			a[w-1]=k%10;
			k=k/10;
		}
	}
	cout<<"2014的阶乘为："<<endl;
	for( m=w-1;m>=0;m--)
	{cout<<a[m];}
}
mul::~mul(void)
{
}
