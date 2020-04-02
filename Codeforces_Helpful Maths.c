#include<stdio.h>
#include<string.h>
int main()
{
char a[100],i,j,l,tem=0;

scanf("%s",&a);
l=strlen(a);

for(i=0;i<l;i++)
{
   for(j=i+1;j<l;j++)
   {
       j++;
       if(a[i]>a[j])
       {
           tem=a[i];
           a[i]=a[j];
           a[j]=tem;
       }
   }
   i++;
}
printf("%s",a);

return 0;
}
