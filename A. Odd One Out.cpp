/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int abs;
    string s;
    while(n--){
        int a,b,c; cin>>a>>b>>c;
        if(a!=b && a!=c)
        cout<<a<<endl;
        else if(b!=a && b!=c)
        cout<<b<<endl;
        else
        cout<<c<<endl;
    }
    return 0;
}