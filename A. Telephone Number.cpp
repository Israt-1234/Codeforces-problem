#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        string s; cin>>s;

        int len =t-11; int count=0;
        //cout<<len;
        if(t>11){
            for(int i=0;i<=len;i++){
                if(s[i]=='8'){
               count++;
              break;
                }
            }
            if(count==1)  cout<<"YES"<<'\n';
           else           cout<<"NO"<<'\n';
        }
       else if(t==11 && s[0]=='8'){
         cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
    }
}
