#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n,i,j,p=0;

    cin>>n;

    char arr[n];
    cin>>arr;

    int ar[26]={0};

  for(i=0;i<n;i++){
    j=(int)arr[i]- 65;

    if(ar[j] != '*'){
        ar[j] = arr[i];
    }
    else{
        cout<<"NO"<<endl;
        p=1;
        break;
    }

    if(arr[i] != arr[i+1])
        ar[j] = '*';

  }

  if(p==0)
    cout<<"YES"<<endl;
 }
return 0;
}
