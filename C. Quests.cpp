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
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];

        int ans=0;int sum=0;
        int mx=0;
        for(int i=0;i<min(n,k);i++){
            sum+=a[i];
            mx=max(mx,b[i]);
            ans=max(ans, sum+(k-1-i)*mx);
        }
        cout<<ans<<endl;
    }
    return 0;
}