#include<bits/stdc++.h>
using namespace std;
main()
{
 int n,l,sum=0,i;
 cin>>n>>l;
 char tem;
 string arr;
 cin>>arr;
 while(l!=0){

 for(i=0;i<n;i++){
    if(arr[i]=='B'&& arr[i+1]=='G')
    {
        tem=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=tem;
        i++;

    }
 }
 l--;
 }
cout<<arr;

}
