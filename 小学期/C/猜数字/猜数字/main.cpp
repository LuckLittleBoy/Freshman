#include"judgenumber.h"

void main()
{
	int i=1,t;
	double limit;
	
 	cout<<"���趨��Ϸ��ʱ�����ƣ�"<<endl;
	cin>>limit;

	while(i)
	{
		judgenumber j;
		
		j.random();
		j.compare(limit);

		cout<<"���������Ϸ��" << "1.����    2.�˳�"<<endl;
		cin>>t;
		
		if(t==1)
			i=1;
		else
			i=0;
	}
}