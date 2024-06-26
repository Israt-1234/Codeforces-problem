/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    
    int n; cin >> n;
    while(n--){
        ll int x, y, k;
        cin >> x >> y >> k;
        // while(k>0){
        //     x++;
        //     while(x%y ==0){
        //         x = x/y;
        //     }
        //     k--;
        // }
        // cout << x << endl;
        while(x!=1 and k>0){
            ll int increment = y-(x%y);
            x = x + min(increment, k);
            k = k- min(increment, k);
            while(x%y == 0){
                x =x / y;
            }
        }
        if(x == 1){
            x =x + k%(y-1);
        }
        cout << x << "\n";
    }
    return 0;
}