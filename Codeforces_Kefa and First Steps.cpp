#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i,j;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
    cin>>arr[i];
 int sum=1,tem=0;
 for(i=0;i<n;i++){
    for(j=i+1;j<=i+1;j++){
       if(arr[j]>=arr[i] && j<n)
        sum++;
       else{
          if(sum>=tem)
           tem=sum;

           sum=1;
          }
 }
 if(sum>=tem)
    tem=sum;
 }


cout<<tem;



}
