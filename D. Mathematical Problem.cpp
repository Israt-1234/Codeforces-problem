/*........Hard work and consistency is the only way to success........ */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005;
//int d[N][N],pref[N][N];
void solved(int n){
    if(n==1)
    cout<<'1'<<endl;
    else{
        cout<<"196"<<string(n-3,'0')<<endl;
        for(int i=0;i<n/2;i++){
            cout<<9<<string(i,'0')<<6<<string(i,'0')<<1<<string(n-3-2*i,'0')<<endl;
             cout<<1<<string(i,'0')<<6<<string(i,'0')<<9<<string(n-3-2*i,'0')<<endl;
        }
    }
}
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        solved(n);
    }
    return 0;
}