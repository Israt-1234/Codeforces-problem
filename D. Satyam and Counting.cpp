#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        set<pair<ll, ll>>st;
        ll sum1 = 0, sum2 = 0;
        for(int i = 0; i<n; i++){
            ll x, y; cin >> x >> y;
            st.insert({x, y});
        }
        for(auto it : st){
            ll a = it.first;
            ll b = it.second;
            if(st.find({a, 1-b})!=st.end())
            sum1+=n-2;
            if((st.find({a-1, 1-b})!=st.end()) and (st.find({a+1, 1-b})!=st.end()))
            sum2++;
        }
        sum1/=2;
        cout << sum1+sum2 << endl;
    }
 
    return 0;
}
