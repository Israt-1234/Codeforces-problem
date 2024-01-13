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
        int n;cin>>n;
        vector<int>v;
            int mx1=1;
            int mn2=1e9;
            int s=0;
        for(int i=0;i<n;i++){
            int a,x;
            cin>>a>>x;
            if(a==1)
            mx1=max(mx1,x);
            else if(a==2)
            mn2=min(mn2,x);
            else if(a==3){
                v.push_back(x);
            }
        }
        for(auto k:v){
            if(k>=mx1 && k<=mn2)
            s++;
        }
        int ans=mn2-mx1+1-s;
        cout<<max(ans,0)<<endl;
    }
    return 0;
}