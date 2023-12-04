#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define yes cout<<YES<<endl
//#define no cout<<NO<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

      bool ok=false;
      for(int i=1;i<n-1;i++){
        if(a[i]!=a[i-1] and a[i]!=a[i+1]){
            cout<<i+1<<endl;
            ok=true;
        }
      }
      if(!ok){
        if(a[0]!=a[1])
        cout<<1<<endl;
        else
        cout<<n<<endl;
      }

    }
    return 0;
}
