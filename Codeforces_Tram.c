#include<stdio.h>
#include<math.h>
int main()
{
 int n,j,i,sum=0,a;
 scanf("%d",&n);
 int s=0;
 int arr[n][2][10];
 for(i=0;i<n;i++)
 {
     for(j=0;j<2;j++){
        scanf("%d",&a);
        if(j==0)
            sum=sum-a;
        else if(j==1)
            sum=sum+a;
     }
     if(sum>s)
     s=sum;


 }

   printf("%d ",s);

return 0;
}
