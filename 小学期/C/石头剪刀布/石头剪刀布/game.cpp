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
	cout << "�����룺  1.ʯͷ	2.����	  3.��" << endl;
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
		cout << "ƽ�֣�" << endl;
	if(i==1||i==-2)
	{
		sum1++;
		cout << "�����ˣ�" << endl;
	}
	if(i==-1||i==2)
	{
		sum2++;
		cout << "��Ӯ�ˣ�" << endl;
	}
}
void  game::tongji()
{
	cout << "������" << sum << "��" << endl;
	cout << "��Ӯ��" << sum2 << "��" << endl;
	cout << "������" << sum1 << "��" << endl;
	cout << "ƽ��" << sum-sum1-sum2 << "��" << endl;
}
void game::output()
{
	if(sui==1)
		cout << "ʯͷ" << endl;
	if(sui==2)
		cout << "����" << endl;
	if(sui==3)
		cout << "��" << endl;
}
game::~game(void)
{
}
