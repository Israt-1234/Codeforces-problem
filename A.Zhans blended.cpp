// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    while(n--){
        int t; cin >> t;
        int a, b; cin >> a>>b;
        int mn = min(a, b);
        
        
        cout << ((t+mn-1)/mn) << endl;
    }
    return 0;
}
