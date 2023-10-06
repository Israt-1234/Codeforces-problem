#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],b[n];
        set<int>s;

        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
            s.insert(b[i]);
        }

        int count =1;
        map<int,int>mn,mn1;
        for(int i=1;i<n;i++){
          if(a[i]==a[i-1])
            count++;
          else{
            cout<<mn[a[i-1]]<<endl;
            mn[a[i-1]]=max(mn[a[i-1]],count);
            count=1;
          }
        }
        mn[a[n-1]]=max(mn[a[n-1]],count);


        count =1;
        for(int i=1;i<n;i++){
          if(b[i]==b[i-1])
            count++;
          else{
            //cout<<mn1[b[n-1]]<<endl;
            mn1[b[i-1]]=max(mn1[b[i-1]],count);
            count=1;
          }
        }
        mn1[b[n-1]]=max(mn1[b[n-1]],count);

        int ans=0;
        for(auto v:s)
            ans=max(ans, mn[v]+mn1[v]);
        cout<<ans<<'\n';
    }
}


/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        map<int,int>ans1,ans2;
        int count=0;
        for(int i=0;i<n;i++){
                count++;
            if(a[i]!=a[i+1] or i==n-1){
               if(ans1.find(a[i])==ans1.end()){
                ans1[a[i]]=count;
            }
        else
            ans1[a[i]]=max(ans1[a[i]],count);
           count=0;
          }
        }
         count=0;
        for(int i=0;i<n;i++){
                count++;
            if(b[i]!=b[i+1] or i==n-1){
               if(ans2.find(b[i])==ans2.end()){
                ans2[b[i]]=count;
            }
        else
            ans2[b[i]]=max(ans2[b[i]],count);
           count=0;
          }
        }
        int ans=0;
        for(auto [v,val]:ans1)
            ans=max(ans, (ans1[v]+ans2[v]));
          for(auto [v,val]:ans2)
            ans=max(ans, (ans1[v]+ans2[v]));
            cout <<ans<<'\n';
    }
}
*/
