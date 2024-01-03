/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solved(int n){
            int a[n+1];
        for(int i=1;i<=n;i++)
        cin>>a[i];
       
        for(int i=1;i<=n;i++){
            if(a[i]>n || a[a[i]]<i){
                cout<<"NO"<<endl;
               return;
            }
        }
         cout<<"YES"<<endl;
    
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
     solved(n);
    }
    return 0;
}