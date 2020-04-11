#include<stdio.h>
int main()
{

 int n,i,j,c=0,a,b;
 scanf("%d",&n);

 for(i=0;i<n;i++){
    for(j=0;j<1;j++){
        scanf("%d%d",&a,&b);
    }

    if((b-a)>=2)
    {
         c++;
    }

 }
printf("%d",c);
return 0;
}

