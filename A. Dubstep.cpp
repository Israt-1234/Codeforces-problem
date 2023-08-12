#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    cin>>s;
    for(int i=0; i<s.size(); )  //i++;
    {
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
        {
            i=i+3;            //i=i+2
            if(i>3)
            {
                cout<<" ";
            }

        }
        else
        {
              cout<<s[i];
            i++;          //not  count
        }
    }
    return 0;
}
