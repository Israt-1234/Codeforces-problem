#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=55;
int d[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        memset(d, 0, sizeof(d));
        int n,m,a,b;
        cin>>n>>m>>a>>b;

        bool ok=true;
        if((a*n)==(m*b)){
            ok=true;
            yes;
        }
        else{
            ok=false;
            no;
        }
        if(ok){
        for(int i=0;i<n;i++){
            for(int j=0;j<a;j++){
               d[i][(i*a+j)%m]=1;
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<d[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
        }
    }
    return 0;

}
