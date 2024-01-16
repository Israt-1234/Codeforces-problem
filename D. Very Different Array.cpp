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
    int t; cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll a[n],b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
         reverse(b,b+m);
         ll sum=0;
        for(int i=0;i<n;i++){
            sum+=max(abs(a[i]-b[i]) , abs((a[i]-b[m-(n-i)])));
        }          
           cout<<sum<<endl;
    }
    return 0;
}