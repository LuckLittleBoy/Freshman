#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//��������ֵ

	double i,x,y;
	cout<<"������һ���Ƕȣ�";
	cin>>i;
	x=(i/180)*3.1415926;
	y=tan(x);
	cout<< i << "�ȵ�����ֵΪ��"<< y << endl;

	//�����������

	double a,b;
	cout<<"��������������ʵ����"<<endl;
	cin>>a>>b;
	if(a<=0||b<=0)
	{
		cout<<"����������ٴ�������������ʵ����"<<endl;
	    cin>>a>>b;
	}
	double y1,y2;
	y1=log10(a)/log10(b);
	y2=pow(a,b);
	cout<< "��" << b << "Ϊ��" << a << "�Ķ���Ϊ��"<< y1 <<endl;
	cout<< b << "��" << a << "����Ϊ��"<< y2<<endl;

	return 0;
}