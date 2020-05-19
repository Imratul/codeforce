#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,tem=0,j;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
    if(i==0)
        tem=arr[i];
    if(i!=0 && arr[i]<tem)
     tem=arr[i];
}
for(tem=tem;tem<=n;tem++)
{
    for(j=0;j<n;j++){
      if(tem==arr[j])
        {
          cout<<j+1<<" ";
        }
    }

}




}
