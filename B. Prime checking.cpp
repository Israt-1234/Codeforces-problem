/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
bool prime(ll n){
    if(n==1) return false;
    for(int i=2;1LL*i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    if(prime(n))
    cout<<"YES\n";
    else
    cout<<"NO\n";

    return 0;
}