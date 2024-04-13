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
    
    while(n%2==0){
       n/=2;
    }
   // cout<<n<<endl;

    if(n>1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    
    return 0;
}