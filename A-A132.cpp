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
    int n,m,k;
    cin>>n>>m>>k;
    if(n+k<=m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    }
    return 0;
}