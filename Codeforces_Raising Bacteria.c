#include<stdio.h>
int main()
{
int n,sum=0;
scanf("%d",&n);

while(n!=0){
    sum+=n%2;
    n/=2;
}
printf("%d",sum);

return 0;
}
