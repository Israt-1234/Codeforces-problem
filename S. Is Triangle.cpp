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
   double p , q,r;
    cin >> p >> q >> r;
     double s = (p + q + r) / 2;
        double area = sqrt(s * (s-p) * (s - q) * (s - r)*1.0);
    if(area>0){
    if(p + q > r || p + r > q || q + r > p)
        cout<<"Valid"<<'\n';
         cout << fixed << setprecision(6) << area << endl;
    }
    else
    cout << "Invalid" <<endl;
   
    return 0;
}