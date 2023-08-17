#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string s,ans="";
        cin>>s;
        ans=s[0];
        for(int i=1;i<s.size();i+=2)
        {
                ans+=s[i];


        }
        cout<<ans<<endl;
    }
}
