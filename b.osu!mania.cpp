// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>col;
        for(int i = 0; i<n; i++){
            string row; cin >> row;
            for(int j = 0; j<4; j++){
                if(row[j]=='#')
                col.push_back(j+1);
            }
        }
        for(int i = n-1; i>=0; i--)
        cout << col[i] << " ";
        cout << endl;
    }

    return 0;
}
