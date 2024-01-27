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
        int n; cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
             cin>>s[i];
        }
        int ans=0;
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n/2;j++){
                char ch[4]={s[i][j],s[j][n-i-1],s[n-j-1][i],s[n-i-1][n-j-1]};
                char mx=max(max(ch[0],ch[1]), max(ch[2],ch[3]));
                for(int l=0;l<4;l++)
                ans+=mx-ch[l];

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}