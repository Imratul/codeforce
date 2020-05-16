#include<bits/stdc++.h>
using namespace std;
main(){
 int n,i,l=0,sum=0;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
     if(arr[i]>=l)
        l=arr[i];
 }
 sum=0;
 for(i=0;i<n;i++)
    sum+=(l-arr[i]);

 cout<<sum;


}
