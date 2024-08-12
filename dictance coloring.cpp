// // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int t; cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >>k;
        
        cout << (min(n,k)* min(m,k))<<endl;
    }

    return 0;
}
