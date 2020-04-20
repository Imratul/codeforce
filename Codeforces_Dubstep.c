#include<stdio.h>
int main()
{
 char arr[201];
 scanf("%s",arr);
 int l,i,f=1;
 l=strlen(arr);
 for(i=0;i<l;i++)
 {
   if(arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B' ) {
        i+=2;
        if(!f)
        printf(" ");
   }
   else{
        f=0;
        printf("%c",arr[i]);
     }
 }

return 0;
}
