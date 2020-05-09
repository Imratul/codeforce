#include<bits/stdc++.h>
using namespace std;
main(){
int t,i,sum=0,total;
int a,b;
cin>>t;
for(i=0;i<t;i++){
    cin>>a>>b;
    sum=0;
 total=(a+b-1)/b;
 total=total*b;
 sum=abs(total-a);
 cout<<sum<<endl;
}
}
