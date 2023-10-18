#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
        while(k--){
            int x; cin>>x;
            int l=1, r=n;
            int mid, ans=0;
            while(l<=r){
               mid=(l+r)/2;
               if(a[mid]<=x){
                ans=mid;
                l=mid+1;
               }
               else {
                r=mid-1;
               }
            }
            cout<<ans<<'\n';
        }

    return 0;
}
