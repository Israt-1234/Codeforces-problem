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
    int n; cin >> n;
    while(n--){
        string a, b; cin >> a >> b;
        int l = 0;
        for(int i = 0; i<a.size() and l<b.size(); i++){
            if(a[i] =='?'){
                a[i] = b[l];
                l++;
            }
            else if(a[i] == b[l])
              l++;
        }
        for(int i = 0; i<a.size(); i++){
            if(a[i] == '?')
            a[i] = 'a';
        }
        if(l != b.size())
        cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << a << endl;
        }
    }
    return 0;
}
