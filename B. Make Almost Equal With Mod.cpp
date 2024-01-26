/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solve(ll a[], ll n){
  ll k=1e18+1;
   int flag =0;
   ll mod=2;
   while(mod){
    for(int i=0;i<n-1;i++){
        if(a[i]%mod!=a[i+1]%mod)
        flag=1;
     }
     if(flag==1) break;
     else
     mod*=2;
   }
   cout<<mod<<endl;

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
     int t; cin>>t;
     while(t--){
      ll n; cin>>n;
      ll a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      solve(a, n);

     }
    return 0;
}