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
        for(int i=1;i<=t;i+=2){
            for(int j=i;j<=t;j*=2)
            {
                 cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
