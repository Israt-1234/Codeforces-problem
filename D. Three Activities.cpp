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
        int n;cin>>n;
        pair<int,int>a[n],b[n],c[n];
        for(int i=0;i<n;i++){
        cin>>a[i].first;
         a[i].second=i;
        }
        for(int i=0;i<n;i++){
        cin>>b[i].first;
        b[i].second=i;
        }
        for(int i=0;i<n;i++){
        cin>>c[i].first;
         c[i].second=i;
        }
        sort(a,a+n);
        sort(b,b+n);
        sort(c,c+n);
     int ans=0;
        for(int i=n-3;i<n;i++){
            for(int j=n-3;j<n;j++){
                for(int k=n-3;k<n;k++){
                    if(a[i].second==b[j].second || a[i].second==c[k].second || b[j].second==c[k].second)
                    continue;
                    ans=max(ans,a[i].first+b[j].first+c[k].first);
                }
            }
        }
        cout<<ans<<endl;        
    }
    return 0;
}