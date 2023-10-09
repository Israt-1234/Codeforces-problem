#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    while(n--){
        int t; cin>>t;
        if(t<=6 || t==9)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(t%3==0)
                cout<<1<<" "<<4<<" "<<t-5<<endl;
            else
                cout<<1<<" "<<2<<" "<<t-3<<endl;
        }

    }
}
