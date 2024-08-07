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
    int n; cin >> n;while(n--){
        int t, s, m; cin >> t >> s >> m;
        int k = 0;
        bool ok = false;
       vector<pair<int, int>>task(t);
       for(int i = 0; i<t; i++){
        cin >> task[i].first >> task[i].second;
       }
       sort(task.begin(), task.end());
       if(task[0].first >= s)
        ok = true;
        for(int i = 1; i<t and !ok; i++){
            if(task[i].first - task[i-1].second >= s)
            ok = true;
        }
        if(m - task.back().second>=s)
        ok = true;

        if(ok)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}