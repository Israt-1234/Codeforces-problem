#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n ;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
   int ans= a[0];
   int mx=a[0];
   for(int i=1;i<n;i++){
    int x=abs(a[i]);
    int y= abs(a[i-1]);
    if((x%2)!=(y%2)){
        mx=max(a[i]+mx, a[i]);
       // cout<<mx<<endl;
    }
    else
    mx=a[i];

    ans=max(ans,mx);
   }
  cout<<ans<<endl;
    }
    return 0;
}
