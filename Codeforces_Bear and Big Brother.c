#include<stdio.h>
int main()
{
 int l,b;
 scanf("%d%d",&l,&b);
 int i;
 for(i=0;i<l;i++)
 {
  l=l*3;
  b=b*2;
  if(l==b || l<b)
  continue;
  else
  {
   printf("%d",i+1);
   break;
  }

 }


return 0;
}
