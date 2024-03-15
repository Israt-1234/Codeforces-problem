/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int ans=1;
        for(int i=1;i*i<=x;i++){
          
            if(x%i==0){
                  if(n<=x/i){
                  ans=max(i,ans);
               }
               if(n<=i)
               ans=max(ans,x/i);
          }
        }

        cout<<ans<<endl;
    }
    return 0;
}