#include<bits/stdc++.h>

using namespace std;
main()
{

 int n,c=0,c1=0,r;
 cin>>n;
 if(n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%747==0||n%774==0)
 {
     cout<<"YES";
 }
 else{
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c++;
        if(r==4||r==7)
        {
            c1++;
        }

    }
    if(c==c1)
{
    cout<<"YES";
}
else
    cout<<"NO";
 }





}
