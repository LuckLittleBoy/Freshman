 #include <iostream>
 #define n 5
 using namespace std;
 int main()
 {
	 int a[n][n],k=1,i=0,j=0;

     for(i=0;i<n;i++)
     {
          if(i%2==0)
               for(j=0;j<=i;j++)
                       a[j][i-j]=k++;
  
           else
                for(j=i;j>=0;j--)   
                     a[j][i-j]=k++;	  
	 }

     for(i=1;i<n;i++)
		 for(j=n-1;j>=n-i;j--)
              a[i][j]=n*n+1-a[n-i-1][n-j-1];

     for(i=0;i<n;i++)
	 {
         for(j=0;j<n;j++)
              cout << a[i][j]<<"  "; 
         cout << endl;
	 }
     return 0;
 }