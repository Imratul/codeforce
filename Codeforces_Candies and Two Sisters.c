#include<stdio.h>
int main()
{
 long long int t,n,i,ans=0;
 scanf("%lld",&t);
 for(i=0;i<t;i++){
    scanf("%lld",&n);
    if(n%2==0){
        ans=(n/2)-1;
    }
    else if(n%2!=0){
        ans=n/2;
    }
    printf("%lld\n",ans);
 }



return 0;
}
