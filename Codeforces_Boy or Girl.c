#include<stdio.h>
#include<string.h>
int main()
{
 int i,l,j,sum=0;
 char arr[101];
 scanf("%s",arr);
 l=strlen(arr);
 int a[26]={0};
 for(i=0;i<l;i++)
     a[arr[i]-97]++;

 for(i=0;i<26;i++)
 {
       if(a[i]>0)
        sum++;
 }

if(sum%2==0)
    printf("CHAT WITH HER!");
else
    printf("IGNORE HIM!");


return 0;
}
