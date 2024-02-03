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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];

      int b;
     map<int, int>m;
     for(int i=0;i<n;i++){
        cin>>b;
        m[v[i]]=b;
     }

     sort(v.begin(),v.end());
     for(int i=0;i<n;i++)
     cout<<v[i]<<" ";

     cout<<endl;

     for(int i=0;i<n;i++)
     cout<<m[v[i]]<<" ";
     cout<<endl;

    }
    return 0;
}