#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a;cin>>n;
    vector<int>v1,v2,v3;

    for(int i=1;i<=n;i++){
        cin>>a;
     if(a==1)
        v1.push_back(i);
     else if(a==2)
        v2.push_back(i);
     else
        v3.push_back(i);
    }
    int size1=min(v1.size(),(min (v2.size(),v3.size())));
    if(size1==0)  cout<<0<<'\n';
    else{
            cout<<size1<<'\n';
    for(int i=0;i<size1;i++){
        cout<<v1[i]<<' '<<v2[i]<<' '<<v3[i]<<'\n';
      }
    }
}

