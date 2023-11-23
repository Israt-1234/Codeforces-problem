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
    ll n,m;
    cin>>n>>m;
    int a[n],b[m];
    vector<int>v;
    for(int i=0; i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
     for(int i=0; i<m;i++){
        cin>>b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}
