#include "point.h"
#include<iostream>
using namespace std;

void main()
{
	point p1,p2(1,1,1,1),p3(2,2,2,2);
	int x,y,z;
	cout<<"ÇëÊäÈëxyzµÄÖµ£º";
	cin>>x>>y>>z;
	p1.setX(x);
	p1.setY(y);
	p1.setZ(z);
	p2.display();
	cout<<endl;
	p3.display();
	cout<<endl;
	cout<<"("<<p1.getX()<<","<<p1.getY()<<","<<p1.getZ()<<")";
}