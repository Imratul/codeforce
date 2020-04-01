#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 char p[]="X++", p1[]="++X";
 int n,i=0,sum=0;
 scanf("%d",&n);
 char a[n];

for(i=0;i<n;i++)
{

   scanf("%s",&a);

    if((strcmp(a,p)==0) || (strcmp(a,p1)==0) )
       sum++;

    else
       sum--;
}



 printf("%d",sum);



return 0;
}
