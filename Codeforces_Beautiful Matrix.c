#include<stdio.h>

int main()
{
int a[5][5],i,j,sum=0;

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);

    }
}
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if(a[i][j]==1)
        {
           sum=(abs(i-2)+abs(j-2));
        }

    }
}

printf("%d",sum);

return 0;
}
