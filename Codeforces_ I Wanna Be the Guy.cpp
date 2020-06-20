#include<bits/stdc++.h>
using namespace std;

main(){

int n,x,i,sum=0,p,q;
cin>>n;
cin>>p;
int arr[101]={0};
for(i=0;i<p;i++){
    cin>>x;
    if(arr[x]==0){
        arr[x]=1;
        sum++;
    }
}
cin>>q;
for(i=0;i<q;i++){
    cin>>x;
    if(arr[x]==0){
        arr[x]=1;
        sum++;
    }
}
if(sum==n)
    cout<<"I become the guy."<<endl;
else
    cout<<"Oh, my keyboard!";
return 0;
}
