#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i,j,high,low,total=0,L=0,tem;
 cin>>n;
 int arr[n],a[n];
 for(i=0;i<n;i++){
    cin>>arr[i];
    a[i]=arr[i];
 }
 sort(a,a+n);
 for(i=0;i<n;i++){
    if(arr[i]==a[0]){
        low=i;
    }

 }
 for(i=0;i<n;i++){

     if(i>=low){
        tem=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=tem;
        L++;
     }

 }
  for(i=n;i>=0;i--){
    if(arr[i]==a[n-1]){
        high=i;
    }

 }

L--;

cout<<L+high;




}
