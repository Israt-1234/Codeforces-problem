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
    int n;cin>>n;
    while(n--){
  
        int A[4], B[4];
        for (int i = 0; i <= 3; i++)
        {
            int x, y;
            cin >> x >> y;
            A[i] = x;
            B[i] = y;
        }
        if (A[0] - A[1] != 0)
        {
            cout << abs((A[0] - A[1]) * (A[0] - A[1])) << endl;
        }
        else
        {
            cout << abs((B[0] - B[1]) * (B[0] - B[1])) << endl;
        }
    }

    return 0;
}