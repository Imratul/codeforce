#include<stdio.h>
#include<string.h>

int main()
{
char arr[101],new[5];

scanf("%s",arr);
int l,i,j=0,k;
l=strlen(arr);
for(i=0;i<l;i++)
{
    if(arr[i]=='h')
    {
        new[j]=arr[i];
        j++;
        k=i+1;
        break;
    }
}
for(i=i+1;i<l;i++)
{
    if(arr[i]=='e')
    {
        new[j]=arr[i];
        j++;

        break;
    }
}
for(i=i+1;i<l;i++)
{
    if(arr[i]=='l')
    {
        new[j]=arr[i];
        j++;

        break;
    }
}
for(i=i+1;i<l;i++)
{
    if(arr[i]=='l')
    {
        new[j]=arr[i];
        j++;

        break;
    }
}
for(i=i+1;i<l;i++)
{
    if(arr[i]=='o')
    {
        new[j]=arr[i];
        j++;

        break;
    }
}
new[j]='\0';
if(strcmp(new,"hello")==0)
    printf("YES");
else
    printf("NO");

return 0;
}
