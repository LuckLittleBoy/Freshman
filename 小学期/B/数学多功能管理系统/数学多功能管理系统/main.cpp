#include"makeup.h"
 
int main()
{
	int i,l=1;
	makeup m;

	while(l)
	{
		cout << "  请选择下面的一个项目："<< endl;
	    cout << "1 素数（1000 以内）"<< endl<<"2 水仙花数"<<endl<<"3 完数（1000 以内）"<<endl<<"4 冒泡法排序"<<endl<<"5 字符串中信息分类汇总 "<<endl<<"6 退出"<<endl;
	    cout << "请选择：" << endl;
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