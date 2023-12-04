#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        string s; cin>>s;
      int lef=t/2;
      while(lef>0 && s[lef-1]==s[lef]){
        lef--;
        }
        int right=t-lef;
        cout<<right-lef<<'\n';

}

}
