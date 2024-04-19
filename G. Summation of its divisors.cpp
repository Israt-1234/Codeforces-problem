/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void divisor(ll n){
    vector<ll>v;
    
    for(int i=1;1LL*i*i<=n;i++){
        if(n%i==0){
        v.push_back(i);
        if(i!=n/i)
        v.push_back(n/i);
        }
    }
    ll sum=0;
    ll len=v.size();
    for(int i=0;i<len;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    divisor(n);
    return 0;
}