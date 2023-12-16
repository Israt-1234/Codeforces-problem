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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int N1=n;
        string s;cin>>s;
        int count =0;
        reverse(s.begin(),s.end());
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
                v.push_back(i-v.size());
              //  cout<<v[i];
            }
        }

        vector<ll>v1(n,0);
        for(int i=0;i<v.size();i++){
            if(i<=0) v1[i]=v[i];
            else
            v1[i]=v1[i-1]+v[i];
        }
    
      int k=n-v1.size();
    for(int i=0;i<count;i++)
    cout<<v1[i]<<" ";
    for(int i=0;i<n-count;i++)
    cout<<-1<<" ";
    cout<<endl;
    }

    return 0;
}