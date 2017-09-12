#include "TArray.h"

int main()
{
	int n;
	cout << "请输入向量的维度：" << endl;
	cin>>n;
	TArray a(n); 
	cout << "请输入向量：" << endl;
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
	cout<<"减："<<e<<endl;
	double d;
	d = a * b;

	cout<<"点乘：" << d << endl;
	cout<<"维度：" << a.wei(a);
	cout<<"向量模：" << a.length(a);
	return 0;
}