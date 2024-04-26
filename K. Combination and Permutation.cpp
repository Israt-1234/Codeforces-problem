/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
ll fact(ll n){
    long long ans=1;
    for(int i=1;i<=n;i++)
    ans*=i;

    return ans;

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;cin>>a>>b;
    ll NCR= (fact(a)/((fact(a-b))*fact(b)));
    ll NPR= ((fact(a))/(fact(a-b)));
    cout<<NCR<<" "<<NPR<<endl;
    return 0;
}