/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    //  clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll a[n];
        for(int i=1;i<=n;i++)
        cin>>a[i];
        // k=min(100*1LL,k);
        ll l=n;
       ll  r=1;
        ll sum =LLONG_MIN;
        while(l>1){
            r=l-1;
            int count =0;
            while(r>=1){
                sum=max(sum,((l*r)-(k*(a[l]|a[r])))); 
                r--;  
             //   cout<<r<<endl;
             count++;
             if(count>100)
             break;

           }
           l--;
        }
        cout<<sum<<'\n';
    }
    // clock_t ed=clock();
    // cout<<((ed-st)/CLOCKS_PER_SEC)<<endl;
    return 0;
}