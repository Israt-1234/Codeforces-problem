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
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        string s; cin>>s;
        string s1;cin>>s1;
        int ok=0; int ok1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0' and s1[i]=='1')
            ok++;
            if(s[i]=='1' and s1[i]=='0')
            ok1++;
        }
        cout<<max(ok,ok1)<<endl;
    }
    return 0;
}