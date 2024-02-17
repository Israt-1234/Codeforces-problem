/*........Hard work and consistency is the only way to success........ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;
// int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[2 * n];
        for (int i = 0; i < 2 * n; i++)
            cin >> s[i];
        int sum = 0;
        sort(s,s+2*n);
        int k = INT_MAX;
        for (int i = 0; i <2*n; i+=2)
        {
                sum+=s[i];
        }
    
       cout<<sum<<endl;
    }
    return 0;
}