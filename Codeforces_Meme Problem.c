#include<stdio.h>
#include<math.h>
int main()
{
 int t,i;

 double p=0,k=0,n,first=0,last=0,N,sum=0;

 scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%lf",&n);
     N=n/2;
     p=N*N;
     k=2*(sqrt(p-n));
     sum=(k+n)/2;
     first=sum;
     last=n-first;

     if(first>=0 && last>=0)
 printf("Y %.9f %.9f\n",first,last);

   else
    printf("N\n");
}

return 0;
}
