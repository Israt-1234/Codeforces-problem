#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main(){
    ll t; cin >> t;
    while(t--){
     ll a, b, k; cin >> a >> b >> k;
     ll ans = ((a+k-1)/k)*2-1;
     ll ans2 = ((b+k-1)/k)*2;
     cout << max(ans, ans2) << endl;
    }
}
