#include"postgraduent.h"

void main()
{
	postgraduent tong;
	tong.setvalues(20,"tongXiang Meng",'M');
	tong.setadvisor("Prof.Wang");

	tong.display();
	cout << "Advisor:" << tong.getadvisor() << endl;
}