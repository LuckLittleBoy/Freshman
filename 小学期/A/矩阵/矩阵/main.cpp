#include"matrix.h"

void main()
{
	matrix a,b,c,d,e,f;
	a.setjz();
	cout<<"矩阵的迹为："<< a.ji()<<" "<< endl;
	
	cout << "行列式：" << a.hls()<<endl;
	if(a.is_keni())
		cout << "可逆" << endl;
	else
		cout << "不可逆" << endl;

	cout<<"请再输两个方阵："<<endl;
	b.setjz();
	d.setjz();

	c=b+d;
	e=b-d;
	f=b*d;
	cout<<"该行列式的值为："<<endl;
	cout<<"和"<<endl;
	c.display();
	cout<<"差"<<endl;
	e.display();
	cout<<"积"<<endl;
	f.display();
}