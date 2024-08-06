/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        int t; cin >> t;
        string k = to_string(t);
        int sum = 0;
        for(int i = 0; i < k.size(); i++){
            sum += k[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
