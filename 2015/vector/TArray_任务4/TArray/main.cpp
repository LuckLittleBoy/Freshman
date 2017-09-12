#include "TArray.h"

int main()
{
	TArray a(4); 
	a[0] = 1; 
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	cout << "First vector:" << a << endl;

	TArray b;
	b = a;
	cout << "Second vector:" << b << endl;
    
	TArray c;
	c = a + b;
	cout << "The sum:" << c << endl;

	return 0;
}