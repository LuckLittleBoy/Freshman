#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,d;
	cout<<"�����뷽�̵�����ϵ��:"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0)
	{
		cout<<"�����޽⣡���������룺"<<endl;
		cin>>a>>b>>c;
	}
	if(a==0)
		cout<<"���̵Ľ�Ϊ��" << (-c/b) <<endl;
	else
	{
		if(d>0)
			cout<<"���̵Ľ�Ϊ"<< -b/(2*a)+sqrt(d)/(2*a) <<","<< -b/(2*a)-sqrt(d)/(2*a) << endl;
	    else
		    cout<<"���̵Ľ�Ϊ"<< -b/(2*a)+sqrt(d)/(2*a) <<endl;
	}
	return 0;
}