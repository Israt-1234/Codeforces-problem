

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(n%2==0)
        cout << -1 << endl;
        else{
            for(int i = 1; i<=n/2; i++)
            cout << i << " ";
            for(int i = n; i>n/2; i--){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
