#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,d;
	cout<<"请输入方程的三个系数:"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0)
	{
		cout<<"方程无解！请重新输入："<<endl;
		cin>>a>>b>>c;
	}
	if(a==0)
		cout<<"方程的解为：" << (-c/b) <<endl;
	else
	{
		if(d>0)
			cout<<"方程的解为"<< -b/(2*a)+sqrt(d)/(2*a) <<","<< -b/(2*a)-sqrt(d)/(2*a) << endl;
	    else
		    cout<<"方程的解为"<< -b/(2*a)+sqrt(d)/(2*a) <<endl;
	}
	return 0;
}