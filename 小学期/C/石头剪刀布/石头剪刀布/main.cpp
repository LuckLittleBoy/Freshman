#include"game.h"

void main()
{
	game g;
	int i=1;

	g.input();
	while(i)
	{
	    g.menbegin();
	    g.computer();
	    g.output();
	    g.result();
		cout << "�Ƿ������	1. ����	 2. �˳�" << endl;
		cin >> i;
		if(i==2)
			i=0;
	}
	g.tongji();
}