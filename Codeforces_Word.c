#include<stdio.h>
#include<string.h>
int main()
{
 char arr[101];
 scanf("%s",arr);
 int i,l=strlen(arr);
 int sum=0,Sum=0;
 for(i=0;i<l;i++)
 {
  if(arr[i]>=97 && arr[i]<=122)
  sum++;
  else
  Sum++;

 }
 if(sum>Sum || sum==Sum)
 {
  for(i=0;i<l;i++)
  {
      arr[i]=tolower(arr[i]);
  }
  printf("%s",arr);

 }
else if(sum<Sum)
 {
  for(i=0;i<l;i++)
  {
      arr[i]=toupper(arr[i]);
  }
  printf("%s",arr);

 }


return 0;
}
