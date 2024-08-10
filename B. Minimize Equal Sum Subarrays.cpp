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
 ll t; cin >> t;
 while(t--){
     ll n; cin >> n;
 vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        vector<int> q(n);
        for (int i = 0; i < n; ++i) {
            q[i] = p[(i + 1) % n];
        }
        
        for (int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout << "\n";

 }
}
