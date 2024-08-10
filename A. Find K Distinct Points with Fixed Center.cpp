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
 ll t; cin >> t;
 while(t--){
     ll a, b, c; cin >> a >> b >> c;
     for(int i =1; i*2<=c ; i++){
         cout << a-i << " " << b << endl;
         cout << a+i << " " << b << endl;
     }
     if(c%2!=0)
     cout << a << " "<< b << endl;

 }
}
