/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll sum(ll n){
    return n*(n+1)/2;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    // ll sum=0;
    // for(int i=n;i<=m;i++){
    //     if(i%k==0){
    //         sum+=i;
    //         i=i+(k-1);
    //     }
    // }

    ll MIn=min(n,m);
    ll Max=max(n,m);
    ll ans=sum(Max/k)*k-sum((MIn-1)/k)*k;
    cout<<ans<<endl;
    return 0;
}