/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        ll x,y; cin >> x >> y;
        ll x1, y1; cin >> x1 >> y1;
        if(x == x1 and y == y1)
        cout << "YES" << endl;
        else if(x<y){
            if(x1<y1){
                cout << "YES"<<endl;
            }
            else
            cout << "NO" << endl;
        }
       else if(x>y){
        if(x1>y1)
          cout << "YES"<<endl;
        else
        cout << "NO"<<endl;
       }
        
    }
    return 0;
}