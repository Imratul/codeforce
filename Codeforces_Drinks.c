#include<stdio.h>
int main(){
 int n,i;
 float sum=0,a;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%f",&a);
    sum+=a;
 }
 printf("%.12f",sum/n);



return 0;
}
