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
        int a,b,c;
        cin>>a>>b>>c;
        int m[a],k[b];
        int count=0,count1=0;
        for(int i=0;i<a;i++){
        cin>>m[i];
        }
        for(int i=0;i<b;i++){
        cin>>k[i];
        
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(m[i]+k[j]<=c)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}