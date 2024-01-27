/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        char ch = 'a';
        int t, k;
        cin >> t >> k;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cout << ch;
            
            ch++; 
            }
            ch='a';
        }
        cout << endl;
    }

    return 0;
}