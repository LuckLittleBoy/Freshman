#include "TArray.h"

int main()
{
	int n;
	cout << "������������ά�ȣ�" << endl;
	cin>>n;
	TArray a(n); 
	cout << "������������" << endl;
	cin >> a;
	cout << "First vector:" << a << endl;

	TArray b;
	b = a;
	cout << "Second vector:" << b << endl;
    
	TArray c;
	c = a + b;
	cout << "The sum:" << c << endl;

	TArray e;
	e=a-b;
	cout<<"����"<<e<<endl;
	double d;
	d = a * b;

	cout<<"��ˣ�" << d << endl;
	cout<<"ά�ȣ�" << a.wei(a);
	cout<<"����ģ��" << a.length(a);
	return 0;
}