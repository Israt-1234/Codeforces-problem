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
    int n;cin>>n;
    while(n--){
        int a;
        cin>>a;
        
        for(int i=0;i<2*a;i++){
            for(int j=0;j<a;j++){
                if((i/2+j)%2==0)
                cout<<"##";
                else
                cout<<"..";
            }
            cout<<endl;
        }
        
    }
    return 0;
}