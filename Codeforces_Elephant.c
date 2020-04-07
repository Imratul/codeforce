#include<stdio.h>
int main()
{

 int n,i=0;
 scanf("%d",&n);
 while(n!=0)
 {
     if(n>5)
     {
         n=n-5;
         i++;
     }
     else if(n<=5)
     {
         n=n-n;
         i++;
     }
 }

printf("%d",i);


return 0;
}
