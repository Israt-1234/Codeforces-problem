// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
         ll t; cin >> t;
         while(t--){
             int n, m; cin >> n >> m;
             vector<int>v;
              for(int i = 0; i<n; i++){
                  int x; cin >> x;
                  v.push_back(x);
              }
              while(m--){
                  int mx = 0;
                  char s; int l, r;
                  cin >> s;
                  cin >> l >> r;
                  if(s=='+'){
                      for(int i = 0; i<n; i++){
                          if(v[i]>=l and v[i]<=r){
                              v[i] += 1;
                          }
                          mx = max(mx, v[i]);
                      }
                  }
                  else{
                      for(int i = 0; i<n; i++){
                          if(v[i]>=l and v[i]<=r){
                              v[i] -= 1;
                          }
                           mx = max(mx, v[i]);
                      }
                  }
                  cout << mx << " ";
              }
              cout << endl;
              v.clear();
         }
    return 0;
}

//optimal solution

#include<bits/stdc++.h>
using namespace std;
int main(){
long long t; cin >> t;
while(t--){
int n, m; cin >> n >> m;
int ans = 0;
for(int i = 0; i<n; i++){
int x; cin >> x;
ans = max(ans, x);
}
while(m--){
char c; cin >> c;
int l,r; cin >> l >> r;
if(l<=ans and r>=ans){
if(c=='+')
ans++;
else
ans--;
}
cout << ans << " ";
}
cout << endl;
}
return 0;
}
