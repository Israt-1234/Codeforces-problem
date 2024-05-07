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
    ll x1, y1, x2, y2;
    cin >> x1 >>y1 >> x2 >> y2;
    ll dis_x=abs(x1-x2);
    ll dis_y = abs(y1-y2);
    ll dis_X= dis_x*dis_x;
    ll dis_Y= dis_y*dis_y;
    double ans=sqrt((double)dis_X+dis_Y);
    cout <<fixed<<setprecision(9)<< ans << endl;
    return 0;
}