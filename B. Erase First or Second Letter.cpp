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
        int n; cin>>n;
        string s; cin>>s;
        set<char>st;
        int sum=0;
        for(auto x:s){
            st.insert(x);
            sum+=st.size();
        }
        cout<<sum<<endl;
    }
    return 0;
}