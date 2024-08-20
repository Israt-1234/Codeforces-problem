
#include <bits/stdc++.h>
using namespace std;
int main() {
     int t; cin >> t;
     while(t--){
         int n; cin >> n;
         int ans = 0;
         unordered_map<int , int>v;
         for(int i = 0; i<n; i++){
             int x; cin >> x;
             v[x]++;
              ans = max(ans, v[x]);
         }
         cout << n-ans << endl;
     }

    return 0;
}
