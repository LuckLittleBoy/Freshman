#include<iostream>
using namespace std;

double mon(double i)
{
	double w;

	if(i<=10)
		w=i*0.1;
	else if(i>10&&i<=20)
		w=(i-10)*0.075+10*0.1;
	else if(i>20&&i<=40)
		w=(i-20)*0.05+10*(0.1+0.075);
	else if(i>40&&i<=60)
		w=(i-40)*0.03+20*0.05+10*(0.1+0.075);
	else if(i>60&&i<=100)
		w=(i-60)*0.015+20*(0.03+0.05)+10*(0.1+0.075);
	else
		w=(i-100)*0.01+40*0.015+20*(0.03+0.05)+10*(0.1+0.075);
	return w;
}

void main()
{
	double i;
	cout<<"请输入当月利润：";
	cin>>i;

	cout<<"发放奖金总数为：" << mon(i) << "万" <<endl;

}