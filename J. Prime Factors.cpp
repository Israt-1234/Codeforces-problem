/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solve(ll n){
    int count=0;
    for(int i=2;1LL*i*i<=n;i++){
        
        if(n%i==0){
            while (n%i==0)
            {
                count++;
                n/=i;
            }
             cout<<"("<<i<<"^"<<count<<")";
             count=0;
             if(n>1)
              cout<<"*";
        }
       
    }
    if(n>1)
    cout<<"("<<n<<"^"<<1<<")"<<endl;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    solve(n);
    return 0;
}