#include "judgenumber.h"


judgenumber::judgenumber(void)
{
}

void judgenumber ::random()
{
	srand(unsigned int(time(0)));
	true_num=rand()%10000+1;
	
}

void judgenumber :: compare(double limit)
{
	int num,i=1;
	Time=time(NULL);

	while(i)
	{
		cout<<"请输入所猜的数："<<endl;
        cin>>num; 

		if(num>true_num)
		   cout<<"比正确数字大！"<<endl;
	    if(num==true_num)
		{
			cout<<"恭喜猜出正确数字：" << " " << true_num <<endl;
			i=0;
		}
		   
	    if(num<true_num)
		   cout<<"比正确数字小！"<<endl;

		T[i]=time(NULL);

		use_time=std::difftime(T[i],Time);

		if(use_time>=limit)
		{
			cout<<"很遗憾，未能在限定时间内猜出正确数字，正确数字为："<< " " << true_num << endl;
			i=0;
		}
	}
	
}
judgenumber::~judgenumber(void)
{
}
