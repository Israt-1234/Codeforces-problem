#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; cin>>t;
    while(t--){
        int n; cin>>n;
        ll mn1=INT_MAX;
      ll mn2=1e9;
        ll sum=0;
        while(n--){
            int m; cin>>m;
            vector<ll>v(m);
            for(int i=0;i<m;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            sum=sum+v[1];

            mn1=min(v[1],mn1);
            mn2=min(mn2, v[0]);

        }
       ll sum1=sum+mn2-mn1;
        cout<<sum1<<'\n';
    }
    return 0;
}
