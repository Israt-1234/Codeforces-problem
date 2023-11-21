#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n; while(n--){
   ll t; cin>>t;
    vector<int>a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
   ll operation=0;
    for(int i=t-1;i>0;i--){
        if(a[i]<a[i-1]){
            ll r = (a[i-1]-1)/a[i];
            operation+=r;
            a[i-1]=a[i-1]/(r+1);
        }
    }
    cout<<operation<<'\n';
    }
    return 0;
}

