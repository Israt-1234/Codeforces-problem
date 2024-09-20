// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    while(n--){
        long long t; cin >> t;
        long long sum = 0;
       vector<long long>v(t);
       for(int i = 0; i<t; i++){
           cin >> v[i];
           if(i<t-2)
           sum+=v[i];
       }
       cout << (v[t-1]-(v[t-2]-sum)) << endl;
    }
    return 0;
}
