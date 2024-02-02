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
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(k==1) 
        cout<<1<<endl;
        else if(k==2){
            if(m>n)
            cout<<(n-1)+m/n<<endl;
            else
            cout<<m<<endl;
        }
        else if(k==3){
            if(m>n)
            cout<<(m-(n-1))-(m/n)<<endl;
            else
            cout<<0<<endl;
        }
        else
        cout<<0<<endl;
    }
    return 0;
}