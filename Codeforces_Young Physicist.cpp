#include<bits/stdc++.h>

using namespace std;
main()
{
 int n,i,j,c=0,c1=0,c2=0;
 cin>>n;
 int a[n][3];

 for(i=0;i<n;i++)
 {
     for(j=0;j<3;j++)
     {
       cin>>a[i][j];
     }
     c=c+a[i][0];
     c1=c1+a[i][1];
     c2=c2+a[i][2];

 }


    if(c==0 && c1==0 && c2==0)
        cout<<"YES";

else
    cout<<"NO";



}
