#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
       int t; int k;
       string s;
        cin>>t>>k;
        cin>>s;
        int ans=0;
        for(int i=0;i<t;i++){
            if(s[i]=='B'){
               ans++; 
               i+=k-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}