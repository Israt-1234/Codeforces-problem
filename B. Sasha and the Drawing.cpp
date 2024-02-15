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
        ll n,k;
        cin>>n>>k;
        ll di=4*n-2;
        if(k==di){
            cout<<2*n<<endl;
        }
        else{
            if(k%2==0)
            cout<<k/2<<endl;
            else
            cout<<(k+1)/2<<endl;
        }
    }
    return 0;
}