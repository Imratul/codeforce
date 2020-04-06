#include<bits/stdc++.h>

using namespace std;
main()
{
 int n,i;
 bool t=false;
 cin>>n;
 int a[12]={4,7,44,47,74,447,474,477,747,774,777,744};
 for(i=0;i<12;i++)
 {
     if(n%a[i]==0)
        t=true;
 }
 if(t==true)
    cout<<"YES";
 else
 cout<<"NO";



}
