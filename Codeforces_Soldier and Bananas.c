#include<stdio.h>
int main()
{
long long int n,sum=0;
int k,w;

scanf("%d%lld%d",&k,&n,&w);
int i;

for(i=1;i<=w;i++)
{
   sum+=k*i;
}


if(sum<n ||sum==n)
{
    printf("0");
}
else if(sum>n)
{
    printf("%lld",sum-n);
}
return 0;
}
