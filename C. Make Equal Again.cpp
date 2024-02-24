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
        int t;cin>>t;
        int a[t];
        for(int i=0;i<t;i++)
        cin>>a[i];
        int left=1;
        int right=1;
        for(int i=0;i<t-1;i++){
            if(a[i+1]!=a[i]) 
            break;
             left++;
            }
        
        for(int i=t-1;i>=1;i--){
         if(a[i]!=a[i-1])
         break;
         right++;
        }
        int ans=0;
      if(a[0]==a[t-1]){
        ans=min(t,left+right);
      }
     else{
            ans=min(t,max(left,right));
        }
        cout<<(t-ans)<<endl;

    }
    return 0;
}