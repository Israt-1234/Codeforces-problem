
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
  int n; cin >> n;
  while(n--){
      int t; cin >> t;
      int a[t];
      for(int i = 0; i<t; i++)
      cin >> a[i];
      
      sort(a, a+t);
      int num = a[0];
      for(int i = 1; i<t; i++){
          num = (num+a[i])/2; 
      }
      cout << num << endl;
  }
    return 0;
}
