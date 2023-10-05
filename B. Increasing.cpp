#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int  t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
            count ++;

            }
            else break;
        }
        if(count<n-1)
            cout<<"NO"<<'\n';
        else   cout<<"YES"<<'\n';
    }
}
