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
  int t; cin>>t;
  while(t--){
    int ind=0,ind1=0;
    int n;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
         ind=i;
         
         break;
        }
    }
   
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
         ind1=i;
         break;
        }
    }
    // cout<<ind1<<ind<<endl;
    cout<<ind1-ind+1<<endl;
    
  }
    return 0;
}