#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
       string a, b; cin >> a >> b;
       
       cout << b[0] << a[1] << a[2] <<" "<< a[0] << b[1] << b[2] << endl;
    }
    return 0;
}