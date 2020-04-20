#include<stdio.h>
int main()
{
 int n,i,a;
 int sum1=0,sum2=0,sum3=0,sum4=0,total=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a==1)
        sum1++;
    else if(a==2)
        sum2++;

     else if(a==3)
        sum3++;

     else if(a==4)
        sum4++;
 }
 total=sum4;
 sum4=0;
 total+=sum2/2;
 sum2=sum2%2;

 if(sum1>=sum3){
    total+=sum3;
    sum1=sum1-sum3;
    sum3=0;
    total+=sum1/4;
    sum1=sum1%4;

     if(sum1+sum2*2<=4 && sum1+sum2*2>0){
    total++;
    sum1=0;
    sum2=0;
 }
 else if(sum1==3 && sum2==1){
    total=total+2;
    sum1=0;
    sum2=0;
 }
 }

else if(sum1<sum3){
    total=total+sum1;
    sum3=sum3-sum1;
    sum1=0;
    total+=sum3+sum2;
}

printf("%d",total);
return 0;

}
