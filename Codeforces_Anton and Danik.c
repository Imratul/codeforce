#include<stdio.h>
int main()
{
 int n,i,A=0,D=0;
 scanf("%d",&n);
 char arr[n];
 scanf("%s",arr);
 for(i=0;i<n;i++){
    if(arr[i]=='A')
        A++;
    else
        D++;
 }
 if(A>D)
    printf("Anton");

 else if(A<D)
    printf("Danik");

 else if(A==D)
    printf("Friendship");




return 0;
}
