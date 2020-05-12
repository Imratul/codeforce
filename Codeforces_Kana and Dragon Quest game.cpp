#include<bits/stdc++.h>
using namespace std;
main()
{
int t,a,l,h,i;
cin>>t;
while(t--){
    cin>>h>>a>>l;
    if(h-l*10<=0){
        cout<<"YES"<<endl;
    }
    else{
        for(i=0;i<a;i++){
            h=(h/2)+10;
            if(h-(l*10)<=0)
                break;
            else
                continue;
        }
        if(h>0){
        if(h-(l*10)<=0)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
     }
    }





}





}
