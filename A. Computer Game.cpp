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
        int t; cin >> t; 
        
            string s; cin >> s;
            string k; cin >> k;
        int count = 0;
        for(int i = 0; i<t; i++){
            if(s[i] == '0')
            continue;
            else if(k[i] == '0')
            continue;
            else{
                count = 1;
            }
        }
        if(count == 0)
        cout << "YES" << endl;
        else
        cout << "NO"<<endl;
                
    }
    return 0;
}