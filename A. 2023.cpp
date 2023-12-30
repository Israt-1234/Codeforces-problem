/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while(n--){
        int t, k;
        cin >> t >> k;

        ll pro = 1;
        for(int i = 0, x; i < t; i++){
            cin >> x;
            pro *= x;
        }

        if(pro <= 2023 && 2023 % pro == 0){
            cout << "YES" << endl;
            cout << 2023 / pro << " ";
            for(int i = 0; i < k - 1; i++)
                cout << "1 ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    
    return 0;
}