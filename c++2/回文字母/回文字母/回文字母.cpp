#include <iostream>
#include <string>
using namespace std;

void main()
{
	string str;
	bool flag = 1;
	int i;

	cout << "ÇëÊäÈëÐèÒªÅÐ¶ÏµÄ×Ö·û´®¡£" <<endl;
	cin >> str;

	int n = str.find('\0');
	cout << n <<endl;
	for(i = 0;i < n;i++)
	{
		string str1(str,i,1);
		string str2(str,n - i - 1,1);
		if(str1 != str2)
			flag = 0;
	}

	if(flag == 0)
		cout << "no" <<endl;
	if(flag == 1)
		cout << "yes" <<endl;
}