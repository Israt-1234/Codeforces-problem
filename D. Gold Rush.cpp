/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//int d[N][N],pref[N][N];
bool solve(int n, int m){
    if(n == m){
        return true;
    }
     if(n%3!=0){
        return false;
    }
    else{
       return solve(n/3, m) or solve((2*n)/3, m);
    }

}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if(solve(a, b))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}