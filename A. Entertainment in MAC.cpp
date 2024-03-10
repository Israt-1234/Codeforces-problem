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
    int t ;cin>>t;
    while(t--){     
     int n;cin>>n;
    string s;cin>>s;
     string l=s;
    int k=s.length();
   reverse(l.begin(),l.end());
         cout<<min(s,l+s)<<endl;    
    }
    return 0;
}