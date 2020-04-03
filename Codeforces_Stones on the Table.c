#include<stdio.h>
int main()
{
 int n,i,sum=0;
 scanf("%d",&n);
 char arr[n];
 scanf("%s",arr);
 for(i=0;i<n;i++)
 {
     if(arr[i]==arr[i+1])
     {
        sum++;
     }

 }
 printf("%d",sum);


return 0;
}
