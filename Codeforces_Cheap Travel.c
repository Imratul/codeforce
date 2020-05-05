#include<stdio.h>
int main()
{
int n,m,a,b,sum=0,M,Sum=0,sm=0;
 scanf("%d%d%d%d",&n,&m,&a,&b);

    M=n/m;
    sum+=(M*b);
    sum+=(n-(M*m))*a;
    Sum=n*a;
    sm=(M+1)*b;
    if(sum<=Sum && sum<=sm)
        printf("%d",sum);
    else if(Sum<=sum && Sum<=sm)
        printf("%d",Sum);
    else if(sm<=Sum && sm<=sum)
        printf("%d",sm);




return 0;
}
