#include<stdio.h>
int main()
{
int n,m,count=0,t,i;
scanf("%d%d",&n,&m);
if(n>m)
    t=m;
else
    t=n;
for(i=0;i<t;i++){
    count++;
    n=n-1;
    m=m-1;
    if(n==0 || m==0)
        break;
}
if(count%2==0)
    printf("Malvika");
else
printf("Akshat");

return 0;
}
