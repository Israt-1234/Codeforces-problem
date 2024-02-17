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
        int t;cin>>t;
      
         int i=1,j=t;
         while(i<=j){
            if(i==j)
           { 
            cout<<i<<" ";
            i++;
            }
            else{
            cout<<i<<" "<<j<<" ";
            i++;
            j--;
            }
         }
        cout<<endl;
    }
    return 0;
}