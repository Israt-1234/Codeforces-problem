#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a.begin(),a.end());
         int count=0,mx=0;
       for(int i=0;i<n;i++){
        count++;
        if(i==n-1 or abs(a[i]-a[i+1])>k){
        mx=max(mx,count);
        count=0;
        }
       }
       cout<<n-mx<<'\n';
    }
}
