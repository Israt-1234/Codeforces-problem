/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+7;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    ll x;cin>>n>>x;

   // ll sum=((n%N)%(x%N))%N;
    // cout<<sum;
    ll res=0;
       for(int i=0;i<n.size();i++){
        res*=10;
        res+=n[i]-'0';
        res%=x;
       }
    if(res==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}