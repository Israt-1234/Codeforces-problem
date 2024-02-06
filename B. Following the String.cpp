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
        int s[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        map<char,int>l;
    string k="";
    for(int i=0;i<n;i++){
        for(char c='a';c<='z';c++){
            if(l[c]==s[i]){
           // cout<<l[c]<<endl;
              k+=c;
              l[c]++;
              break;
            }
            }
        }
        cout<<k<<endl;
    }
    return 0;
}