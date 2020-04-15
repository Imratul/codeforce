#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int sum=a,re=0;
    while(a>=b){
            sum=sum+(a/b);
            a=a/b+(a%b);


    }

    printf("%d",sum);





return 0;
}
