#include<stdio.h>
int main()
{
 int x,y,z,D,D2,D3;
 scanf("%d%d%d",&x,&y,&z);
 D=abs(x-y);
 D2=abs(y-z);
 D3=abs(x-z);
 if(D>=D2 && D>=D3)
    printf("%d",D);
 else if(D2>=D && D2>=D3)
    printf("%d",D2);

 else if(D3>=D2 && D3>=D)
    printf("%d",D3);

return 0;
}
