#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl
#define No  cout<<"No"<<endl

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n ;cin>>n;
      vector<int>a(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>s;
        for(auto it:mp){
          //  cout<<x<<" "<<y<<endl;
          if(it.second>=2)
            s.push_back(it.first);
        }
        if(s.size()<2) cout<<-1<<endl;
        else{
            vector<int>b;
            bool ok1=false;
            bool ok2=false;

            for(auto it:a){
                if(it==s[0]){
                    b.push_back(ok1?2:1);
                    ok1=true;
                }
                else if(it==s[1]){
                    b.push_back(ok2?3:1);
                    ok2=true;
                }
                else
                    b.push_back(1);
            }
            for(auto it:b)
                cout<<it<<" ";
            cout<<endl;
        }

    }
    return 0;
}
