#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
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
        string s;
        cin>>s;
        bool ok =false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ok=true;
                break;
            }
        }
        if(ok)
        yes;
        else
        no;
    }
    return 0;
}