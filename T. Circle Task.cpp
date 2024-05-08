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
    ll x, y, r, n;
    cin >> x >> y >> r >> n;
    while(n--){
        ll x1, y1;
        cin >> x1 >> y1;
        double ans= sqrt(pow((x1-x), 2) + pow((y1 - y), 2));
        // cout<<ans<<endl;
        // ll ans1= sqrt(pow((x1-x), 2) + pow((y1 - y), 2));
        // cout<<ans1<<endl;
        if(ans<=r)
        cout<<"YES" <<endl;
        else
        cout << "NO" <<endl;
    }
    return 0;
}