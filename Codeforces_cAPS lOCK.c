#include<stdio.h>
#include<string.h>
int main()
{
 char arr[101];
 int l;
 scanf("%s",arr);
 l=strlen(arr);
 int i=0,L=0;
 if(arr[0]>=97 && arr[0]<=122){
    for(i=1;i<l;i++){
        if(arr[i]>=65 && arr[i]<=90){
            L++;
        }
    }
    if(L==(l-1)){
        for(i=0;i<l;i++){
            if(i==0 && arr[0]>=97 && arr[0]<=122)
                arr[0]=arr[0]-32;
            else if(i>0 && arr[i]>=65 && arr[i]<97)
                arr[i]=arr[i]+32;
        }
    }
 }

else if(arr[0]<=90 && arr[0]>=65){
    L=0;
    for(i=1;i<l;i++){
        if(arr[i]>=65 && arr[i]<=90){
            L++;
        }
    }
 if(L==(l-1)){
        for(i=0;i<l;i++){
            if(i==0 && arr[0]<=90 && arr[0]>=65)
                arr[0]=arr[0]+32;
            else if(i>0 && arr[i]>=65 && arr[i]<97)
                arr[i]=arr[i]+32;
        }
    }

}
 printf(arr);




return 0;
}


