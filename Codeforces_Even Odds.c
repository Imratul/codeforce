#include<stdio.h>
int main()
{
 long long int n,i,j=0,k,p,out=0;
 scanf("%lld%lld",&n,&k);
 if(n%2==0)
    p=n/2;

 else
    p=(n/2)+1;
 if(k<=p)
    out=2*k-1;
 else if(p<k)
    out=(k-p)*2;
 printf("%lld",out);


return 0;
}
