#include<stdio.h>
int main()
{
int n[4],i=0,y,r,j=0,tem;
scanf("%d",&y);
tem=y;
tem=tem+1;
if(y>=1000 && y<=9000)
{


for(i=tem; ;i++)
{
    y=tem;
  while(tem!=0)
   {
     n[j]=tem%10;
     tem=tem/10;
     j++;

  }
   j=0;

if((n[j]!=n[j+1]) && (n[j]!=n[j+2]) && (n[j+1]!=n[j+3]) && (n[j+1]!=n[j+2]) && (n[j+2]!=n[j+3]) && (n[j]!=n[j+3]) )
{
      printf("%d",y);
      break;
  }



else
   tem=y+1;
    continue;
}
}
return 0;

}
