#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
        int t; cin >> t;
      int a[t+1], b[t+1], c[t+1];
      for(int i = 1; i<=t; i++){
      cin>>a[i];
      c[t-i+1] = a[i];
      }
      int check = 1;
      for(int i = 1; i<=t; i++){
      cin >> b[i];
      if(b[i]!=a[i]) check = 0;
      }
      if(check == 0){
          check = 1;
          for(int i = 1; i<=t; i++){
              if(b[i]!=c[i]) check = 0;
          }
      }
      
     if(check) cout<< "Bob" << endl;
      else
      cout<< "Alice" << endl;
    }
}
