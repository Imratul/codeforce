#include<stdio.h>

int main()
{

long long int n,re=0,l=0;
scanf("%lld",&n);


while(n!=0){

    if(n%10==4 || n%10==7)
        l++;

        n=n/10;
}
if(l==4 || l==7)
printf("YES");

else
    printf("NO");

return 0;
}
