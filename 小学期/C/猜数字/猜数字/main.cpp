#include"judgenumber.h"

void main()
{
	int i=1,t;
	double limit;
	
 	cout<<"请设定游戏的时间限制："<<endl;
	cin>>limit;

	while(i)
	{
		judgenumber j;
		
		j.random();
		j.compare(limit);

		cout<<"你想继续游戏吗？" << "1.继续    2.退出"<<endl;
		cin>>t;
		
		if(t==1)
			i=1;
		else
			i=0;
	}
}