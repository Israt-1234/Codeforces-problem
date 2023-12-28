/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;


//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int abc;
    string asw;
    while(n--){
       
        for(int i=0;i<3;i++){
             string s;
               cin>>s;
        
      
          int counta=0,countb=0,countc=0;
        for(int i=0;i<s.size();i++){
         if(s[i]=='A')
         counta=1;
         else if(s[i]=='B')
         countb=1;
         else if(s[i]=='C')
         countc=1;
        }
        if(counta==0)
        cout<<'A'<<endl;
        if(countb==0)
        cout<<'B'<<endl;
        if(countc==0)
        cout<<'C'<<endl;
    }
    }
    return 0;
}