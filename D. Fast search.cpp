#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
int n,a[N];
int search(int x)
{
    int l=1,r=n,ans=0;
    while(l<=r){
            int mid=(l+r)/2;
        if(a[mid]<=x){
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie();
      cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int q; cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
      int res=search(r);
      int res1=search(l-1);
      cout<<res-res1<<" ";
          }
          cout<<endl;
    return 0;
}
