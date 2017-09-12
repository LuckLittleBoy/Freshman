#include "chess.h"


chess::chess(void)
{
}

void chess::new_chess()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			q[i][j]="*";
			cout << q[i][j];
		}
		cout << endl;
	}
}

void chess::chose()
{
	int s;

	cout << "请您选择所持棋子！" << "1. X	2. O" << endl;
	cin >> s;
	if(s==1)
	{
		user="X";
		computor="O";
	}
	if(s==2)
	{
		user="O";
		computor="X";
	}
}

void chess::man_begin()
{
	int i,j;
	int t=1;
	cout << "请输入您所要落子的位置：(行与列)" << endl;
	cin >> i >> j;
	while(t)
	{
		if(i==a&&j==b)
		{
			cout << "该位置已有棋子！请重新输入！" << endl;
		    cin >> i >> j;
	    }
		else 
			t=0;
	}
	q[i][j]=user;
}

void chess::computor_begin()
{
	int i,j;
	int s[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(q[i][j]=="*")
			{
				switch(i+j*3)
				{
				case 0:s[0][0]=judge(0,1,0,2)+judge(1,0,2,0)+judge(1,1,2,2);break;
				case 1:s[1][0]=judge(0,0,2,0)+judge(1,1,1,2);break;
				case 2:s[2][0]=judge(0,0,1,0)+judge(2,1,2,2)+judge(1,1,0,2);break;
				case 3:s[0][1]=judge(0,0,0,2)+judge(1,1,2,1);break;
				case 4:s[1][1]=judge(0,1,2,1)+judge(1,0,1,2)+judge(0,0,2,2)+judge(2,0,0,2);break;
				case 5:s[2][1]=judge(2,0,2,2)+judge(0,1,1,1);break;
				case 6:s[0][2]=judge(0,0,0,1)+judge(1,2,2,2)+judge(1,1,2,0);break;
				case 7:s[1][2]=judge(0,2,2,2)+judge(1,0,1,1);break;
				case 8:s[2][2]=judge(0,2,1,2)+judge(2,0,2,1)+judge(0,0,1,1);break;
				}
			}
		}
	}
	int t;
	t=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(s[i][j]>t&&q[i][j]=="*")
			{
				a=i;
				b=j;
				t=s[i][j];
			}
		}
	}
	q[a][b]=computor;

}

int chess::judge(int i,int j,int m,int n)
{
	int sum=0;
	if(q[i][j]==computor&&q[m][n]==computor )
		sum=50;
	if(q[i][j]==user&&q[m][n]==user)
		sum=25;
	if((q[i][j]==computor&&q[m][n]=="*")||(q[i][j]=="*"&&q[m][n]==computor))
		sum=10;
	if((q[i][j]==user&&q[m][n]=="*")||(q[i][j]=="*"&&q[m][n]==user))
		sum=8;
	if(q[i][j]=="*"&&q[m][n]=="*")
		sum=4;

	return sum;
}

void chess::output()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout << q[i][j] << " ";
		cout << endl;
	}
}

void chess::result()
{
	int i,j,k;
	M=-1;
	
	for(i=0;i<3;i++)
	{
		k=0;
		for(j=0;j<3;j++)
		{
			if(q[i][j]==user)
				k++;
			if(q[i][j]==computor)
				k--;
		}
		if(k==3)
			M=1;
		else if(k==-3)
			M=0;
		else
			M=-1;
	}
	for(i=0;i<3;i++)
	{
		k=0;
		for(j=0;j<3;j++)
		{
			if(q[j][i]==user)
				k++;
			if(q[j][i]==computor)
				k--;
		}
		if(k==3)
			M=1;
		else if(k==-3)
            M=0;
		else
			M=-1;
	}
    k=0;
	for(i=0;i<3;i++)
	{
		if(q[i][i]==user)
			k++;
		if(q[i][i]==computor)
			k--;
		if(k==3)
			M=1;
		else if(k==-3)
			M=0;
		else
			M=-1;
	}

	k=0;
	for(i=0;i<3;i++)
	{
		if(q[2-i][i]==user)
			k++;
		if(q[2-i][i]==computor)
			k--;
		
		if(k==3)
			M=1;
		else if(k==-3)
			M=0;
		else
			M=-1;
	}
}
chess::~chess(void)
{
}
