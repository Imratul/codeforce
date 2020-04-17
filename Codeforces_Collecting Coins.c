#include<stdio.h>
int main()
{
int a,b,c,n,H1=0,H2=0,t,i,d;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d%d%d%d",&a,&b,&c,&n);

if(a>=b && a>=c)
{
    H1=a-b;
    H2=a-c;
}

else if(b>=a && b>=c){
        H1=b-a;
        H2=b-c;

}

else if(c>=a && c>=b){

    H1=c-a;
    H2=c-b;
}

d=n-(H1+H2);
if(d>=0 && d%3==0)
    printf("YES\n");
else
    printf("NO\n");


}

return 0;
}
