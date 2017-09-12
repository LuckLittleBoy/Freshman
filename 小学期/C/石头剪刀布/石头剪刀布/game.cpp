#include "game.h"


game::game(void)
{
}

void game::input()
{
	sum=0;
	sum1=0;
	sum2=0;
}

void game::menbegin()
{
	cout << "请输入：  1.石头	2.剪刀	  3.布" << endl;
	cin >> man;
	sum++;
}
void game::computer()
{
	srand(unsigned int(time(0)));
	sui=rand()%3+1;
}
void game::result()
{
	int i;
	i=man-sui;
	if(i==0)
		cout << "平局！" << endl;
	if(i==1||i==-2)
	{
		sum1++;
		cout << "你输了！" << endl;
	}
	if(i==-1||i==2)
	{
		sum2++;
		cout << "你赢了！" << endl;
	}
}
void  game::tongji()
{
	cout << "共比赛" << sum << "场" << endl;
	cout << "你赢了" << sum2 << "场" << endl;
	cout << "你输了" << sum1 << "场" << endl;
	cout << "平局" << sum-sum1-sum2 << "场" << endl;
}
void game::output()
{
	if(sui==1)
		cout << "石头" << endl;
	if(sui==2)
		cout << "剪刀" << endl;
	if(sui==3)
		cout << "布" << endl;
}
game::~game(void)
{
}
