#include<stdio.h>
int main()
{
 char arr[1000];
 int i=0;
 scanf("%s",arr);
 if(arr[i]>=97 && arr[i]<=122)
    arr[i]=arr[i]-32;

 printf(arr);

return 0;
}
