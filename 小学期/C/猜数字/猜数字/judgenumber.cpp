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
		cout<<"���������µ�����"<<endl;
        cin>>num; 

		if(num>true_num)
		   cout<<"����ȷ���ִ�"<<endl;
	    if(num==true_num)
		{
			cout<<"��ϲ�³���ȷ���֣�" << " " << true_num <<endl;
			i=0;
		}
		   
	    if(num<true_num)
		   cout<<"����ȷ����С��"<<endl;

		T[i]=time(NULL);

		use_time=std::difftime(T[i],Time);

		if(use_time>=limit)
		{
			cout<<"���ź���δ�����޶�ʱ���ڲ³���ȷ���֣���ȷ����Ϊ��"<< " " << true_num << endl;
			i=0;
		}
	}
	
}
judgenumber::~judgenumber(void)
{
}
