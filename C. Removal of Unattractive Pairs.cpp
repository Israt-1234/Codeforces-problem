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
        string s;
        cin >> s;
        string temp = s;
        sort(temp.begin(), temp.end());
        if (temp[0] == temp[n - 1])
        {
            cout << n << endl;
            continue;
        }
        map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]]++;
        int mx = 0;
        for (auto x : mp)
        {
            mx = max(mx, x.second);
        }
        int len = max(0, mx - (n - mx));
        if (n % 2 == 1 and len == 0)
            len = 1;
        cout << len << endl;
    }
    return 0;
}