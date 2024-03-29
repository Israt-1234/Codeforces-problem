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
        
        if(a<b and b<c)
        cout<<"STAIR"<<endl;
        else if(a<b and c<b)
        cout<<"PEAK"<<endl;
        else
        cout<<"NONE"<<endl;
    }
    return 0;
}