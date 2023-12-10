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
        ll n; cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll l=0,r=0;
         ll sum=0;
        map<ll,ll>mp;
        while(l<n){
          if(l==r){
            sum+=b[r];
            r++;
          }
          while(r<n && sum>=b[r]){
            sum+=b[r];
            r++;

          }
          mp[b[l]]=r-1;
          l++;
        }
        for(int i=0;i<n;i++)
        cout<<mp[a[i]]<<" ";
        cout<<endl;
      
       
    }
    
    return 0;
}