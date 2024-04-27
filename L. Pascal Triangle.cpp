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
    ll n;cin>>n;
    int c;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0 or j==0)
            c=1;
            else
            c=(c*(i-j+1))/j;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}