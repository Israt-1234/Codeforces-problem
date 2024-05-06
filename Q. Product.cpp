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
    ll l, r, m;
    cin>> l >> r >> m;
    ll pro = 1;
    for(int i = l ; i <= r; i++){
        pro *= (i%m);
        pro%=m;
    }
    cout << pro%m <<endl;

    return 0;
}
