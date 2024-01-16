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
    int t; cin>>t;
    while(t--){
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        ll ar[n];
         for(int i=0;i<n;i++)
         cin>>ar[i];
       
         ll pre=0;
         for(int i=0;i<n;i++){
       ll mini=min(b, (abs(ar[i]-pre)*a));
         f-=mini;
         pre=ar[i];
         }
         if(f>0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
    return 0;
}