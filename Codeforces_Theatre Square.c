    #include<stdio.h>
    int main()
    {
    long long int m,n,a,t=0,T=0;

    scanf("%lld",&m);
    scanf("%lld",&n);
    scanf("%lld",&a);

    if(m%a==0)
    {
       t=m/a;
    }

    else if(m%a!=0)
    {
       t=(m/a)+1;
    }

    if(n%a==0)
    {
       T=n/a;
    }

    else if(n%a!=0)
    {
       T=(n/a)+1;
    }
    printf("%lld",t*T);
    return 0;
    }
