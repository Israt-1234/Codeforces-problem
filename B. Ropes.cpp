#include<bits/stdc++.h>
using namespace std;
const int N= 1e4+9;
int a[N];
int n,k;
bool ok(double l)
{
   int count =0;
   for(int i=1;i<=n;i++){
    count+=floor (a[i]/l);
    if(count>=k)
        return true;
   }
   return false;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    double l=0, r=1e7+9;
    double ans=0;        // iteration = 100;
    while(r-l>1e-7){    //  itearation --
        double  mid=(l+r)/2;
        if(ok(mid)){
            ans=mid;
            l=mid;
        }
        else
            r=mid;
    }
    cout<< fixed<< setprecision(10)<<ans<<'\n';
    return 0;
}

