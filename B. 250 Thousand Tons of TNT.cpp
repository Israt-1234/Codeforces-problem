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
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<int>v;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if(i*i!=n)
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(auto x:v){
            ll mx=0,mn=LLONG_MAX;
            int count =0;
            ll sum=0;
            for(int i=0;i<n;i++){
                sum+=a[i];
                count++;
                if(count==x){
                    mx=max(mx,sum);
                    mn=min(mn,sum);
                    count=0;
                    sum=0;
                }
            }
            ans=max(ans,mx-mn);
        }
        cout<<ans<<endl;
    }
    return 0;
}
