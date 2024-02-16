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
        int n;cin>>n;
        string ns="aaa";
        n-=3;
        for(int i=2;i>=0;i--){
          int x=min(25,n);
          ns[i]+=x;
          n-=x;

        }
        cout<<ns<<endl;
     
    }
    return 0;
}