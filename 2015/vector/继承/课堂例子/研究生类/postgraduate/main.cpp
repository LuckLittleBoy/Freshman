//Hui Wang, March 14, 2014
#include "postgraduent.h"

void main()
{
   postgraduent hui(29,"Hui Wang", 'M',"Prof. Su");

   hui.display();
   cout << "Advisor: " << hui.getAdvisor() << endl;
}