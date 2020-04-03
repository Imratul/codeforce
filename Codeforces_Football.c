#include<stdio.h>
#include<string.h>
int main()
{
 char arr[100];
 int i,sum=0;
 scanf("%s",&arr);
 for(i=0;i<strlen(arr);i++)
 {
     if(arr[i]==arr[i+1])
     {
         sum++;
     }

     else if(arr[i]!=arr[i+1])
     {
        sum=0;
     }
     if(sum==6)
     {
         break;
     }

 }

 if(sum==6)
     printf("YES");

else if(sum<6)
    printf("NO");

return 0;
}
