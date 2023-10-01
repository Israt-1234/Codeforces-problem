#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        ll t ; cin>>t;
      vector<ll>a(t),b(t);
       ll sum=0;
        for(int i=0;i<t;i++){
           cin>>a[i];
           sum= sum+a[i];
        }
          ll sum1=0;
            for(int i=0;i<t;i++){
                 cin>>b[i];
                 sum1=sum1+b[i];
            }
            sort(a.begin(),a.end());
            sort(b.begin(), b.end());

            cout<<min(sum+(t*b[0]) ,sum1+(t*a[0]))<<'\n';

    }
    return 0;
}
