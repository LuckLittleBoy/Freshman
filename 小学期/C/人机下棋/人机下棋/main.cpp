#include"chess.h"

void main()
{
	chess c;
	int i,N;

	cout << "请您选择先下或者后下！"<< "1.先下	2.后下" << endl;
	cin >> N;

	c.chose();
	c.new_chess();

	if(N==1)
	{
		for(i=0;i<4;i++)
		{
			c.man_begin();
			c.result();
			if(c.M==-1)
		    {
		        c.computor_begin();
			    c.output();
				c.result();
			}
			if(c.M==1)
			{
				cout << "恭喜，您赢了！" << endl;
				break;
			}
			if(c.M==0)
			{
				cout << "对不起，您输了！" << endl;
				break;
			}
		}
		if(i==4)
		{
			c.man_begin();
			c.output();
			c.result();
			if(c.M==1)
				cout << "恭喜，您赢了！" << endl;
	
			if(c.M==0)
				cout << "对不起，您输了！" << endl;
				
			if(c.M==-1)
				cout << "平局！" << endl;
		}
	}

	if(N==2)
	{
		for(i=0;i<4;i++)
		{
			c.computor_begin();
			c.output();
			c.result();
			if(c.M==-1)
		    {
		        c.man_begin();
			    c.output();
				c.result();
			}
			if(c.M==1)
			{
				cout << "恭喜，您赢了！" << endl;
				break;
			}
			if(c.M==0)
			{
				cout << "对不起，您输了！" << endl;
				break;
			}
		}
		if(i==4)
		{
			c.computor_begin();
			c.output();
			c.result();
			if(c.M==1)
				cout << "恭喜，您赢了！" << endl;
			if(c.M==0)
				cout << "对不起，您输了！" << endl;
			if(c.M==-1)
				cout << "平局！" << endl;
		}
	}
}