/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string abc; int ads,err;
    int n; cin>>n;
    while(n--){
        int t;cin>>t;
      
        int a[t];
        ll sum=0;
        for(int i=0;i<t;i++ ){
            cin>>a[i];
            sum+=a[i];
        }
       // cout<<sum<<endl;
       ll sq= sqrt(sum);
       // int k=sq;
       // cout<<k<<" "<<sq<<endl;
        if(sq*sq==sum)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}