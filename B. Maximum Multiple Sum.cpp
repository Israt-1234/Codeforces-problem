/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solve(int k){
    if(k <= 3){
        cout << k << endl;
    }
    else{
        cout << 2 << endl;
    }
    
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        int k; cin>>k;
        solve(k);
    }
    return 0;
}