#include<bits/stdc++.h>
using namespace std;
main()
{
 int n,i,sum=0,Sum=0,j;
 cin>>n;
 int a[3];
 for(i=0;i<n;i++)
 {
     for(j=0;j<3;j++)
     {
        cin>>a[j];
        if(a[j]==1)
           sum++;
     }
     if(sum>=2)
        Sum++;
        sum=0;

 }
cout<<""<<Sum;






}
