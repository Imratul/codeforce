#include<stdio.h>
int main()
{

 int n,i,e=0,o=0;
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
        e++;
    else
        o++;
 }
 if(o==1){
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d",i+1);
            return 0;
        }
    }
 }
 else if(e==1){
     for(i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d",i+1);
            return 0;
        }
    }
 }




return 0;
}
