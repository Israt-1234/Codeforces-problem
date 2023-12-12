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
    string k; cin>>k;
    int B =0,u=0,l=0,b=0,a=0,s=0,r=0;
    for(int i=0;i<k.size();i++){
        if(k[i]=='B')
        B++;
        else if(k[i]=='u')
        u++;
        else if(k[i]=='b')
        b++;
        else if(k[i]=='a')
        a++;
        else if(k[i]=='s')
        s++;
        else if(k[i]=='r')
        r++;
        else if(k[i]=='l')
        l++;
    
    }
     int ans=min(B,min(u/2,min(b,min(a/2,min(s,min(r,l))))));
     cout<<ans<<endl;
    return 0;
}