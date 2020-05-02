#include<stdio.h>
int main()
{
 int n,i,sum=0,count=0,N,Sum=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    sum+=i;
    Sum+=sum;
    N=n-Sum;
    if(sum<=n)
        count++;

    if(N>=(sum+i+1))
        continue;


    else
        break;

 }

printf("%d",count);
return 0;
}
