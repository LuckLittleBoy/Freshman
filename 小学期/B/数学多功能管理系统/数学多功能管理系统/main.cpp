#include"makeup.h"
 
int main()
{
	int i,l=1;
	makeup m;

	while(l)
	{
		cout << "  ��ѡ�������һ����Ŀ��"<< endl;
	    cout << "1 ������1000 ���ڣ�"<< endl<<"2 ˮ�ɻ���"<<endl<<"3 ������1000 ���ڣ�"<<endl<<"4 ð�ݷ�����"<<endl<<"5 �ַ�������Ϣ������� "<<endl<<"6 �˳�"<<endl;
	    cout << "��ѡ��" << endl;
	    cin >> i;
		switch(i)
		{
		case 1:m.sushu();break;
		case 2:m.shuixianhua();break;
		case 3:m.wanshu();break;
		case 4:m.maopao();break;
		case 5:m.zifu();break;
		case 6:l=0;
		}
	}

    return 0;
}