#include"matrix.h"

void main()
{
	matrix a,b,c,d,e,f;
	a.setjz();
	cout<<"����ļ�Ϊ��"<< a.ji()<<" "<< endl;
	
	cout << "����ʽ��" << a.hls()<<endl;
	if(a.is_keni())
		cout << "����" << endl;
	else
		cout << "������" << endl;

	cout<<"��������������"<<endl;
	b.setjz();
	d.setjz();

	c=b+d;
	e=b-d;
	f=b*d;
	cout<<"������ʽ��ֵΪ��"<<endl;
	cout<<"��"<<endl;
	c.display();
	cout<<"��"<<endl;
	e.display();
	cout<<"��"<<endl;
	f.display();
}