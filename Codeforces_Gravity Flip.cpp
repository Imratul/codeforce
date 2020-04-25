#include<bits/stdc++.h>
using namespace std;
main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
sort(a,a+n);
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}

return 0;
}
