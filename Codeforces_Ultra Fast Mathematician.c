#include<stdio.h>
#include<string.h>
int main()
{
 char a[101],b[101];
 scanf("%s",&a);
 scanf("%s",&b);
 int i;
 char n[101];
 for(i=0;i<strlen(a);i++){
    if(a[i]==b[i])
        n[i]='0';
    else
        n[i]='1';
 }
 n[i]='\0';
 printf("%s",n);



return 0;
}
