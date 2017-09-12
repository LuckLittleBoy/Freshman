#include"point.h"
#include"triangle.h"

void main()
{
	point a,b,c;
	double l1,l2,l3;

	cout << "请输入三个点的坐标：" << endl;
	a.input();
	b.input();
	c.input();

	triangle A;
	l1=A.p_length(a,b);
	l2=A.p_length(b,c);
	l3=A.p_length(a,c);

	if(A.is_tri(l1,l2,l3))
	{
		cout << "该三个坐标能组成一个三角形！" << endl;
		if(A.is_two(l1,l2,l3))
		{
			if(A.is_three(l1,l2,l3))
				cout << "该三角形是等边三角形！" << endl;
			else
				cout << "该三角形是等腰三角形！" << endl;
		}
		else
			cout << "该三角形不是等腰三角形！" << endl;
		
		if(A.is_rightangle(l1,l2,l3))
		{
			if(A.is_two(l1,l2,l3))
				cout << "该三角形是等腰直角三角形！" << endl;
		    else
			    cout << "该三角形是直角三角形！" << endl;
		}
		else
			cout << "该三角形不是直角三角形！" << endl;
	}
	else
		cout << "该三个坐标不能组成三角形！" << endl;
}