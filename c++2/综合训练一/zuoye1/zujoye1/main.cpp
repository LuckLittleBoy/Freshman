#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//计算正切值

	double i,x,y;
	cout<<"请输入一个角度：";
	cin>>i;
	x=(i/180)*3.1415926;
	y=tan(x);
	cout<< i << "度的正切值为："<< y << endl;

	//计算对数和幂

	double a,b;
	cout<<"请输入两个任意实数："<<endl;
	cin>>a>>b;
	if(a<=0||b<=0)
	{
		cout<<"输入错误！请再次输入两个任意实数："<<endl;
	    cin>>a>>b;
	}
	double y1,y2;
	y1=log10(a)/log10(b);
	y2=pow(a,b);
	cout<< "以" << b << "为底" << a << "的对数为："<< y1 <<endl;
	cout<< b << "的" << a << "次幂为："<< y2<<endl;

	return 0;
}