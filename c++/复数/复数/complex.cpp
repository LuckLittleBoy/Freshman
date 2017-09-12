#include "complex.h"

void complex::display()
{
	cout << real;
	if(image > 0)
		cout << " + ";
	cout << image << "i";
}

complex::~complex(void)
{
}
