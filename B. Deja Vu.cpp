
#include<bits/stdc++.h>
using namespace std;
//using ll=long long
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1e5+9;
int a[N];
//int d[N][N],pref[N][N];
int main()
{
   // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
   int n; int q;
    cin>>n>>q;
  vector<int>a(n); int b[q];
    for(int i=0;i<n;i++)
        cin>>a[i];

            vector<int>v;
            int k=100;
      for(int i=0;i<q;i++){
            cin>>b[i];
            if(b[i]>=k)
                continue;
            else{
        v.push_back(b[i]);
        k=b[i];
            }
      }

      for(int i=0;i<n;i++){
        for(auto x:v){
            if(a[i]%(1<<x)==0){
                x=x-1;
                a[i]+=(1<<x);
            }
        }
    }


    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    }
    return 0;
}

