#include"chess.h"

void main()
{
	chess c;
	int i,N;

	cout << "����ѡ�����»��ߺ��£�"<< "1.����	2.����" << endl;
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
				cout << "��ϲ����Ӯ�ˣ�" << endl;
				break;
			}
			if(c.M==0)
			{
				cout << "�Բ��������ˣ�" << endl;
				break;
			}
		}
		if(i==4)
		{
			c.man_begin();
			c.output();
			c.result();
			if(c.M==1)
				cout << "��ϲ����Ӯ�ˣ�" << endl;
	
			if(c.M==0)
				cout << "�Բ��������ˣ�" << endl;
				
			if(c.M==-1)
				cout << "ƽ�֣�" << endl;
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
				cout << "��ϲ����Ӯ�ˣ�" << endl;
				break;
			}
			if(c.M==0)
			{
				cout << "�Բ��������ˣ�" << endl;
				break;
			}
		}
		if(i==4)
		{
			c.computor_begin();
			c.output();
			c.result();
			if(c.M==1)
				cout << "��ϲ����Ӯ�ˣ�" << endl;
			if(c.M==0)
				cout << "�Բ��������ˣ�" << endl;
			if(c.M==-1)
				cout << "ƽ�֣�" << endl;
		}
	}
}