/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,d;
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        int a[t];
        ll sum=0;
        int k=0;
        for(int i=0;i<t;i++){
            cin>>a[i];
            sum+=a[i];
             if(a[i]%3==1)
            k=1;
            
        }
        if(sum%3==0)
        cout<<0<<endl;
        else if(sum%3==2)
        cout<<1<<endl;
        else if(k==1)
        cout<<1<<endl;
        else
        cout<<2<<endl;
       
    }
   
}
