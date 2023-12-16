/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n+1];
        for(int i=1;i<=n;i++)
        cin>>a[i];
        sort(a+1,a+n+1);
        ll prefix[n+1]={0};
         prefix[1]=a[1];
       for(int i=2;i<=n;i++){
        prefix[i]=prefix[i-1]+a[i];
       }
      ll ans=0;
       for(int i=0;i<=k;i++){
        ans=max(ans, (prefix[n-(k-i)]-prefix[2*i]));
       }
       cout<<ans<<'\n';
        
    }
    return 0;
}