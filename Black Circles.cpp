

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while(n--){
    int t; cin >> t;
    vector<pair<long long , long long>>v;
    for(int i =0 ;i<t; i++){
        long long x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    int ans = 0;
    long long s1,s2,d1,d2; cin >> s1 >> s2 >> d1 >> d2;
    long long d =  ((s1-d1) * 1LL * (s1-d1)) + ((s2-d2) * 1LL *(s2-d2));
    for(auto it : v){
    long long x1 = it.first, x2 = it.second;
        long long h =  ((x1-d1) * 1LL * (x1-d1)) + ((x2-d2) * 1LL * (x2-d2));
        if(h <= d){
            ans = 1;
            break;
        }

    }
    if(ans == 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    }
    
}
