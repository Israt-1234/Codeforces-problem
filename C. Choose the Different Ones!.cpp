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
    int t;cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
       vector<ll>a(n),b(m);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
       set<ll>s,aa,bb;
        for(int i=0;i<n;i++){
            if(a[i]<=k){
                s.insert(a[i]);
                aa.insert(a[i]);
            }  
        }
        
        for(int i=0;i<m;i++){
           if(b[i]<=k){
                s.insert(b[i]);
                bb.insert(b[i]);
            }    
        }
            if(s.size()==k && aa.size()*2>=k && bb.size()*2>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
    }
    return 0;
}