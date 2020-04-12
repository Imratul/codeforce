#include<stdio.h>
int main()
{
 int n,h,i,sum=0;
 scanf("%d%d",&n,&h);
 int a;
 for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a<=h)
        sum+=1;
    else if(a>h)
        sum+=2;
 }
printf("%d",sum);


return 0;
}
