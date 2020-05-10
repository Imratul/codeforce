#include<stdio.h>
#include<string.h>
int main(){
int n,i,count=0;
scanf("%d",&n);
char str[101],S[101];
char tem,tab[256]={0};
scanf("%s",str);

for(i=0;i<n;i++){
    str[i]=tolower(str[i]);
    tem=str[i];
    if(tab[tem]==0){
        tab[tem]=1;
        count++;
    }
}
if(count==26)
    printf("YES");
else
    printf("NO");


return 0;
}
