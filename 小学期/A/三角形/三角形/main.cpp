#include"point.h"
#include"triangle.h"

void main()
{
	point a,b,c;
	double l1,l2,l3;

	cout << "����������������꣺" << endl;
	a.input();
	b.input();
	c.input();

	triangle A;
	l1=A.p_length(a,b);
	l2=A.p_length(b,c);
	l3=A.p_length(a,c);

	if(A.is_tri(l1,l2,l3))
	{
		cout << "���������������һ�������Σ�" << endl;
		if(A.is_two(l1,l2,l3))
		{
			if(A.is_three(l1,l2,l3))
				cout << "���������ǵȱ������Σ�" << endl;
			else
				cout << "���������ǵ��������Σ�" << endl;
		}
		else
			cout << "�������β��ǵ��������Σ�" << endl;
		
		if(A.is_rightangle(l1,l2,l3))
		{
			if(A.is_two(l1,l2,l3))
				cout << "���������ǵ���ֱ�������Σ�" << endl;
		    else
			    cout << "����������ֱ�������Σ�" << endl;
		}
		else
			cout << "�������β���ֱ�������Σ�" << endl;
	}
	else
		cout << "���������겻����������Σ�" << endl;
}