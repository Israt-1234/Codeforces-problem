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
    float x1, y1; cin >> x1 >> y1;
    float x2, y2; cin >> x2 >> y2;
    float x3, y3; cin >> x3 >> y3;
    float slope = (y2 - y1) * (x3 - x2);      // anything/0 this is infite thats way (*)
    float slope_1 =(y3 - y2) * (x2 - x1) ;

    if(slope == slope_1)
    cout << "YES" <<endl;
    else
    cout << "NO" << endl;

    return 0;
}