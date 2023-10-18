#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll max_size=1e14;

int w,h,n;
bool ok(ll l){
  ll k=(l/w);
  ll m= (l/h);
  //ll M=k*m;
   return k>=(double) n/m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cin>>w>>h>>n;
//    for(int l=1; ; l++){
//        if(ok(l)){
//            cout<<l<<'\n';
//            return 0;
//        }
//    }

ll l=1, r=max_size;
ll ans=0;
while(l<=r){
        ll mid=(r+l)/2;
    if(ok(mid)){
            ans=mid;
        r=mid-1;
    }
    else
        l=mid+1;
}
cout<<ans<<'\n';
 return 0;
}
