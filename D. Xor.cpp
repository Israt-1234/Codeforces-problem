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
    ll a,b,c;
    cin>>a>>b>>c;
    if(c%3==1)
    cout<<a<<endl;
    else if(c%3==2)
    cout<<b<<endl;
    else
    cout<<(b^a)<<endl;
    return 0;
}