/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int t,n,x;
map<int,ll>mp;
ll temp,res;
void run(){
    mp.clear();
    cin>>n;
    res = temp = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        int k = it->first;
        int v = it->second;
        res += v * (v - 1) * (v - 2) / 6 + v * (v - 1) * temp / 2;
        temp += v;
    }

    cout << res << endl;
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--)
    run();
    return 0;
}