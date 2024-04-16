/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll n;
bool solve(ll x){
    return ((x*(x+1))/2<=n);
   
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   cin>>n;
    ll l=1,r=1;
    
    while(solve(r)){
        r*=2;
    }

    while(l+1<r){
    ll mid=(l+r)/2;
           
       if(solve(mid)){
        l=mid;
       }
       else
        r=mid;

    }
    cout<<l<<endl;
    return 0;
}