#include<stdio.h>
#include<string.h>
int main()
{
int i,sm=0;
char arr[1001];
char tem;
int tab[256]={0};
gets(arr);
for(i=0;i<strlen(arr);i++){

    if(arr[i]>=97 && arr[i]<=122){


        tem=arr[i];
        if(tab[tem]==0){
            tab[tem]=1;
            sm++;
        }
        i=i+2;
    }


}

printf("%d",sm);

return 0;
}
