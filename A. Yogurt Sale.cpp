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
    int n;cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
       if(c<b*2)
        cout<<(a/2)*c+(a%2)*b<<endl;
        else
        cout<<a*b<<endl;
    }
    return 0;
}