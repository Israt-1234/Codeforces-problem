// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n; cin >> n;
    while(n--){
        int t; cin >> t;
        int maxi = 0;
        for(int i = 1; i<=t; i++){
            int x ; cin >> x;
            maxi = max(maxi, x+(i%2?(t+1)/2:t/2));
        }
        cout << maxi<<endl;
    }
    return 0;
}
