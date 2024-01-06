/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    // clock_t st= clock();
    
    int t; cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        cout<<"Bob"<<endl;
        else if(a%2!=0 && b%2!=0)
        cout<<"Bob"<<endl;
        else 
        cout<<"Alice"<<endl;
    }
    return 0;
}