#include<stdio.h>
int main()
{
int s1,s2,s3,s4;
int i,sum=0,j;
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
if(s1==s2 || s1==s3 || s1==s4)
    sum++;
 if(s2==s3 || s2==s4)
    sum++;
 if(s3==s4)
    sum++;


printf("%d",sum);


return 0;
}
