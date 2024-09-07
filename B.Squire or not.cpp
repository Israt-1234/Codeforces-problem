
#include <bits/stdc++.h>
using namespace std;

int main() {
     int t; cin >> t;
     while(t--){
         long long n; cin >> n;
         string s; cin >> s;
         int k = sqrt(n);
         long long d = 0;
         while(d<n and s[d]=='1'){
             d++;
         }
         if(d==n){
             if(d == 4)
             cout << "YES" << endl;
             else
             cout << "NO" << endl;
         }
         else{
             d--;
            if(d*d == n){
                cout << "YES" << endl;
            } 
            else{
                cout << "NO" << endl;
            }
         }
     }

    return 0;
}
