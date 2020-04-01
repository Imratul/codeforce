#include<stdio.h>
#include<string.h>

int check(char);
int main()
{
 char st[100];
 int l,i,j=0;
 char tem;
 char t[100];

 scanf("%s",st);

 l=strlen(st);

 for(i=0;i<l;i++)
 {
     if(check(st[i])==0)
     {
         t[j]=st[i];
         j++;

     }

 }
 t[j]='\0';
 l=strlen(t);
 int k=l*2,m=0;
 char T[k];
 for(i=0;i<k;i++)
 {
    if(i%2==0)
    {
        T[i]='.';
    }
    else
    {
        if(t[m]<97)
        {
            t[m]=t[m]+32;
            T[i]=t[m];
            m++;
        }
        else
        {
            T[i]=t[m];
            m++;
        }
    }

 }
 T[i]='\0';


 printf("%s",T);
 return 0;
}

int check(char ch)
{
    if(ch== 'a'|| ch== 'A'||ch== 'e'||ch== 'E'||ch== 'i'||ch== 'I'||ch== 'o'||ch== 'O'||ch== 'u'||ch== 'U'||ch=='Y'||ch=='y')
        return 1;
    else
        return 0;
}


