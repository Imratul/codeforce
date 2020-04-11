#include<stdio.h>
int main()
{
 int n,i;
 scanf("%d",&n);



    for(i=1;i<=n;i++){
        if(i%2!=0)
            printf("I hate ");
        else if(i%2==0)
            printf("I love ");
        if(i==n)
            printf("it ");
        else if(i<n)
            printf("that ");
    }

printf("\n");

return 0;
}
