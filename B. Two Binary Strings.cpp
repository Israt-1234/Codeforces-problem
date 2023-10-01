#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
      string s,s1;
       cin>>s>>s1;
       int count=0;
       for(int i=0;i<s.size()-1;i++){
         if(s[i]==s1[i] and s[i+1]==s1[i+1] and s1[i]=='0' and s1[i+1]=='1'){
       count++; break;
         }
       }
       if(count==1) cout<<"YES"<<'\n';
       else         cout<<"NO"<<'\n';

    }
}
