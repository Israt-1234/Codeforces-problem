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
    int x , y , x1, y1;
    cin >> x >> y >> x1 >> y1;
    int x2, y2, x3 , y3;
    cin >> x2 >> y2 >> x3 >> y3;
    
    int slope_1 =(x1 - x) *(y2-y3);
     int slope_2 =(x2 - x3) *(y1-y);
     if(slope_1 == slope_2 )
     cout << "YES" << endl;
     else
     cout << "NO" <<endl;
    return 0;
}