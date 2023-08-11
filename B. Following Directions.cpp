#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int t,x=0,y=0,ans=0;
        cin>>t;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U')
               y++;
            else if(s[i]=='R')
                x++;
            else if(s[i]=='D')
                y--;
            else if(s[i]=='L')
                x--;
                if(x==1 && y==1){
                ans=1;
                 break;
                }
        }

       if(ans==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
