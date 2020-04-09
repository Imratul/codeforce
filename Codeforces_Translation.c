#include<stdio.h>
#include<string.h>
int main()
{
 char s[101],t[101];
 int l;
 scanf("%s",s);
 scanf("%s",t);
 l=strlen(s);
 strrev(s);
 if(strcmp(s,t)==0)
    printf("YES");
 else
    printf("NO");



return 0;
}
