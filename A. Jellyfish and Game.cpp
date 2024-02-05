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
        ll n,m,k;
        cin>>n>>m>>k;
        ll sum=0;
       vector<ll>v(n);   //v(n)=v.resize(n);
       vector<ll>g(m);   //g(m)=g.resize(m);
       for(int i=0;i<n;i++)
       cin>>v[i];
       for(int i=0;i<m;i++)
       cin>>g[i];

       sort(v.begin(),v.end());
       sort(g.begin(),g.end());
       if(k%2==0){
        if(v[0]<g[m-1]){
            swap(v[0], g[m-1]);
       sort(v.begin(),v.end());
       sort(g.begin(),g.end());
        }
         if(v[n-1]>g[0]){
            swap(v[n-1], g[0]);
    //    sort(v.begin(),v.end());
    //     sort(g.begin(),g.end());
        }
       }
       else{
         if(v[0]<g[m-1]){
      swap(v[0], g[m-1]);
    //     sort(v.begin(),v.end());
    //    sort(g.begin(),g.end());
        }
       }
      
       for(auto it:v)
       sum+=it;
       cout<<sum<<endl;
    }
    return 0;
}