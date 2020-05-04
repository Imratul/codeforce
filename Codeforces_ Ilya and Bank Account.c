#include<stdio.h>
int main()
{
int n,N,l1,l2,N1;
scanf("%d",&n);
N=n;
l1=n%10;
n=n/10;
N1=n;
l2=n%10;
n=n/10;
n=(n*10)+l1;

if(n>=N1 && n>=N)
    printf("%d",n);

else if(N>=N1 && N>=n)
    printf("%d",N);

else if(N1>=n && N1>=N)
    printf("%d",N1);
return 0;
}
