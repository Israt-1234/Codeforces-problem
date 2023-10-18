#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    int n; cin>>n;
    int q;cin>>q;
   int a[n+2];
   for(int i=1;i<=n;i++)
    cin>>a[i];
   while(q--){
        int x;cin>>x;
    int l=1,r=n;
    int mid, ans=n+1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]>=x){
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
   if(ans==0)
    cout<<n<<endl;
   else
    cout<<ans<<endl;
   }
   return 0;
}
