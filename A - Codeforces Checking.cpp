#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sum,n;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(i==0)
            n=toupper(s[0]);
        else
            n=s[i];
        sum=sum+n;
    }

    cout<<sum<<endl;
    return 0;
}

