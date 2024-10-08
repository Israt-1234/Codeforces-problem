// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
   int t; cin >> t;
   while(t--){
       int n, k; cin >> n >> k;
       int take = 0;
       int gift = 0;
       for(int i = 0;i<n; i++){
           int x; cin >> x;
           if(x>=k){
               take+=x;
           }
           else if(x==0){
               if(take>0){
                   gift++;
                   take--;
               }
           }
       }
       cout << gift << endl;
       
   }
    return 0;
}
