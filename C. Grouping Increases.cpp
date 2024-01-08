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
    int n; cin>>n;

    while(n--){
        int ans=0;
        int t; cin>>t;
         int A=t+2;
         int B=t+2;
         for(int i=0;i<t;i++){
            int x;cin>>x;
            if(A>B){
                swap(A,B);
            }
            if(x<=A)
            A=x;
       
         else if(x<=B)
         B=x;
         else{
            A=x;
            ans++;
         }
     }
         cout<<ans<<endl;
    }
    return 0;
}