#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int A=0,B=0,C=0,D=0,E=0;

   A=a+b*c;
   B=a*(b+c);
   C=a*b*c;
   D=(a+b)*c;
   E=a+b+c;
   if(A>=B && A>=C && A>=D && A>=E)
    printf("%d",A);
   else if(A<=B && B>=C && B>=D && B>=E)
    printf("%d",B);
   else if(C>=B && A<=C && C>=D && C>=E)
    printf("%d",C);
   else if(D>=B && D>=C && D>=A && D>=E)
    printf("%d",D);
     else if(E>=B && E>=C && E>=A && E>=D)
    printf("%d",E);
    else if(A==0 && B==0 && C==0 && D==0 && E==0)
        printf("0");



return 0;
}
