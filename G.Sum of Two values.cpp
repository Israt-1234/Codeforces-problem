// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x; cin >> n >> x;
    long long a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    vector<long long>v;
    unordered_map<long long, long long>mp;
    for(int i = 0; i<n; i++){
        long long com = x- a[i];
        if(mp.find(com)!=mp.end()){
            v.push_back(i);
            v.push_back(mp[com]);
            break;
        }
        mp[a[i]]=i;
    }
    if(v.size() == 0)
    cout << -1 << endl;
    else
    cout << v[0]+1 << " " << v[1]+1 << endl;

    return 0;
}
