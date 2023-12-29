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
       int t; cin>>t;
        string s; cin>>s;
  
        for(int i=0;i<t;i++){
            if(s[i]=='b' || s[i]=='c'||s[i]=='d')
            cout<<s[i];
            else{
            cout<<s[i];
            if(s[i+1]=='b' || s[i+1]=='c'||s[i+1]=='d'){
                if(s[i+2]!='a' && s[i+2]!='e'){
                    cout<<s[i+1];
                    i++;               
                }
            }
            if(i!=t-1) cout<<'.';
         }

      }
    cout<<endl;    
        
   }    
    return 0;
}