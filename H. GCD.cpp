/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll gd(ll a,ll b){

    if(a==0) return b;
    if(b==0) return a;
    if(a<b) swap(a,b);
    return gd(a%b, b);
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin>>a>>b;
     ll gcd= gd(a, b);
    //  ll gcd=__gcd(a,b);   
    cout<<gcd<<" ";
     ll lcm=(a*b)/gcd;
     cout<<lcm<<endl;
    
    return 0;
}
// time - O(log(min(a,b)))