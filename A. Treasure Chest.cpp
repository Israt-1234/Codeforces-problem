#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        int x,y,z;
        cin>>x>>y>>z;
        if(x<y)
        {
            if(abs(x-y)<=z)
            {
                cout<<y<<endl;

            }
            else
            {
                cout<<((2*y)-(x+z))<<endl;

            }
        }
        else
            cout<<x<<endl;
    }
    return 0;
}
